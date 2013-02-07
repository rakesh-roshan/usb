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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa675804c, "utf8s_to_utf16s" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xd0d8621b, "strlen" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa1f10623, "netif_carrier_on" },
	{ 0x8a08f1d7, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x8949858b, "schedule_work" },
	{ 0xadc017d1, "netif_carrier_off" },
	{ 0x6b30e706, "usb_gadget_unregister_driver" },
	{ 0x91715312, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x14437e20, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5231611a, "netif_rx" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0xd7053eb0, "skb_queue_purge" },
	{ 0x2bc95bd4, "memset" },
	{ 0xe384a102, "usb_speed_string" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x50eedeb8, "printk" },
	{ 0x7e0ad2b2, "ethtool_op_get_link" },
	{ 0x2ecf965c, "free_netdev" },
	{ 0xb883c680, "register_netdev" },
	{ 0xb4390f9a, "mcount" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x254a7fd7, "skb_push" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x89ff43f6, "init_uts_ns" },
	{ 0x568038f5, "skb_pull" },
	{ 0x633f9b15, "dev_kfree_skb_any" },
	{ 0xeae58e84, "device_create_file" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x24e1307e, "flush_work_sync" },
	{ 0x9f4921e9, "skb_queue_tail" },
	{ 0x3ff38e1e, "skb_copy_expand" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x9f984513, "strrchr" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xdb6770d5, "__alloc_skb" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0xa38f3a25, "eth_type_trans" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xab7bff8f, "eth_validate_addr" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xb460ced1, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xd273b4b4, "skb_dequeue" },
	{ 0x7fc417de, "dev_warn" },
	{ 0xc4e434d, "unregister_netdev" },
	{ 0xb81960ca, "snprintf" },
	{ 0x67386013, "__netif_schedule" },
	{ 0x487d9343, "param_ops_ushort" },
	{ 0x6dc7fcba, "skb_put" },
	{ 0x60744afa, "eth_mac_addr" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x1c7bc3a4, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";


MODULE_INFO(srcversion, "3C8E0DD038A7F9328CA7677");
