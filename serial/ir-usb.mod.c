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
	{ 0x50eedeb8, "printk" },
	{ 0xfc68d0af, "usb_serial_register_drivers" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0xd3a3a80c, "usb_serial_generic_open" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0x6198cad9, "dev_err" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0x326c2fd, "tty_encode_baud_rate" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdd681228, "tty_get_baud_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x821ba6ce, "tty_kref_put" },
	{ 0xc32eefb0, "tty_flip_buffer_push" },
	{ 0x4d6a062b, "tty_insert_flip_string_fixed_flag" },
	{ 0x5d05fbaf, "tty_port_tty_get" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v050Fp0180d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08E9p0100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v09C4p0011d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc02ip00*");

MODULE_INFO(srcversion, "3BFEDF7DBB8A2782B787122");
