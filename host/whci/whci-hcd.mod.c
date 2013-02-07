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
	{ 0xe3790e1, "uwb_rc_put" },
	{ 0x8986abf4, "uwb_rc_get_by_grandpa" },
	{ 0x1fedf0f4, "__request_region" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb725d128, "wusb_cluster_id_put" },
	{ 0xb1a2cd4b, "usb_add_hcd" },
	{ 0xc80a0827, "mem_map" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x8810eb96, "wusbhc_rh_control" },
	{ 0xd168235d, "single_open" },
	{ 0x298d65a6, "__umc_driver_register" },
	{ 0xccd837e0, "usb_remove_hcd" },
	{ 0x69a358a6, "iomem_resource" },
	{ 0x132b1dfc, "page_address" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf844090d, "wusbhc_rh_resume" },
	{ 0x4ded984b, "single_release" },
	{ 0x4a34b57c, "usb_create_hcd" },
	{ 0xbb6bf5e, "wusb_cluster_id_get" },
	{ 0x96c7e43b, "seq_printf" },
	{ 0x33543801, "queue_work" },
	{ 0x3fec048f, "sg_next" },
	{ 0x68f934ee, "x86_dma_fallback_dev" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0xac697e18, "debugfs_create_file" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x60cdfa56, "seq_read" },
	{ 0x24b510b2, "usb_put_hcd" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x2493865b, "wusbhc_giveback_urb" },
	{ 0x3fa58ef8, "wait_for_completion" },
	{ 0x6c3c09be, "umc_driver_unregister" },
	{ 0xcc820b5a, "usb_hcd_link_urb_to_ep" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xf8bff81e, "current_task" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0xb4390f9a, "mcount" },
	{ 0xd3fa7047, "debugfs_remove" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4c1182cb, "bitmap_scnprintf" },
	{ 0x2a37d074, "dma_pool_free" },
	{ 0x1e96ef9f, "wusbhc_rh_start_port_reset" },
	{ 0xf1243fad, "dma_release_from_coherent" },
	{ 0x7087c350, "dma_alloc_from_coherent" },
	{ 0xb86ea91a, "whci_wait_for" },
	{ 0x5f6f6ff5, "usb_hcd_check_unlink_urb" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1818d34c, "wusbhc_b_destroy" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0xe6b542ef, "wusbhc_rh_suspend" },
	{ 0x771cf835, "dma_pool_alloc" },
	{ 0x7c61340c, "__release_region" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x3d777f47, "wusbhc_handle_dn" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x6337c5e1, "wusbhc_destroy" },
	{ 0xcb9e4a82, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0x48a32ebe, "wusbhc_create" },
	{ 0xedc03953, "iounmap" },
	{ 0x1e6c70f2, "wusbhc_b_create" },
	{ 0x556957e5, "wusbhc_rh_status_data" },
	{ 0x75bb675a, "finish_wait" },
	{ 0x7fc417de, "dev_warn" },
	{ 0x19a9e62b, "complete" },
	{ 0xd16ca463, "wusbhc_reset_all" },
	{ 0x436c2179, "iowrite32" },
	{ 0x49cf91cf, "usb_hcd_unlink_urb_from_ep" },
	{ 0xa881fea, "dma_pool_create" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x69e27c7a, "bitmap_copy_le" },
	{ 0xf199efc0, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc2d711e1, "krealloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uwb,wusbcore,umc,whci";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Dsc10i10*");

MODULE_INFO(srcversion, "38DBE57B0803445AE27591D");
