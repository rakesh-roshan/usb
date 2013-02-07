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
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0x2e60bace, "memcpy" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6198cad9, "dev_err" },
	{ 0xa1913a7e, "sysfs_create_group" },
	{ 0xc8dd29cd, "usb_get_dev" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0xfeced5fa, "usb_put_dev" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xa2d4caf4, "sysfs_remove_group" },
	{ 0xc85aafcd, "usb_autopm_put_interface" },
	{ 0x16888127, "usb_autopm_get_interface" },
	{ 0xb81960ca, "snprintf" },
	{ 0xd0d8621b, "strlen" },
	{ 0x61651be, "strcat" },
	{ 0x91715312, "sprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0FC5p1227d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "1537E3ABB939033FE91CED5");
