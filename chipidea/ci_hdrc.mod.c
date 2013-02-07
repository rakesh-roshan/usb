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
	{ 0x9a33f976, "device_remove_file" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x509cf30b, "usb_gadget_map_request" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfd7b555c, "__pm_runtime_idle" },
	{ 0x7949da53, "usb_put_transceiver" },
	{ 0xb1a2cd4b, "usb_add_hcd" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x15692c87, "param_ops_int" },
	{ 0xc996d097, "del_timer" },
	{ 0xccd837e0, "usb_remove_hcd" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x54cd9b04, "dbgp_external_startup" },
	{ 0x649a8dbb, "devm_kzalloc" },
	{ 0x4a34b57c, "usb_create_hcd" },
	{ 0xcef84c27, "usb_hcd_poll_rh_status" },
	{ 0xfea58b91, "usb_del_gadget_udc" },
	{ 0x33543801, "queue_work" },
	{ 0x3fec048f, "sg_next" },
	{ 0x68f934ee, "x86_dma_fallback_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x399b737b, "usb_hcd_giveback_urb" },
	{ 0xde44be57, "__pm_runtime_resume" },
	{ 0x2447533c, "ktime_get_real" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x91715312, "sprintf" },
	{ 0xb9b9df41, "usb_amd_dev_put" },
	{ 0x7d11c268, "jiffies" },
	{ 0x5122515f, "usb_hub_clear_tt_buffer" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x24b510b2, "usb_put_hcd" },
	{ 0x5b2194b1, "pm_runtime_no_callbacks" },
	{ 0x10ecc52c, "usb_amd_quirk_pll_enable" },
	{ 0xbff2bcd2, "usb_gadget_unmap_request" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x2bc95bd4, "memset" },
	{ 0xcc820b5a, "usb_hcd_link_urb_to_ep" },
	{ 0xf10de535, "ioread8" },
	{ 0x102cd5ca, "device_register" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x50eedeb8, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xdc825d6c, "usb_amd_quirk_pll_disable" },
	{ 0xeff3732b, "ehci_cf_port_reset_rwsem" },
	{ 0xb4390f9a, "mcount" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x5cf5761a, "platform_get_resource" },
	{ 0x8834396c, "mod_timer" },
	{ 0x2a37d074, "dma_pool_free" },
	{ 0xf1243fad, "dma_release_from_coherent" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x501a10ec, "platform_driver_register" },
	{ 0xbc1afedf, "up_write" },
	{ 0x61b5ade0, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7087c350, "dma_alloc_from_coherent" },
	{ 0xeae58e84, "device_create_file" },
	{ 0x5f6f6ff5, "usb_hcd_check_unlink_urb" },
	{ 0x56a2ac3e, "usb_get_transceiver" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x70cf032f, "usb_hcd_irq" },
	{ 0x9dc48f8f, "pm_runtime_enable" },
	{ 0xe912b845, "put_device" },
	{ 0x6f857831, "usb_add_gadget_udc" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x771cf835, "dma_pool_alloc" },
	{ 0xc66e33c8, "dbgp_reset_prep" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x7fc417de, "dev_warn" },
	{ 0x2bd31cf9, "device_unregister" },
	{ 0x5ac07bd8, "platform_get_irq" },
	{ 0x629ca69d, "usb_hc_died" },
	{ 0xb151e5de, "platform_driver_unregister" },
	{ 0xcaac2819, "dev_set_name" },
	{ 0x436c2179, "iowrite32" },
	{ 0x49cf91cf, "usb_hcd_unlink_urb_from_ep" },
	{ 0x7cc2b57e, "usb_hcd_resume_root_hub" },
	{ 0xa881fea, "dma_pool_create" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x41e65bb0, "devm_request_and_ioremap" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xf199efc0, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x4cdb3178, "ns_to_timeval" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";


MODULE_INFO(srcversion, "F711D116E7FAF4B65A10AFF");
