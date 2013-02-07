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
	{ 0x1fedf0f4, "__request_region" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb1a2cd4b, "usb_add_hcd" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x69a358a6, "iomem_resource" },
	{ 0xccd837e0, "usb_remove_hcd" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x4a34b57c, "usb_create_hcd" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x399b737b, "usb_hcd_giveback_urb" },
	{ 0x24b510b2, "usb_put_hcd" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0xcc820b5a, "usb_hcd_link_urb_to_ep" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x5cf5761a, "platform_get_resource" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x501a10ec, "platform_driver_register" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x5f6f6ff5, "usb_hcd_check_unlink_urb" },
	{ 0x85ff6470, "_dev_info" },
	{ 0xc8dd29cd, "usb_get_dev" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0xfeced5fa, "usb_put_dev" },
	{ 0x7c61340c, "__release_region" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x7fc417de, "dev_warn" },
	{ 0x19a9e62b, "complete" },
	{ 0xb151e5de, "platform_driver_unregister" },
	{ 0x49cf91cf, "usb_hcd_unlink_urb_from_ep" },
	{ 0xb1d9523e, "wait_for_completion_timeout" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7F82A3B955230A823BF592A");
