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
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xa4a44d8c, "usb_serial_port_softint" },
	{ 0x2e60bace, "memcpy" },
	{ 0x54a9db5f, "_kstrtoul" },
	{ 0x6198cad9, "dev_err" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x61c44465, "usb_clear_halt" },
	{ 0x326c2fd, "tty_encode_baud_rate" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x91715312, "sprintf" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x5223c83, "usb_bulk_msg" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x821ba6ce, "tty_kref_put" },
	{ 0xc32eefb0, "tty_flip_buffer_push" },
	{ 0x4d6a062b, "tty_insert_flip_string_fixed_flag" },
	{ 0x5d05fbaf, "tty_port_tty_get" },
	{ 0xeae58e84, "device_create_file" },
	{ 0x9a33f976, "device_remove_file" },
	{ 0x50eedeb8, "printk" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v104Fp0004d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "36541E60EE8DBE37A2C4717");
