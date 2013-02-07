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
	{ 0xf352fecf, "d_path" },
	{ 0x9a33f976, "device_remove_file" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa675804c, "utf8s_to_utf16s" },
	{ 0x5dce6b75, "complete_and_exit" },
	{ 0x72df2f2a, "up_read" },
	{ 0xb46a6385, "dequeue_signal" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xd0d8621b, "strlen" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc7d337b6, "__alloc_tty_driver" },
	{ 0x63f53168, "filp_close" },
	{ 0xbd11895, "tty_register_driver" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x243e177c, "vfs_fsync" },
	{ 0x825c0fe7, "put_tty_driver" },
	{ 0x6b30e706, "usb_gadget_unregister_driver" },
	{ 0x91715312, "sprintf" },
	{ 0xefb12c35, "kthread_create_on_node" },
	{ 0x6458d288, "tty_set_operations" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd0f0d945, "down_read" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x3fa58ef8, "wait_for_completion" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0x3daa58a9, "vfs_read" },
	{ 0xe384a102, "usb_speed_string" },
	{ 0x102cd5ca, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xf8bff81e, "current_task" },
	{ 0x45c0690, "freezing_slow_path" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
	{ 0x5ea95f16, "tty_port_init" },
	{ 0x4d6a062b, "tty_insert_flip_string_fixed_flag" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x89ff43f6, "init_uts_ns" },
	{ 0xbc1afedf, "up_write" },
	{ 0x61b5ade0, "down_write" },
	{ 0x32dc0407, "fput" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0xfc60f0e5, "tty_register_device" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xeae58e84, "device_create_file" },
	{ 0x6a7cd462, "tty_unregister_device" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x9f984513, "strrchr" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xe912b845, "put_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4292364c, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x2acbc8cd, "wake_up_process" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x5c7d54f5, "tty_unregister_driver" },
	{ 0xa32a36ea, "tty_hangup" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xb460ced1, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0x2e60bace, "memcpy" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0x4845c423, "param_array_ops" },
	{ 0xa57f1486, "send_sig_info" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xd4a7858b, "invalidate_mapping_pages" },
	{ 0x75bb675a, "finish_wait" },
	{ 0x7fc417de, "dev_warn" },
	{ 0x2bd31cf9, "device_unregister" },
	{ 0xc32eefb0, "tty_flip_buffer_push" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8235805b, "memmove" },
	{ 0x487d9343, "param_ops_ushort" },
	{ 0xcaac2819, "dev_set_name" },
	{ 0xd3fb6cc4, "tty_wakeup" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x657879ce, "__init_rwsem" },
	{ 0xcd0f21ec, "vfs_write" },
	{ 0x6fc87dfa, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";


MODULE_INFO(srcversion, "D23DE1B870A9A90473F9216");
