#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#define DRIVER_AUTHOR "Dimitrios Vasilas <dimitrios.vasilas@scality.com>"
#define DRIVER_DESC "Kernel programming excercise driver"

static int __init init(void) {
	printk(KERN_INFO "Hello World!");
	return 0;
}

static void __exit fini(void) {
	
}

module_init(init);
module_exit(fini);

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
