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
	{ 0x1975efac, "usb_serial_generic_unthrottle" },
	{ 0x31b12ee9, "usb_serial_generic_throttle" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0xbd64c265, "usb_serial_deregister_drivers" },
	{ 0xfc68d0af, "usb_serial_register_drivers" },
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

MODULE_ALIAS("usb:v16CAp1502d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "2CD0CB5177108B2F4AAD47B");
