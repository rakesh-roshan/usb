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
	{ 0x487d9343, "param_ops_ushort" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x4845c423, "param_array_ops" },
	{ 0xbd64c265, "usb_serial_deregister_drivers" },
	{ 0xfc68d0af, "usb_serial_register_drivers" },
	{ 0x7d11c268, "jiffies" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x3a013b7d, "remove_wait_queue" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xd7bd3af2, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbdcbda41, "usb_reset_device" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xaa14ee93, "usb_driver_set_configuration" },
	{ 0x15081a48, "release_firmware" },
	{ 0x5223c83, "usb_bulk_msg" },
	{ 0x2bc95bd4, "memset" },
	{ 0x2e60bace, "memcpy" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6b4033ed, "request_firmware" },
	{ 0x91715312, "sprintf" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0xe0cc0d9, "usb_match_id" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xd3fb6cc4, "tty_wakeup" },
	{ 0x61c44465, "usb_clear_halt" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x1a073285, "mutex_lock_interruptible" },
	{ 0x326c2fd, "tty_encode_baud_rate" },
	{ 0xdd681228, "tty_get_baud_rate" },
	{ 0x4d6a062b, "tty_insert_flip_string_fixed_flag" },
	{ 0xc32eefb0, "tty_flip_buffer_push" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x821ba6ce, "tty_kref_put" },
	{ 0x5d05fbaf, "tty_port_tty_get" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x62cb4cee, "interruptible_sleep_on" },
	{ 0xf8bff81e, "current_task" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x6198cad9, "dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0xb4390f9a, "mcount" },
	{ 0x50eedeb8, "printk" },
	{ 0xe988ad7a, "dev_printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0451p3410d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0451pF430d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06E0pF108d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06E0pF109d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06E0pF110d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06E0pF111d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06E0pF112d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06E0pF114d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06E0pF115d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06E0p0319d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0451p5052d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0451p5152d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0451p505Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0451p505Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04B3p4543d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04B3p454Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04B3p454Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A61p3410d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0451p5053d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "EEFEA660FAAF9AE3C196983");
