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
	{ 0xbd64c265, "usb_serial_deregister_drivers" },
	{ 0xfc68d0af, "usb_serial_register_drivers" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v106Cp3701d*dc*dsc*dp*icFFisc00ip00*");
MODULE_ALIAS("usb:v106Cp3702d*dc*dsc*dp*icFFisc00ip00*");
MODULE_ALIAS("usb:v106Cp3711d*dc*dsc*dp*icFFisc00ip00*");
MODULE_ALIAS("usb:v106Cp3712d*dc*dsc*dp*icFFisc00ip00*");
MODULE_ALIAS("usb:v106Cp3714d*dc*dsc*dp*icFFisc00ip00*");
MODULE_ALIAS("usb:v106Cp3715d*dc*dsc*dp*icFFisc00ip00*");
MODULE_ALIAS("usb:v16D8p5553d*dc*dsc*dp*icFFiscFFip00*");
MODULE_ALIAS("usb:v16D8p6512d*dc*dsc*dp*icFFiscFFip00*");
MODULE_ALIAS("usb:v1004p6000d*dc*dsc*dp*icFFiscFFip00*");
MODULE_ALIAS("usb:v0474p0754d*dc*dsc*dp*icFFiscFFip00*");
MODULE_ALIAS("usb:v04E8p6640d*dc*dsc*dp*icFFisc00ip00*");
MODULE_ALIAS("usb:v106Cp3716d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v106Cp3716d*dc*dsc*dp*icFFiscFEipFF*");
MODULE_ALIAS("usb:v106Cp3718d*dc*dsc*dp*icFFiscFDipFF*");
MODULE_ALIAS("usb:v106Cp3718d*dc*dsc*dp*icFFiscFEipFF*");
MODULE_ALIAS("usb:v106Cp3718d*dc*dsc*dp*icFFiscFFipFF*");

MODULE_INFO(srcversion, "7371D3D5C7667BE5516CB31");
