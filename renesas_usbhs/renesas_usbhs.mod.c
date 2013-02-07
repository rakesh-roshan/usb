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
	{ 0x509cf30b, "usb_gadget_map_request" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc897c382, "sg_init_table" },
	{ 0xfd7b555c, "__pm_runtime_idle" },
	{ 0xb1a2cd4b, "usb_add_hcd" },
	{ 0xc80a0827, "mem_map" },
	{ 0x1a5400d1, "__pm_runtime_disable" },
	{ 0xccd837e0, "usb_remove_hcd" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x4a34b57c, "usb_create_hcd" },
	{ 0x8949858b, "schedule_work" },
	{ 0xfea58b91, "usb_del_gadget_udc" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x399b737b, "usb_hcd_giveback_urb" },
	{ 0xde44be57, "__pm_runtime_resume" },
	{ 0x24b510b2, "usb_put_hcd" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x3fa58ef8, "wait_for_completion" },
	{ 0xbff2bcd2, "usb_gadget_unmap_request" },
	{ 0xcc820b5a, "usb_hcd_link_urb_to_ep" },
	{ 0x102cd5ca, "device_register" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xb4390f9a, "mcount" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x5cf5761a, "platform_get_resource" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x501a10ec, "platform_driver_register" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x9dc48f8f, "pm_runtime_enable" },
	{ 0x6f857831, "usb_add_gadget_udc" },
	{ 0x77edf722, "schedule_delayed_work" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x727c4f3, "iowrite8" },
	{ 0x68680f0a, "__dma_request_channel" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x8c183cbe, "iowrite16" },
	{ 0x9a52bc74, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xc5534d64, "ioread16" },
	{ 0x7fc417de, "dev_warn" },
	{ 0x2bd31cf9, "device_unregister" },
	{ 0x19a9e62b, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xb151e5de, "platform_driver_unregister" },
	{ 0xcaac2819, "dev_set_name" },
	{ 0x49cf91cf, "usb_hcd_unlink_urb_from_ep" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";


MODULE_INFO(srcversion, "3B7F173F18052FEC8A9AC3D");
