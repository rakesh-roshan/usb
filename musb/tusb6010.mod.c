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
	{ 0x7949da53, "usb_put_transceiver" },
	{ 0xc996d097, "del_timer" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x8949858b, "schedule_work" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xd0e43207, "usb_nop_xceiv_register" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x50eedeb8, "printk" },
	{ 0xdfd27c5b, "platform_device_del" },
	{ 0x238e93aa, "platform_device_alloc" },
	{ 0x69cc629c, "musb_interrupt" },
	{ 0x5689da47, "platform_device_add" },
	{ 0xb4390f9a, "mcount" },
	{ 0x5cf5761a, "platform_get_resource" },
	{ 0x8834396c, "mod_timer" },
	{ 0x501a10ec, "platform_driver_register" },
	{ 0xa64a4cea, "usb_nop_xceiv_unregister" },
	{ 0x7ffda337, "platform_device_add_resources" },
	{ 0x56a2ac3e, "usb_get_transceiver" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x82175c23, "platform_device_add_data" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xb151e5de, "platform_driver_unregister" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x70bc4f71, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nop-usb-xceiv,musb_hdrc";


MODULE_INFO(srcversion, "BB3432F01F3B01D830955CA");
