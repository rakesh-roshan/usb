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
	{ 0xc0ef1c13, "usb_deregister_dev" },
	{ 0xa2d4caf4, "sysfs_remove_group" },
	{ 0xf16b5c80, "usb_register_dev" },
	{ 0xa1913a7e, "sysfs_create_group" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xc8dd29cd, "usb_get_dev" },
	{ 0x91715312, "sprintf" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x50eedeb8, "printk" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xfa88ce0e, "usb_find_interface" },
	{ 0xfeced5fa, "usb_put_dev" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x2bc95bd4, "memset" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x5223c83, "usb_bulk_msg" },
	{ 0x61c44465, "usb_clear_halt" },
	{ 0x37a0cba, "kfree" },
	{ 0x6198cad9, "dev_err" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip00*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip01*");

MODULE_INFO(srcversion, "2F7D8C07E68803736918D0F");
