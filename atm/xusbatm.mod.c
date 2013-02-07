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
	{ 0x487d9343, "param_ops_ushort" },
	{ 0xadb5559d, "param_ops_byte" },
	{ 0xef590995, "usbatm_usb_disconnect" },
	{ 0x4845c423, "param_array_ops" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0x50eedeb8, "printk" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xa5808a32, "usb_driver_release_interface" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x83a2cc4b, "usb_altnum_to_altsetting" },
	{ 0x6198cad9, "dev_err" },
	{ 0xfbe19c9, "usb_set_interface" },
	{ 0x5b948058, "usb_driver_claim_interface" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x1303912, "usbatm_usb_probe" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbatm";


MODULE_INFO(srcversion, "D7789F1E43915DEBB90C5D7");
