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
	{ 0x1976aa06, "param_ops_bool" },
	{ 0xbd64c265, "usb_serial_deregister_drivers" },
	{ 0xfc68d0af, "usb_serial_register_drivers" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x326c2fd, "tty_encode_baud_rate" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xdd681228, "tty_get_baud_rate" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x61c44465, "usb_clear_halt" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xa4a44d8c, "usb_serial_port_softint" },
	{ 0x2bc95bd4, "memset" },
	{ 0xc32eefb0, "tty_flip_buffer_push" },
	{ 0x4d6a062b, "tty_insert_flip_string_fixed_flag" },
	{ 0xa32a36ea, "tty_hangup" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x821ba6ce, "tty_kref_put" },
	{ 0x5d05fbaf, "tty_port_tty_get" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x6198cad9, "dev_err" },
	{ 0x85ff6470, "_dev_info" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x62cb4cee, "interruptible_sleep_on" },
	{ 0xf8bff81e, "current_task" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x5f4d14b8, "usb_reset_configuration" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0xb4390f9a, "mcount" },
	{ 0x50eedeb8, "printk" },
	{ 0xe988ad7a, "dev_printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v1163p0100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1163p0200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04B4p5500d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D9Fp0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D0p4101d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "DED54621B21F27E742EF68D");
