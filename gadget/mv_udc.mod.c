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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc80a0827, "mem_map" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xfea58b91, "usb_del_gadget_udc" },
	{ 0x33543801, "queue_work" },
	{ 0x68f934ee, "x86_dma_fallback_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x3fa58ef8, "wait_for_completion" },
	{ 0x102cd5ca, "device_register" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xb6ed1e53, "strncpy" },
	{ 0xb4390f9a, "mcount" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5cf5761a, "platform_get_resource" },
	{ 0x2a37d074, "dma_pool_free" },
	{ 0xf1243fad, "dma_release_from_coherent" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x501a10ec, "platform_driver_register" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7087c350, "dma_alloc_from_coherent" },
	{ 0x56a2ac3e, "usb_get_transceiver" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x6f857831, "usb_add_gadget_udc" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x771cf835, "dma_pool_alloc" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x689404a9, "platform_get_resource_byname" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x2bd31cf9, "device_unregister" },
	{ 0x19a9e62b, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xb151e5de, "platform_driver_unregister" },
	{ 0xcaac2819, "dev_set_name" },
	{ 0xa881fea, "dma_pool_create" },
	{ 0xf199efc0, "dma_ops" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";


MODULE_INFO(srcversion, "4154FAC42A7AD2226593249");
