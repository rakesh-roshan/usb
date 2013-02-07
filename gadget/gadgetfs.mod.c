#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x8a2341e1, "module_layout" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x34184afe, "current_kernel_time" },
	{ 0x2897ed7e, "kick_iocb" },
	{ 0xf89ffc3a, "no_llseek" },
	{ 0xf02fbb15, "generic_delete_inode" },
	{ 0xb71df21, "dput" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0xd2b9652b, "aio_complete" },
	{ 0x5c4ecc86, "mount_single" },
	{ 0x6b30e706, "usb_gadget_unregister_driver" },
	{ 0x7e6f9503, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x81698388, "d_delete" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x57bac26, "kill_litter_super" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xf8bff81e, "current_task" },
	{ 0x1a073285, "mutex_lock_interruptible" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0x7bb62076, "d_rehash" },
	{ 0xe021d83b, "aio_put_req" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb6ed1e53, "strncpy" },
	{ 0xf2dd619a, "fasync_helper" },
	{ 0xb4390f9a, "mcount" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x27675ff2, "simple_dir_operations" },
	{ 0x4292364c, "schedule" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x31f5b587, "register_filesystem" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0xb460ced1, "usb_gadget_probe_driver" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x37a0cba, "kfree" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0xd31b2c49, "d_make_root" },
	{ 0x6da8ad00, "kill_fasync" },
	{ 0x5ca3c450, "simple_statfs" },
	{ 0x87ffcba5, "d_alloc_name" },
	{ 0x75bb675a, "finish_wait" },
	{ 0x37469513, "unregister_filesystem" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x19a9e62b, "complete" },
	{ 0xc38cbb54, "new_inode" },
	{ 0x8235805b, "memmove" },
	{ 0x7bf2f7df, "simple_dir_inode_operations" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xdf0d6cb, "d_instantiate" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";


MODULE_INFO(srcversion, "9EB777975AE0044A3B5008A");
