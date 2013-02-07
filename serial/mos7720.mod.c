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
	{ 0x1976aa06, "param_ops_bool" },
	{ 0xbd64c265, "usb_serial_deregister_drivers" },
	{ 0xfc68d0af, "usb_serial_register_drivers" },
	{ 0xb0f350c6, "parport_announce_port" },
	{ 0xceb204ab, "parport_register_port" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xb1d9523e, "wait_for_completion_timeout" },
	{ 0xd0496eb3, "usb_unlink_urb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x4d80a1ed, "parport_remove_port" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x7e6f9503, "mutex_trylock" },
	{ 0x5223c83, "usb_bulk_msg" },
	{ 0x326c2fd, "tty_encode_baud_rate" },
	{ 0xdd681228, "tty_get_baud_rate" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xf8bff81e, "current_task" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0xe988ad7a, "dev_printk" },
	{ 0x2e60bace, "memcpy" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x61c44465, "usb_clear_halt" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x19a9e62b, "complete" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0xd3fb6cc4, "tty_wakeup" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0xc32eefb0, "tty_flip_buffer_push" },
	{ 0x4d6a062b, "tty_insert_flip_string_fixed_flag" },
	{ 0x821ba6ce, "tty_kref_put" },
	{ 0x5d05fbaf, "tty_port_tty_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x50eedeb8, "printk" },
	{ 0x6198cad9, "dev_err" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport,usbserial";

MODULE_ALIAS("usb:v9710p7720d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v9710p7715d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "B2DA39BB6E9C753B243DAD5");
