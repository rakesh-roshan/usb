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
	{ 0xfd7b555c, "__pm_runtime_idle" },
	{ 0xf495c3ad, "debugfs_create_dir" },
	{ 0x1a5400d1, "__pm_runtime_disable" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xd168235d, "single_open" },
	{ 0x69a358a6, "iomem_resource" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x649a8dbb, "devm_kzalloc" },
	{ 0x4ded984b, "single_release" },
	{ 0xfea58b91, "usb_del_gadget_udc" },
	{ 0x96c7e43b, "seq_printf" },
	{ 0x3fec048f, "sg_next" },
	{ 0x68f934ee, "x86_dma_fallback_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x13ebf40e, "debugfs_print_regs32" },
	{ 0xde44be57, "__pm_runtime_resume" },
	{ 0xf2cba4b9, "pm_runtime_allow" },
	{ 0xac697e18, "debugfs_create_file" },
	{ 0x500393f2, "pm_runtime_forbid" },
	{ 0x23534861, "debugfs_remove_recursive" },
	{ 0x60cdfa56, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xbff2bcd2, "usb_gadget_unmap_request" },
	{ 0x102cd5ca, "device_register" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x50eedeb8, "printk" },
	{ 0x238e93aa, "platform_device_alloc" },
	{ 0x5689da47, "platform_device_add" },
	{ 0xb4390f9a, "mcount" },
	{ 0x6c2e3320, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x5cf5761a, "platform_get_resource" },
	{ 0xb0fc0f27, "platform_device_unregister" },
	{ 0xf1243fad, "dma_release_from_coherent" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x501a10ec, "platform_driver_register" },
	{ 0x7087c350, "dma_alloc_from_coherent" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x7ffda337, "platform_device_add_resources" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x9dc48f8f, "pm_runtime_enable" },
	{ 0xe912b845, "put_device" },
	{ 0x6f857831, "usb_add_gadget_udc" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x242d56fc, "__devm_request_region" },
	{ 0x9a440a24, "dev_driver_string" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xcb9e4a82, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x3cbdd50b, "dma_supported" },
	{ 0x53602505, "devm_ioremap" },
	{ 0x2bd31cf9, "device_unregister" },
	{ 0xb81960ca, "snprintf" },
	{ 0x5ac07bd8, "platform_get_irq" },
	{ 0xb151e5de, "platform_driver_unregister" },
	{ 0xcaac2819, "dev_set_name" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xf199efc0, "dma_ops" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x70bc4f71, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";


MODULE_INFO(srcversion, "73C3B76B050F0E729FA1C17");
