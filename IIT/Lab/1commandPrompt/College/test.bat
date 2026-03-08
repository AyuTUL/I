@echo off
cls
color db
echo You have been HACKED
md ransom
cd ransom
echo $10000 has been stolem from your account. > steal.txt
echo womp womp :( >> steal.txt
type steal.txt
del steal.txt
cd..
rd ransom
pause
color
cls
