/**
 * @file main.c
 * @author DavidingPlus (davidingplus@qq.com)
 * @brief 内核模块主程序入口文件。
 *
 * Copyright (c) 2025 电子科技大学 刘治学
 *
 */

#include <linux/init.h>
#include <linux/module.h>

#include "config.h"


MODULE_VERSION(LINUX_KERNEL_MODULE_CONFIG_VERSION);
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
