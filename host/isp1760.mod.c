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
	{ 0x6cdc8b6, "kmem_cache_destroy" },
	{ 0x1fedf0f4, "__request_region" },
	{ 0xc3063bdd, "pci_bus_read_config_byte" },
	{ 0xb1a2cd4b, "usb_add_hcd" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xc996d097, "del_timer" },
	{ 0xccd837e0, "usb_remove_hcd" },
	{ 0x69a358a6, "iomem_resource" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x4a34b57c, "usb_create_hcd" },
	{ 0xdeae679e, "pci_disable_device" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x399b737b, "usb_hcd_giveback_urb" },
	{ 0x7d11c268, "jiffies" },
	{ 0x5122515f, "usb_hub_clear_tt_buffer" },
	{ 0x24b510b2, "usb_put_hcd" },
	{ 0x435f447e, "pci_set_master" },
	{ 0x2bc95bd4, "memset" },
	{ 0xcc820b5a, "usb_hcd_link_urb_to_ep" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x50eedeb8, "printk" },
	{ 0xeff3732b, "ehci_cf_port_reset_rwsem" },
	{ 0xb4390f9a, "mcount" },
	{ 0x6e7d3d90, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x5cf5761a, "platform_get_resource" },
	{ 0x8834396c, "mod_timer" },
	{ 0xbe2c0274, "add_timer" },
	{ 0x501a10ec, "platform_driver_register" },
	{ 0xbc1afedf, "up_write" },
	{ 0x61b5ade0, "down_write" },
	{ 0x5f6f6ff5, "usb_hcd_check_unlink_urb" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x383fc083, "kmem_cache_alloc" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x7c61340c, "__release_region" },
	{ 0xd3f5c1a7, "pci_unregister_driver" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xade55b77, "kmem_cache_create" },
	{ 0x73a6bd0e, "pci_bus_write_config_byte" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0xedc03953, "iounmap" },
	{ 0x7f4e5a3e, "__pci_register_driver" },
	{ 0xb151e5de, "platform_driver_unregister" },
	{ 0x49cf91cf, "usb_hcd_unlink_urb_from_ep" },
	{ 0x9a756412, "pci_enable_device" },
	{ 0x51461818, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010B5d00005406sv000010B5sd00009054bc06sc80i00*");

MODULE_INFO(srcversion, "E68054B5928855993835792");
