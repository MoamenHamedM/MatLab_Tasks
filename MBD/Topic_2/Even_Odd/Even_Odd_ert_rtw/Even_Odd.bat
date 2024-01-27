
set MATLAB=G:\MatLab

cd .

if "%1"=="" ("G:\MatLab\bin\win64\gmake"  -f Even_Odd.mk all) else ("G:\MatLab\bin\win64\gmake"  -f Even_Odd.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1