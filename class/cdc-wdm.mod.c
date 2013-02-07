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
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x8949858b, "schedule_work" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0xc0ef1c13, "usb_deregister_dev" },
	{ 0x16888127, "usb_autopm_get_interface" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x7d11c268, "jiffies" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xf8bff81e, "current_task" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0x1a073285, "mutex_lock_interruptible" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0xf16b5c80, "usb_register_dev" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x27320567, "noop_llseek" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x4292364c, "schedule" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0x75bb675a, "finish_wait" },
	{ 0x8235805b, "memmove" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0xc85aafcd, "usb_autopm_put_interface" },
	{ 0x52770bcb, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc09ip*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip09*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip39*");

MODULE_INFO(srcversion, "00D867C622796AB0B99523B");
