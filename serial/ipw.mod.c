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
	{ 0xcf07afde, "usb_wwan_write" },
	{ 0xe7022527, "usb_wwan_disconnect" },
	{ 0x6797567d, "usb_wwan_startup" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0xbd64c265, "usb_serial_deregister_drivers" },
	{ 0xfc68d0af, "usb_serial_register_drivers" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x20e7e1ef, "usb_wwan_release" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x49e5ecfc, "usb_wwan_open" },
	{ 0x61c44465, "usb_clear_halt" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x143bd89e, "usb_wwan_close" },
	{ 0x50eedeb8, "printk" },
	{ 0x6198cad9, "dev_err" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb_wwan,usbserial";

MODULE_ALIAS("usb:v0BC3p0001d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "74E7B1C4AF87AA2C015D6E7");
