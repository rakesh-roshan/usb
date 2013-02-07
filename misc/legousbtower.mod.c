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
	{ 0x15692c87, "param_ops_int" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xc0ef1c13, "usb_deregister_dev" },
	{ 0x85ff6470, "_dev_info" },
	{ 0xf16b5c80, "usb_register_dev" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x2e60bace, "memcpy" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xfa88ce0e, "usb_find_interface" },
	{ 0x8e90406b, "nonseekable_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x733c3b54, "kasprintf" },
	{ 0x6198cad9, "dev_err" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x75bb675a, "finish_wait" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf8bff81e, "current_task" },
	{ 0x1a073285, "mutex_lock_interruptible" },
	{ 0x50eedeb8, "printk" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0694p0001d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "03C394E2CFB50F1086B9E48");
