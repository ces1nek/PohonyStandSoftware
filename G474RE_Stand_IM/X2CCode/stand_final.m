%% LABORATORNI STAND s Asynchronim a stejnosmernym motorem
clc
clear all

%% Stitek asynchronniho motoru:
%znacka:                SIEMENS
%typ:                   1LA7063-4AA90 IMB3
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

wn = 2*pi*fn;

%Impedance:
Rs = 0.25;              %odpor statoru, [Ohm]
Ls = 6.79e-04;          %rozptylova indukcnost, [H]
Xls = 0.0000001;        %wn*Ls; % Ohm rozptyl statoru

Rr = 0.211;             %odpor rotoru (prepocteny na stator), [Ohm]
Xlr = wn*Ls;            %rozptyl rotoru, [Ohm]

Lm = 0.005498;          %magnetizacni indukcnost (vlastni indukcnost), [H]
Xm = wn*Lm;             %magnetizacni impedance, [Ohm]

X0 = 0;                 %reaktance nulove slozky po dq-transformaci, [Ohm]

%% Parametry menice:
Ud = 35;                %napeti meziobvodu, [V]
Fpwm = 20e3;            %frekvence PWM, [Hz]
Tpwm = 1/Fpwm;

Ts = Tpwm;              %vzorkovaci perioda
m2c_ts = Ts;            %dulezite pro X2C

%% Parametry stejnosmerneho motoru:
%Jmenovite hodnoty:
Pan = 560;              %jm. prikon, [W]
Uan = 24;               %jm. napeti kotvy, [V]
Ian = 23.33;            %jm. proud kotvy, [A]
n0 = 2966;              %jm. otacky, [ot/min]
w0 = 310.59;            %jm. uhlova rychlost, [rad/s]

%Electrical torgue:
Ra = 0.11;              %armature resistance (odpor kotvy), [Ohm]
La = 250e-6;            %armature inductance (indukcnost vinuti), [H]
cfi = 0.06;             %back-emf constant (konstanta motoru), [V/rpm]

%Mechanical:
Jm = 0.0019;            %rotor inertia (moment setrvacnosti), [kg.m2]

%% PI regulator:
Kmen = 1;               %zesileni menince
Kci = 1;                %zesileni cidla proudu
Ks = Kmen*Kci/Ra;       %zesileni soustavy

f_pwm = Fpwm;           %frekvence PWM [Hz]
f = 1.5;                %kompenzacni faktor
t_men = (1/f_pwm)*f;    %casova konstanta menice

ta = La/Ra;             %casova konstanta kotvy
t_sigma = t_men;

P = ta/(2*t_sigma*Ks);  %proporcionalni slozka
I = 1/(2*t_sigma*Ks);   %integracni slozka

