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
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaee03a83, "usb_stor_set_xfer_buf" },
	{ 0xd3746066, "usb_stor_bulk_transfer_buf" },
	{ 0xddcacb49, "usb_stor_access_xfer_buf" },
	{ 0x51e9de53, "usb_stor_post_reset" },
	{ 0xe08e6020, "usb_stor_disconnect" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xb4390f9a, "mcount" },
	{ 0x2a617d4, "usb_stor_probe2" },
	{ 0x33644b1a, "fill_inquiry_response" },
	{ 0xd9559554, "usb_stor_pre_reset" },
	{ 0x87ed9760, "usb_stor_reset_resume" },
	{ 0x210ee94e, "usb_stor_suspend" },
	{ 0x8485ba16, "usb_stor_probe1" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x29a2e062, "usb_stor_resume" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0xc32b18bd, "usb_stor_Bulk_reset" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage";

MODULE_ALIAS("usb:v07C4pA000d001[0-5]dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07C4pA000d000*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07C4pA001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07C4pA002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07C4pA003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07C4pA004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07C4pA005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07C4pA006d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07C4pA109d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07C4pA10Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C0BpA109d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "9AD25628483A887480C78CC");
