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
	{ 0xd3f5c1a7, "pci_unregister_driver" },
	{ 0x7f4e5a3e, "__pci_register_driver" },
	{ 0x70bc4f71, "platform_device_put" },
	{ 0x5689da47, "platform_device_add" },
	{ 0x3cbdd50b, "dma_supported" },
	{ 0x7ffda337, "platform_device_add_resources" },
	{ 0x238e93aa, "platform_device_alloc" },
	{ 0x51b25baa, "dwc3_get_device_id" },
	{ 0x435f447e, "pci_set_master" },
	{ 0x2d844ea5, "pci_set_power_state" },
	{ 0x9a756412, "pci_enable_device" },
	{ 0x6198cad9, "dev_err" },
	{ 0x649a8dbb, "devm_kzalloc" },
	{ 0xdeae679e, "pci_disable_device" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xb0fc0f27, "platform_device_unregister" },
	{ 0x289d06f1, "dwc3_put_device_id" },
	{ 0x51461818, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dwc3";

MODULE_ALIAS("pci:v000016C3d0000ABCDsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "17765D430FFD4626F7B42C0");
