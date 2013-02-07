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
	{ 0x1976aa06, "param_ops_bool" },
	{ 0xbd64c265, "usb_serial_deregister_drivers" },
	{ 0xfc68d0af, "usb_serial_register_drivers" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x75bb675a, "finish_wait" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf8bff81e, "current_task" },
	{ 0xe6b3fe21, "interruptible_sleep_on_timeout" },
	{ 0x2e60bace, "memcpy" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x61c44465, "usb_clear_halt" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd3fb6cc4, "tty_wakeup" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0xdd681228, "tty_get_baud_rate" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x821ba6ce, "tty_kref_put" },
	{ 0xc32eefb0, "tty_flip_buffer_push" },
	{ 0x4d6a062b, "tty_insert_flip_string_fixed_flag" },
	{ 0x5d05fbaf, "tty_port_tty_get" },
	{ 0x8834396c, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x6198cad9, "dev_err" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x50eedeb8, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v9710p7840d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v9710p7820d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v9710p7810d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC22d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pBC00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC24d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pBC01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC29d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC30d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC31d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC32d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC42d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pBC02d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC44d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pBC03d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC24d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p2011d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p7820d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "DD59D7A69795D7917431294");
