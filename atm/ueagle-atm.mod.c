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
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x4845c423, "param_array_ops" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x91715312, "sprintf" },
	{ 0xb81960ca, "snprintf" },
	{ 0xfbe19c9, "usb_set_interface" },
	{ 0xefb12c35, "kthread_create_on_node" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0xa1913a7e, "sysfs_create_group" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x2acbc8cd, "wake_up_process" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x28af7b69, "request_firmware_nowait" },
	{ 0x1303912, "usbatm_usb_probe" },
	{ 0xbdcbda41, "usb_reset_device" },
	{ 0x5223c83, "usb_bulk_msg" },
	{ 0x5b948058, "usb_driver_claim_interface" },
	{ 0x142b2869, "usb_ifnum_to_if" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x45c0690, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x70bd1af3, "atm_dev_signal_change" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x24e1307e, "flush_work_sync" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0x21eb73c6, "kthread_stop" },
	{ 0xa2d4caf4, "sysfs_remove_group" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xea9e9817, "usb_string" },
	{ 0x6c2e3320, "strncmp" },
	{ 0x7fc417de, "dev_warn" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd11c0dc1, "__kernel_param_unlock" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xe914e41e, "strcpy" },
	{ 0xaf91d89f, "__kernel_param_lock" },
	{ 0xb7b61546, "crc32_be" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15081a48, "release_firmware" },
	{ 0x6b4033ed, "request_firmware" },
	{ 0x8949858b, "schedule_work" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x6198cad9, "dev_err" },
	{ 0x75bb675a, "finish_wait" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf8bff81e, "current_task" },
	{ 0x37a0cba, "kfree" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x85ff6470, "_dev_info" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0xef590995, "usbatm_usb_disconnect" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbatm,atm";

MODULE_ALIAS("usb:v1110p9001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p900Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9022d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9021d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9024d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9023d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9032d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9031d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9042d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9041d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1039p2111d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1039p2110d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1039p2101d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1039p2100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1039p2131d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1039p2130d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1039p2121d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1039p2120d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05CCp3351d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05CCp3350d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05CCp3352d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05CCp3353d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05CCp3362d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05CCp3363d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp00F2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp00F1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp00FAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp00F9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp00F6d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp00F5d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp00F8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp00F7d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "2174374B6C2E854821BC548");
