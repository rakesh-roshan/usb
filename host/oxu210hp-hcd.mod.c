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
	{ 0xc179eaf4, "platform_bus_type" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0xb151e5de, "platform_driver_unregister" },
	{ 0x501a10ec, "platform_driver_register" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0x7cc2b57e, "usb_hcd_resume_root_hub" },
	{ 0xcef84c27, "usb_hcd_poll_rh_status" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x4292364c, "schedule" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xc996d097, "del_timer" },
	{ 0x2e60bace, "memcpy" },
	{ 0x629ca69d, "usb_hc_died" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x399b737b, "usb_hcd_giveback_urb" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x1fedf0f4, "__request_region" },
	{ 0x5cf5761a, "platform_get_resource" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c61340c, "__release_region" },
	{ 0x69a358a6, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x24b510b2, "usb_put_hcd" },
	{ 0xccd837e0, "usb_remove_hcd" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x8834396c, "mod_timer" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x2bc95bd4, "memset" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb1a2cd4b, "usb_add_hcd" },
	{ 0x4a34b57c, "usb_create_hcd" },
	{ 0x6198cad9, "dev_err" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0F774ECD2EA0F50703C3A4A");
