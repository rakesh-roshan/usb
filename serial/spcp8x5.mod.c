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
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd3a3a80c, "usb_serial_generic_open" },
	{ 0x61c44465, "usb_clear_halt" },
	{ 0x6198cad9, "dev_err" },
	{ 0xdd681228, "tty_get_baud_rate" },
	{ 0xf2997713, "tty_termios_hw_change" },
	{ 0x62cb4cee, "interruptible_sleep_on" },
	{ 0xf8bff81e, "current_task" },
	{ 0x391f8691, "tty_insert_flip_string_flags" },
	{ 0x821ba6ce, "tty_kref_put" },
	{ 0xc32eefb0, "tty_flip_buffer_push" },
	{ 0x4d6a062b, "tty_insert_flip_string_fixed_flag" },
	{ 0xf5d3bf7e, "usb_serial_handle_dcd_change" },
	{ 0x5d05fbaf, "tty_port_tty_get" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0471p081Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04FCp0204d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04FCp0231d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04FCp0235d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04FCp0201d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "9A0F7548EF472F164AD26BA");
