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
	{ 0x15692c87, "param_ops_int" },
	{ 0xbd64c265, "usb_serial_deregister_drivers" },
	{ 0xfc68d0af, "usb_serial_register_drivers" },
	{ 0x5152e605, "memcmp" },
	{ 0x5223c83, "usb_bulk_msg" },
	{ 0x15081a48, "release_firmware" },
	{ 0x2e60bace, "memcpy" },
	{ 0x6b4033ed, "request_firmware" },
	{ 0x2bc95bd4, "memset" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x91715312, "sprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x61c44465, "usb_clear_halt" },
	{ 0x1a073285, "mutex_lock_interruptible" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0x326c2fd, "tty_encode_baud_rate" },
	{ 0xdd681228, "tty_get_baud_rate" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3a013b7d, "remove_wait_queue" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xd7bd3af2, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x62cb4cee, "interruptible_sleep_on" },
	{ 0xf8bff81e, "current_task" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xd3fb6cc4, "tty_wakeup" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0xe988ad7a, "dev_printk" },
	{ 0xeae58e84, "device_create_file" },
	{ 0x9a33f976, "device_remove_file" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x821ba6ce, "tty_kref_put" },
	{ 0x5d05fbaf, "tty_port_tty_get" },
	{ 0xc32eefb0, "tty_flip_buffer_push" },
	{ 0x6198cad9, "dev_err" },
	{ 0x4d6a062b, "tty_insert_flip_string_fixed_flag" },
	{ 0x50eedeb8, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v1608p0215d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0240d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0241d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0301d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0302d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0303d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0304d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0305d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0306d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0307d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0308d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p030Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0309d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p030Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p030Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p030Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0205d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p021Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0207d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p020Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p020Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0217d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0201d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0206d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p021Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p021Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p021Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p021Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0242d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0244d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0243d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0212d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0247d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "894E87100F17B96CFA4F0A1");
