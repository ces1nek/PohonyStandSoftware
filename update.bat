@echo off
:: Skriptik provede:
:: * Smaze vsechny soubory, ktere nejsou pod kontrolou git
:: * Vrati vsechny zmeny na posledni commit
:: * Updatuje vse ze serveru
::
git clean -fd
git restore .
git pull
pause