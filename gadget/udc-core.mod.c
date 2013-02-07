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
	{ 0xc80a0827, "mem_map" },
	{ 0x132b1dfc, "page_address" },
	{ 0xf4543b13, "kobject_uevent" },
	{ 0x3fec048f, "sg_next" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0xe384a102, "usb_speed_string" },
	{ 0x6198cad9, "dev_err" },
	{ 0x50eedeb8, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0xc5d70c2c, "device_add" },
	{ 0xe912b845, "put_device" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x3aec3cfc, "device_initialize" },
	{ 0xb3879c1d, "class_destroy" },
	{ 0x2bd31cf9, "device_unregister" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xb81960ca, "snprintf" },
	{ 0xcaac2819, "dev_set_name" },
	{ 0x2725d43f, "__class_create" },
	{ 0xf199efc0, "dma_ops" },
	{ 0xa7f92105, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "51A0FFC86E76CD988D1911E");
