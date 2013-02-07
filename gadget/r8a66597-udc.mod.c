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
	{ 0xb9f75170, "platform_driver_probe" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbff2bcd2, "usb_gadget_unmap_request" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x727c4f3, "iowrite8" },
	{ 0x509cf30b, "usb_gadget_map_request" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x8834396c, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x6f857831, "usb_add_gadget_udc" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x689404a9, "platform_get_resource_byname" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x102cd5ca, "device_register" },
	{ 0xcaac2819, "dev_set_name" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x5cf5761a, "platform_get_resource" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x50eedeb8, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8c183cbe, "iowrite16" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x436c2179, "iowrite32" },
	{ 0x6198cad9, "dev_err" },
	{ 0xc5534d64, "ioread16" },
	{ 0x2bd31cf9, "device_unregister" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x5ac07bd8, "platform_get_irq" },
	{ 0xedc03953, "iounmap" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xfea58b91, "usb_del_gadget_udc" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";


MODULE_INFO(srcversion, "7B222951D82C8621B8DB19D");
