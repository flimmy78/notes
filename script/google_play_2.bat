@echo offset 

echo %date% %time%

set var=0
rem ************ѭ����ʼ��

:continue
set /a var+=1
echo ��%var%��ѭ��

adb devices 

adb shell sendevent /dev/input/event5 3 57 1    
adb shell sendevent /dev/input/event5 3 48 10  
adb shell sendevent /dev/input/event5 3 53 152  
adb shell sendevent /dev/input/event5 3 54 927 
adb shell sendevent /dev/input/event5 3 50 1  
adb shell sendevent /dev/input/event5 0 2 0   
adb shell sendevent /dev/input/event5 0 0 0  
adb shell sendevent /dev/input/event5 0 2 0   
adb shell sendevent /dev/input/event5 0 0 0 

ping 127.0.0.1 -n 3 > nul

adb shell sendevent /dev/input/event5 3 57 1    
adb shell sendevent /dev/input/event5 3 48 10  
adb shell sendevent /dev/input/event5 3 53 521  
adb shell sendevent /dev/input/event5 3 54 1000 
adb shell sendevent /dev/input/event5 3 50 1  
adb shell sendevent /dev/input/event5 0 2 0   
adb shell sendevent /dev/input/event5 0 0 0  
adb shell sendevent /dev/input/event5 0 2 0   
adb shell sendevent /dev/input/event5 0 0 0 

ping 127.0.0.1 -n 1 > nul

if %var% lss 1000 goto continue

rem ************ѭ��������

echo ѭ��ִ�����
pause