#include<linux/module.h>
#include<linux/init.h>

static int __init hello_init(void) {
	printk("Hello World\n");
	return 0;
}

static void __exit hello_exit(void) {
	printk("GoodBye World\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Saalim Quadri");
MODULE_DESCRIPTION("Simple Hello World Module");
