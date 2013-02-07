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
	{ 0xfdedf4a8, "usb_root_hub_lost_power" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb1a2cd4b, "usb_add_hcd" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xccd837e0, "usb_remove_hcd" },
	{ 0x4a34b57c, "usb_create_hcd" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x399b737b, "usb_hcd_giveback_urb" },
	{ 0x7d11c268, "jiffies" },
	{ 0x24b510b2, "usb_put_hcd" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xcc820b5a, "usb_hcd_link_urb_to_ep" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x50eedeb8, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x5cf5761a, "platform_get_resource" },
	{ 0x8834396c, "mod_timer" },
	{ 0x501a10ec, "platform_driver_register" },
	{ 0x94969e5d, "device_init_wakeup" },
	{ 0x5f6f6ff5, "usb_hcd_check_unlink_urb" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xb151e5de, "platform_driver_unregister" },
	{ 0x49cf91cf, "usb_hcd_unlink_urb_from_ep" },
	{ 0x51461818, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B772AC9C0A7660EE6B33C2E");
