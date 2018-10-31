
/*
这个头文件定义了一些字符串常量宏，在后面我们要用到。此外，
还定义了一个字符设备结构体hello_android_dev，这个就是我们虚拟的硬件设备了，
val成员变量就代表设备里面的寄存器，它的类型为int，sem成员变量是一个信号量，
是用同步访问寄存器val的，dev成员变量是一个内嵌的字符设备，这个Linux驱动程序自定义字符设备结构体的标准方法。
*/

#ifndef _HELLO_ANDROID_H_
#define _HELLO_ANDROID_H_
#include <linux/cdev.h>
#include <linux/semaphore.h>

#define HELLO_DEVICE_NODE_NAME "hello"
#define HELLO_DEVICE_FILE_NAME "hello"
#define HELLO_DEVICE_PROC_NAME "hello"
#define HELLO_DEVICE_CLASS_NAME "hello"

struct hello_android_dev {
	int val;
	struct semaphore sem;
	struct cdev dev;

}


#endif
