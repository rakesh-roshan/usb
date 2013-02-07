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
	{ 0x120796, "parport_ieee1284_read_byte" },
	{ 0x3ded40e3, "parport_ieee1284_read_nibble" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0x5223c83, "usb_bulk_msg" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf8bff81e, "current_task" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb0f350c6, "parport_announce_port" },
	{ 0xceb204ab, "parport_register_port" },
	{ 0xfbe19c9, "usb_set_interface" },
	{ 0xc8dd29cd, "usb_get_dev" },
	{ 0x50eedeb8, "printk" },
	{ 0xb1d9523e, "wait_for_completion_timeout" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0xc01cf848, "_raw_read_lock" },
	{ 0x4d2a941b, "parport_ieee1284_interrupt" },
	{ 0x6198cad9, "dev_err" },
	{ 0x19a9e62b, "complete" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0xea53d2b7, "parport_put_port" },
	{ 0x4d80a1ed, "parport_remove_port" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xd0496eb3, "usb_unlink_urb" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xfeced5fa, "usb_put_dev" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";

MODULE_ALIAS("usb:v047Ep1001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p2001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0729p1284d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1293p0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp0002d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "83629D7DCF2412F6AF0F1E9");
