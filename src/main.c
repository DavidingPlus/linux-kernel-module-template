#include <linux/init.h>
#include <linux/module.h>


MODULE_VERSION("1.0.0");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("DavidingPlus");
MODULE_DESCRIPTION("A Linux Kernel Module");


static int __init linuxKernelModuleInit(void)
{
    pr_info("linux-kernel-module: Hello Linux Kernel Module\n");

    return 0;
}

static void __exit linuxKernelModuleExit(void)
{
    pr_info("linux-kernel-module: Goodbye Linux Kernel Module\n");
}


module_init(linuxKernelModuleInit);
module_exit(linuxKernelModuleExit);
