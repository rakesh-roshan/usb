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
	{ 0xd0496eb3, "usb_unlink_urb" },
	{ 0x6198cad9, "dev_err" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x5e284ee0, "scsi_cmd_get_serial" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x8949858b, "schedule_work" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x2e60bace, "memcpy" },
	{ 0xea10212a, "int_to_scsilun" },
	{ 0x5365aea3, "blk_init_tags" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x164b1f67, "scsi_host_put" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xdc4fc23b, "scsi_scan_host" },
	{ 0x9a61156e, "scsi_add_host_with_dma" },
	{ 0xe23799ac, "usb_alloc_streams" },
	{ 0x39509502, "scsi_host_alloc" },
	{ 0xfbe19c9, "usb_set_interface" },
	{ 0x7fc417de, "dev_warn" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0xbdcbda41, "usb_reset_device" },
	{ 0xe988ad7a, "dev_printk" },
	{ 0x717c3c57, "blk_queue_init_tags" },
	{ 0xc1d00f74, "scsi_adjust_queue_depth" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0x96b8e282, "scsi_remove_host" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x4951bcbd, "usb_free_streams" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip62*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ipAA*");

MODULE_INFO(srcversion, "12AB904257986291FF87E4A");
