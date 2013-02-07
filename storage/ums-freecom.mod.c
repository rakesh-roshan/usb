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
	{ 0xd3746066, "usb_stor_bulk_transfer_buf" },
	{ 0x51e9de53, "usb_stor_post_reset" },
	{ 0x6e288d58, "usb_stor_control_msg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe08e6020, "usb_stor_disconnect" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0x50eedeb8, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x2a617d4, "usb_stor_probe2" },
	{ 0xd9559554, "usb_stor_pre_reset" },
	{ 0x87ed9760, "usb_stor_reset_resume" },
	{ 0x210ee94e, "usb_stor_suspend" },
	{ 0x8485ba16, "usb_stor_probe1" },
	{ 0x29a2e062, "usb_stor_resume" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0xc3324cb2, "usb_stor_bulk_srb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage";

MODULE_ALIAS("usb:v07ABpFC01d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "F4CCC6BD86E3DD1E20466CA");
