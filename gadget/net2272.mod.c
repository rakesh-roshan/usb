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
	{ 0x487d9343, "param_ops_ushort" },
	{ 0xb151e5de, "platform_driver_unregister" },
	{ 0xd3f5c1a7, "pci_unregister_driver" },
	{ 0x501a10ec, "platform_driver_register" },
	{ 0x7f4e5a3e, "__pci_register_driver" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x435f447e, "pci_set_master" },
	{ 0x9a756412, "pci_enable_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x1fedf0f4, "__request_region" },
	{ 0x5cf5761a, "platform_get_resource" },
	{ 0x6f857831, "usb_add_gadget_udc" },
	{ 0xeae58e84, "device_create_file" },
	{ 0x102cd5ca, "device_register" },
	{ 0x6198cad9, "dev_err" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xdeae679e, "pci_disable_device" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xcaac2819, "dev_set_name" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x7c61340c, "__release_region" },
	{ 0x69a358a6, "iomem_resource" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x9a33f976, "device_remove_file" },
	{ 0x2bd31cf9, "device_unregister" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x6b30e706, "usb_gadget_unregister_driver" },
	{ 0x7fc417de, "dev_warn" },
	{ 0xfea58b91, "usb_del_gadget_udc" },
	{ 0x37a0cba, "kfree" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";

MODULE_ALIAS("pci:v000010B5d00009054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00003272sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4A47BCB89881536F0B3FF21");
