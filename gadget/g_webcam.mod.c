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
	{ 0xc2069a8, "v4l2_event_unsubscribe" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa675804c, "utf8s_to_utf16s" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xd0d8621b, "strlen" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x4c9dc6d2, "v4l2_event_queue" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x7e3d74e4, "video_device_release" },
	{ 0xe243e9f9, "video_usercopy" },
	{ 0xe0a0c578, "v4l2_event_dequeue" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xed02fff4, "__video_register_device" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x6b30e706, "usb_gadget_unregister_driver" },
	{ 0x91715312, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0xe384a102, "usb_speed_string" },
	{ 0x7ef985bd, "video_device_alloc" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xf8bff81e, "current_task" },
	{ 0xc9d7c94e, "v4l2_event_subscribe" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0xf40b2ce2, "video_unregister_device" },
	{ 0x1c842995, "v4l2_event_pending" },
	{ 0x5d58723b, "v4l2_fh_init" },
	{ 0xb6ed1e53, "strncpy" },
	{ 0xb4390f9a, "mcount" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x89ff43f6, "init_uts_ns" },
	{ 0x6ea36b29, "vm_insert_page" },
	{ 0xeae58e84, "device_create_file" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x9f984513, "strrchr" },
	{ 0x6b28acc5, "video_devdata" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4292364c, "schedule" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x4f68e5c9, "do_gettimeofday" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xb460ced1, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0x75bb675a, "finish_wait" },
	{ 0x8248125b, "v4l2_fh_add" },
	{ 0x7fc417de, "dev_warn" },
	{ 0x9530b374, "v4l2_fh_del" },
	{ 0xb81960ca, "snprintf" },
	{ 0xd608911, "vmalloc_to_page" },
	{ 0x487d9343, "param_ops_ushort" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xdef498f, "v4l2_fh_exit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,udc-core";


MODULE_INFO(srcversion, "258D49B8B73D9F070ECCCF3");
