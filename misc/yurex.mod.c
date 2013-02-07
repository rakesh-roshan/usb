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
	{ 0x5f382cea, "default_llseek" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0xc0ef1c13, "usb_deregister_dev" },
	{ 0x85ff6470, "_dev_info" },
	{ 0xf16b5c80, "usb_register_dev" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x9ba1ba2a, "usb_alloc_coherent" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0xc8dd29cd, "usb_get_dev" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb81960ca, "snprintf" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x50eedeb8, "printk" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xfa88ce0e, "usb_find_interface" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0x300670a9, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0xfeced5fa, "usb_put_dev" },
	{ 0x6da8ad00, "kill_fasync" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x75bb675a, "finish_wait" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf8bff81e, "current_task" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf2dd619a, "fasync_helper" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0C45p1010d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "5D0903EE36406FC721980EC");
