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
	{ 0x778ea5ed, "usb_mon_register" },
	{ 0x6cdc8b6, "kmem_cache_destroy" },
	{ 0xeb7389e6, "cdev_del" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x29245744, "cdev_init" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xf495c3ad, "debugfs_create_dir" },
	{ 0xc80a0827, "mem_map" },
	{ 0x132b1dfc, "page_address" },
	{ 0x3be89d3c, "usb_register_notify" },
	{ 0x9d1bcce6, "usb_debug_root" },
	{ 0x3a013b7d, "remove_wait_queue" },
	{ 0xf89ffc3a, "no_llseek" },
	{ 0x4115614a, "device_destroy" },
	{ 0x3fec048f, "sg_next" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0xac697e18, "debugfs_create_file" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xace5c0fc, "usb_bus_list" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xf8bff81e, "current_task" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0xd3fa7047, "debugfs_remove" },
	{ 0x6e7d3d90, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0xb4a4a780, "device_create" },
	{ 0xfed11ed1, "usb_mon_deregister" },
	{ 0x8510187e, "__get_page_tail" },
	{ 0x8def339e, "contig_page_data" },
	{ 0x61b2699f, "cdev_add" },
	{ 0xe9587909, "usb_unregister_notify" },
	{ 0x383fc083, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4292364c, "schedule" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xade55b77, "kmem_cache_create" },
	{ 0xd32514d9, "usb_bus_list_lock" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x4f68e5c9, "do_gettimeofday" },
	{ 0xd7bd3af2, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xb3879c1d, "class_destroy" },
	{ 0xb81960ca, "snprintf" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x2725d43f, "__class_create" },
	{ 0x29537c9e, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "35F6B07E7BAB19808F26B58");
