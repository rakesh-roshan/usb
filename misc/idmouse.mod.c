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
	{ 0x5f382cea, "default_llseek" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf16b5c80, "usb_register_dev" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x85ff6470, "_dev_info" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xc0ef1c13, "usb_deregister_dev" },
	{ 0xc85aafcd, "usb_autopm_put_interface" },
	{ 0x5223c83, "usb_bulk_msg" },
	{ 0xf8bff81e, "current_task" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x16888127, "usb_autopm_get_interface" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xfa88ce0e, "usb_find_interface" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0681p0005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0681p0010d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "ADD95ED8ED725E3A4786936");
