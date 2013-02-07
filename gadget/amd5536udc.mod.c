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
	{ 0x1976aa06, "param_ops_bool" },
	{ 0xd3f5c1a7, "pci_unregister_driver" },
	{ 0x7f4e5a3e, "__pci_register_driver" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xe384a102, "usb_speed_string" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x19a9e62b, "complete" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x509cf30b, "usb_gadget_map_request" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xbff2bcd2, "usb_gadget_unmap_request" },
	{ 0xa881fea, "dma_pool_create" },
	{ 0x80e489a7, "pci_try_set_mwi" },
	{ 0x435f447e, "pci_set_master" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x1fedf0f4, "__request_region" },
	{ 0x9a756412, "pci_enable_device" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x7c61340c, "__release_region" },
	{ 0x69a358a6, "iomem_resource" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x3fa58ef8, "wait_for_completion" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x2bd31cf9, "device_unregister" },
	{ 0xdeae679e, "pci_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xe912b845, "put_device" },
	{ 0xfea58b91, "usb_del_gadget_udc" },
	{ 0x102cd5ca, "device_register" },
	{ 0x6198cad9, "dev_err" },
	{ 0x6f857831, "usb_add_gadget_udc" },
	{ 0xe914e41e, "strcpy" },
	{ 0xb81960ca, "snprintf" },
	{ 0xcaac2819, "dev_set_name" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xbe2c0274, "add_timer" },
	{ 0x771cf835, "dma_pool_alloc" },
	{ 0x2a37d074, "dma_pool_free" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x8834396c, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";

MODULE_ALIAS("pci:v00001022d00002096sv*sd*bc0Csc03iFE*");

MODULE_INFO(srcversion, "A68B650875388CDF83EABFC");
