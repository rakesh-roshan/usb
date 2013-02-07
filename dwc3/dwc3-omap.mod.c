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
	{ 0xb151e5de, "platform_driver_unregister" },
	{ 0x501a10ec, "platform_driver_register" },
	{ 0x70bc4f71, "platform_device_put" },
	{ 0x5689da47, "platform_device_add" },
	{ 0x7ffda337, "platform_device_add_resources" },
	{ 0x455e64bc, "devm_request_threaded_irq" },
	{ 0x3cbdd50b, "dma_supported" },
	{ 0x238e93aa, "platform_device_alloc" },
	{ 0x51b25baa, "dwc3_get_device_id" },
	{ 0x31e0fa41, "devm_ioremap_nocache" },
	{ 0x5cf5761a, "platform_get_resource" },
	{ 0x5ac07bd8, "platform_get_irq" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x6198cad9, "dev_err" },
	{ 0x649a8dbb, "devm_kzalloc" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0xb4390f9a, "mcount" },
	{ 0x289d06f1, "dwc3_put_device_id" },
	{ 0xb0fc0f27, "platform_device_unregister" },
	{ 0x51461818, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dwc3";

MODULE_ALIAS("of:Nti,dwc3T*");

MODULE_INFO(srcversion, "C252B35F1F25A1A2F3BFCD5");
