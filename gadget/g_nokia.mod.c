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
	{ 0xf9a482f9, "msleep" },
	{ 0xa675804c, "utf8s_to_utf16s" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xd0d8621b, "strlen" },
	{ 0x132b1dfc, "page_address" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa1f10623, "netif_carrier_on" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x8949858b, "schedule_work" },
	{ 0xc7d337b6, "__alloc_tty_driver" },
	{ 0xadc017d1, "netif_carrier_off" },
	{ 0xbd11895, "tty_register_driver" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x825c0fe7, "put_tty_driver" },
	{ 0x6b30e706, "usb_gadget_unregister_driver" },
	{ 0x91715312, "sprintf" },
	{ 0x526a6f65, "__alloc_pages_nodemask" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6458d288, "tty_set_operations" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3c69927e, "__netdev_alloc_skb" },
	{ 0x5231611a, "netif_rx" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0xebf8fa25, "phonet_header_ops" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0xe384a102, "usb_speed_string" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xf8bff81e, "current_task" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0x7e0ad2b2, "ethtool_op_get_link" },
	{ 0x2ecf965c, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xb883c680, "register_netdev" },
	{ 0xb4390f9a, "mcount" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x5ea95f16, "tty_port_init" },
	{ 0x4d6a062b, "tty_insert_flip_string_fixed_flag" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x89ff43f6, "init_uts_ns" },
	{ 0x633f9b15, "dev_kfree_skb_any" },
	{ 0x8def339e, "contig_page_data" },
	{ 0xfc60f0e5, "tty_register_device" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xeae58e84, "device_create_file" },
	{ 0xd9afc54a, "dev_kfree_skb_irq" },
	{ 0x24e1307e, "flush_work_sync" },
	{ 0x9f4921e9, "skb_queue_tail" },
	{ 0x6a7cd462, "tty_unregister_device" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x9f984513, "strrchr" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xdb6770d5, "__alloc_skb" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x4292364c, "schedule" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x6db0861, "alloc_netdev_mqs" },
	{ 0xa38f3a25, "eth_type_trans" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x5c7d54f5, "tty_unregister_driver" },
	{ 0xa32a36ea, "tty_hangup" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0xab7bff8f, "eth_validate_addr" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xb460ced1, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0xdb197c83, "skb_add_rx_frag" },
	{ 0x918b17e9, "put_page" },
	{ 0x75bb675a, "finish_wait" },
	{ 0xd273b4b4, "skb_dequeue" },
	{ 0x7fc417de, "dev_warn" },
	{ 0xc32eefb0, "tty_flip_buffer_push" },
	{ 0xc4e434d, "unregister_netdev" },
	{ 0xb81960ca, "snprintf" },
	{ 0x67386013, "__netif_schedule" },
	{ 0x33ab447, "consume_skb" },
	{ 0x487d9343, "param_ops_ushort" },
	{ 0xd3fb6cc4, "tty_wakeup" },
	{ 0x6dc7fcba, "skb_put" },
	{ 0x60744afa, "eth_mac_addr" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x1c7bc3a4, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core,phonet";


MODULE_INFO(srcversion, "09D4B387FDB48E2A10CF9CD");
