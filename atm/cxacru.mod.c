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
	{ 0xef590995, "usbatm_usb_disconnect" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0xeae58e84, "device_create_file" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1a073285, "mutex_lock_interruptible" },
	{ 0x70bd1af3, "atm_dev_signal_change" },
	{ 0x77edf722, "schedule_delayed_work" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x61c44465, "usb_clear_halt" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x7fc417de, "dev_warn" },
	{ 0x15081a48, "release_firmware" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x50eedeb8, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0d8621b, "strlen" },
	{ 0x6198cad9, "dev_err" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x5223c83, "usb_bulk_msg" },
	{ 0x2e60bace, "memcpy" },
	{ 0x2bc95bd4, "memset" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x6b4033ed, "request_firmware" },
	{ 0x91715312, "sprintf" },
	{ 0x85ff6470, "_dev_info" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xea9e9817, "usb_string" },
	{ 0x1303912, "usbatm_usb_probe" },
	{ 0x19a9e62b, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0x6baae653, "cancel_delayed_work_sync" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0xd0496eb3, "usb_unlink_urb" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x3fa58ef8, "wait_for_completion" },
	{ 0xbe2c0274, "add_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9a33f976, "device_remove_file" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbatm,atm";

MODULE_ALIAS("usb:v0572pCAFEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572pCB00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572pCB01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572pCB02d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572pCB06d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572pCB07d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08E3p0100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08E3p0102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EB0p3457d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1803p5510d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0675p0200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p330Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p330Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0659p0020d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0509p0812d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v100DpCB01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v100Dp3342d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "39AF19EC4D425869627BFDA");
