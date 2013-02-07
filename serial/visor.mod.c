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
	{ 0xd3a3a80c, "usb_serial_generic_open" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x50eedeb8, "printk" },
	{ 0xe988ad7a, "dev_printk" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0x88c7c62f, "usb_serial_generic_close" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x7fc417de, "dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x6198cad9, "dev_err" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v082Dp0100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v082Dp0200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v082Dp0300d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v115EpF100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0020d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0080d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0040d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0050d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0060d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0061d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0031d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0070d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0038d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0066d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0095d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp009Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp00DAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp00E9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0144d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0169d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p8001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p6601d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v12EFp0100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v091Ep0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4766p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C88p0021d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E67p0002d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "61CCD027C856FA2BE529780");
