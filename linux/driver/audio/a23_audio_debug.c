
驱动模块调试测试:
  1. 内核提供标准接口,查看/proc/asound/,是否有相应的声卡信息。
  2. 进入/sys/class/sunxi_dump/直接查看寄存器。
  3. 播放音乐声音断续
       将打印关闭即可。
       3.1 查看打印级别:cat /proc/sys/kernel/printk 。
       3.2 将打印级别降到 0。echo 0 > /proc/sys/kernel/printk 。
       3.3 重新验证即可。
  4. 杂音处理
       4.1 查看 Audio Codec 的模拟部分和数据部分打开的先后顺序是否正确。
       4.2 播放音乐的开始有杂音,查看音量的加减是否有问题。音量要逐级增加上去才能消除杂音。
