@echo offset 

echo %date% %time%

set loop_count=1
set lhs=test.lhs
rem ****************

adb remount
adb push tigerreplay /system/bin/
adb push %lhs% /mnt/sdcard/
adb shell chmod 755 /system/bin/tigerreplay

for /f %%i in ('adb shell cat /sys/class/disp/disp/attr/lcd_bl') do set bl=%%i
if %bl% equ 0 adb shell input keyevent 26

adb shell "rm /mnt/sdcard/tiger/log/%lhs%_logcat.txt"
adb shell "logcat -c" 
start /b adb shell "logcat -v time -f /mnt/sdcard/tiger/log/%lhs%_logcat.txt"
 

rem ************ѭ����ʼ��
set var=0

:continue
set /a var+=1
echo ��%var%��ѭ��

adb shell tigerreplay /mnt/sdcard/%lhs%

if %var% lss %loop_count% goto continue

rem ************ѭ��������

adb shell "rm /mnt/sdcard/tiger/log/%lhs%_kmsg.txt"
start /b adb shell "cat /proc/kmsg > /mnt/sdcard/tiger/log/%lhs%_kmsg.txt"


echo ѭ��ִ�����

exit 


