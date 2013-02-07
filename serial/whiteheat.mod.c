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
	{ 0x6412266c, "ezusb_writememory" },
	{ 0xd8f43445, "ezusb_set_reset" },
	{ 0x15081a48, "release_firmware" },
	{ 0x6b4033ed, "request_firmware" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x5223c83, "usb_bulk_msg" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x6198cad9, "dev_err" },
	{ 0xd3a3a80c, "usb_serial_generic_open" },
	{ 0x61c44465, "usb_clear_halt" },
	{ 0x88c7c62f, "usb_serial_generic_close" },
	{ 0x326c2fd, "tty_encode_baud_rate" },
	{ 0xdd681228, "tty_get_baud_rate" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0x75bb675a, "finish_wait" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf8bff81e, "current_task" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0xe988ad7a, "dev_printk" },
	{ 0x2e60bace, "memcpy" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x50eedeb8, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0710p8001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0710p0001d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "A52684F9BE71A96EB1F3DCF");
