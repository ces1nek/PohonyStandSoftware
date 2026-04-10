%% LABORATORNI STAND s Asynchronim a stejnosmernym motorem
clc
clear all


%% Stitek asynchronniho motoru:
%znacka:                SIEMENS
%typ:                   1LA7063-4AA90 IMB3\
%No:                    RRA 21111-891

%hodnoty:
%23.4 V, 1350 rpm, 0.18 kW, 50 Hz, cosFi 0.77, 9.45 A, isol. F

%zatezovaci diagram:    S6
%snimac poolohy:        ER5Kc242

%% Parametry asynchronniho motoru:
%Jmenovite hodnoty:
Pn = 180;               %jm. prikon
Un = 23.4;              %jm. napeti
pp = 2;                 %pocet polovych dvojic, [-]
fn = 50;                %jm. frekvence
In = 9.5                %jm. proud
wn = 2*pi*fn;
Ufamp = Un*sqrt(2/3)   % amplituda faz napeti

% Parametry Gamma clanku:
AsmParam.PsiS_n = 0.055            % Jmenovity statorovy tok
AsmParam.R_s = 0.25;              %odpor statoru, [Ohm]
AsmParam.Lsigma_R = 6.79e-04;          %rozptylova indukcnost, [H]
AsmParam.Xls = 0.0000001;        %wn*Ls; % Ohm rozptyl statoru (pozite pro model v simscape)

AsmParam.R_R = 0.211;             %odpor rotoru (prepocteny na stator), [Ohm]
AsmParam.Xlr = wn*AsmParam.Lsigma_R;            %rozptyl rotoru, [Ohm] (vyzadovano simscape)

AsmParam.L_s = 0.005498;          %magnetizacni indukcnost (vlastni indukcnost, statorova), [H]
AsmParam.Xm = wn*AsmParam.L_s;             %magnetizacni impedance, [Ohm]

%AamGama.X0 = 0;                 %reaktance nulove slozky po dq-transformaci, [Ohm]

% Parametry inverzniho Gamma clanku:
AsmParam.k = sqrt(AsmParam.L_s/(AsmParam.L_s+AsmParam.Lsigma_R));  % cinitel rozptylu
AsmParam.L_R = AsmParam.k^2*AsmParam.L_s;                  % rotorova indukcnost inv gama clanku
AsmParam.Lsigma_s = AsmParam.L_s*(1-AsmParam.k^2);          % rozptylova indukcnost inv gama clanku
AsmParam.R_R_ig = AsmParam.R_R*AsmParam.k^4;              % rotorovy odpor inv gama clanku                        
AsmParam.PsiR_n =0.9*(AsmParam.PsiS_n - AsmParam.Lsigma_s*In);  % Jmenovity rotorovy tok
%% Parametry menice:
Ud = 35;                %napeti meziobvodu, [V]
Fpwm = 20e3;            %frekvence PWM, [Hz]
Tpwm = 1/Fpwm;

Ts = Tpwm;              %vzorkovaci perioda
m2c_ts = Ts;            %dulezite pro X2C

%% Parametry DC motoru:
%Jmenovite hodnoty:
Pan = 560;              %jm. prikon, [W]
Uan = 24;               %jm. napeti kotvy, [V]
Ian = 23.33;            %jm. proud kotvy, [A]
n0 = 2966;              %jm. otacky, [ot/min]
w0 = 310.59;            %jm. uhlova rychlost, [rad/s]

% Parametry zmerene na DC motoru
%Ra = 0.11;              %armature resistance (odpor kotvy), [Ohm]
%La = 250e-6;            %armature inductance (indukcnost vinuti), [H]
% cfi = 0.0677;             %back-emf constant (konstanta motoru), [Vs/rad]
cfi = 0.0661;

% Parametry urcene z identifikace v X2C
ta = 2.2e-3; % ms
Ra = 0.124; % Ohm
% La = Ra*tau = 381 uH

%Mechanical:
% Jm = 0.00241;            %rotor inertia (moment setrvacnosti), [kg.m2]
% Jm = 0.0189;
Jm = 1.1e-3;
% Jm = 2.41e-3;

%% Regulator proudu kotvy DC motoru:
Kmen = 1;               %zesileni menince
Kci = 1;                %zesileni cidla proudu
Ks = Kmen*Kci/Ra;       %zesileni soustavy

f_pwm = Fpwm;           %frekvence PWM [Hz]
f = 0.75;                %kompenzacni faktor
t_men = (1/f_pwm)*f;    %casova konstanta menice

% ta = La/Ra;             %casova konstanta kotvy
t_sigma = t_men;

% podle OM plati:
CurrentRegP = ta/(2*t_sigma*Ks);  %proporcionalni slozka
CurrentRegI = 1/(2*t_sigma*Ks);   %integracni slozka

%% Regulator otacek DC motoru:
% nahradni souctova casova konstanta podrizene proudove smycky
t_sigmaI = t_men * 4 + 1/(30*2*pi);

% regulator podle SO
SpeedRegP = Jm/cfi/2/t_sigmaI;
SpeedRegI = Jm/cfi/8/t_sigmaI^2;

%SpeedRegP = 4;
%SpeedRegI = 50;



%% regulace ASM - vekrorove rizeni s orientaci na rotorovy tok
%% Regulace proudu

AsmParam.Re_ig = AsmParam.R_s+AsmParam.R_R_ig;  % ekvivalentni odpor proudove smycky
AsmParam.Tau_mot_asm_ig = AsmParam.Lsigma_s/AsmParam.Re_ig; % casova konstanta motoru
AsmParam.Ctrl_I.Ks = Kmen*Kci/AsmParam.Re_ig;              % zesileni soustavy prodove smycky;
AsmParam.Ctrl_I.CurrentRegP = AsmParam.Tau_mot_asm_ig/(2*t_sigma*AsmParam.Ctrl_I.Ks);  %proporcionalni slozka
AsmParam.Ctrl_I.CurrentRegI = 1/(2*t_sigma*AsmParam.Ctrl_I.Ks);   %integracni slozka

%% regulace otacek

AsmParam.Ctrl_W.cfi = 3*pp*AsmParam.PsiR_n/2;  % momentova konstanta motoru
AsmParam.Ctrl_W.t_suma = 2*t_men + 15e-3;  % souctova konstanta rychlostni smycky
AsmParam.Ctrl_W.SpeedRegP = Jm/AsmParam.Ctrl_W.cfi/2/AsmParam.Ctrl_W.t_suma;  %proporcionalni slozka
AsmParam.Ctrl_W.SpeedRegI = Jm/AsmParam.Ctrl_W.cfi/8/AsmParam.Ctrl_W.t_suma^2; %integracni slozka
AsmParam.Ctrl_W.Imax = In*sqrt(2);  % omezeni proudu
AsmParam.Ctrl_W.wr_max = wn*0.15;   % omezeni rotorove frekvence