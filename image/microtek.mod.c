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
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0x96b8e282, "scsi_remove_host" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xdc4fc23b, "scsi_scan_host" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x164b1f67, "scsi_host_put" },
	{ 0x9a61156e, "scsi_add_host_with_dma" },
	{ 0x39509502, "scsi_host_alloc" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x5152e605, "memcmp" },
	{ 0x132b1dfc, "page_address" },
	{ 0x50eedeb8, "printk" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x5e284ee0, "scsi_cmd_get_serial" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0xbdcbda41, "usb_reset_device" },
	{ 0x7b5dab9d, "usb_lock_device_for_reset" },
	{ 0x45b13d77, "blk_queue_dma_alignment" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04CEp0300d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DAp0094d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DAp0099d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DAp009Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DAp00A0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DAp00A3d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DAp80A3d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DAp80ACd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DAp00B6d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "DA82027B11A6E249CDC2099");
