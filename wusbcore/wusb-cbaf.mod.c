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
	{ 0xa2d4caf4, "sysfs_remove_group" },
	{ 0x6198cad9, "dev_err" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xa1913a7e, "sysfs_create_group" },
	{ 0xb4390f9a, "mcount" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc8dd29cd, "usb_get_dev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0xccd0a7e7, "usb_get_intf" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0x7a4497db, "kzfree" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x9ee25614, "usb_put_intf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc03ip01*");

MODULE_INFO(srcversion, "B82FAA3295569EE994167AF");
