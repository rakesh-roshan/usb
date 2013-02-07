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
	{ 0xd0d8621b, "strlen" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x51e9de53, "usb_stor_post_reset" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0xe08e6020, "usb_stor_disconnect" },
	{ 0x8d137166, "input_event" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x6198cad9, "dev_err" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xb4390f9a, "mcount" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x2a617d4, "usb_stor_probe2" },
	{ 0x300670a9, "usb_free_coherent" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x70fa352f, "input_register_device" },
	{ 0xd9559554, "usb_stor_pre_reset" },
	{ 0x87ed9760, "usb_stor_reset_resume" },
	{ 0x210ee94e, "usb_stor_suspend" },
	{ 0xb9d4759d, "input_free_device" },
	{ 0x8485ba16, "usb_stor_probe1" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x29a2e062, "usb_stor_resume" },
	{ 0x195dc355, "input_unregister_device" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9ba1ba2a, "usb_alloc_coherent" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0x1ae2a2b8, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage";

MODULE_ALIAS("usb:v0D49p7000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D49p7010d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "65B5BF21DE8FC1E244343D5");
