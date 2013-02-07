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
	{ 0x7609177b, "bcma_driver_unregister" },
	{ 0xb272fe54, "__bcma_driver_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x50eedeb8, "printk" },
	{ 0xa02fa089, "bcma_core_is_enabled" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x3cbdd50b, "dma_supported" },
	{ 0xf8d2366a, "dma_set_mask" },
	{ 0x70bc4f71, "platform_device_put" },
	{ 0x5689da47, "platform_device_add" },
	{ 0x82175c23, "platform_device_add_data" },
	{ 0x7ffda337, "platform_device_add_resources" },
	{ 0x238e93aa, "platform_device_alloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb0fc0f27, "platform_device_unregister" },
	{ 0x46262260, "bcma_core_enable" },
	{ 0x25411d88, "bcma_core_disable" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bcma";

MODULE_ALIAS("bcma:m04BFid0819rev*cl*");

MODULE_INFO(srcversion, "628A4CB9AE4C2ADCCB4A7A3");
