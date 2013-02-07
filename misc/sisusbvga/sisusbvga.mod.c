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
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0xc0ef1c13, "usb_deregister_dev" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x2bc95bd4, "memset" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf8bff81e, "current_task" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0xf16b5c80, "usb_register_dev" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc8dd29cd, "usb_get_dev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfeced5fa, "usb_put_dev" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0xfa88ce0e, "usb_find_interface" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x75bb675a, "finish_wait" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0x52770bcb, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0711p0550d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0711p0900d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0711p0901d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0711p0902d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0711p0903d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0711p0918d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0711p0920d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v182Dp021Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v182Dp0269d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "1706B73F8B833030A38DC26");
