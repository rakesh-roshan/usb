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
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v1404pCDDCd*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "D4DEF92BFEF63638A911084");
