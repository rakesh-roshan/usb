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
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0xadb5559d, "param_ops_byte" },
	{ 0x4845c423, "param_array_ops" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x7fc417de, "dev_warn" },
	{ 0x15081a48, "release_firmware" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x5223c83, "usb_bulk_msg" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xfbe19c9, "usb_set_interface" },
	{ 0xbdcbda41, "usb_reset_device" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x2e60bace, "memcpy" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x5b948058, "usb_driver_claim_interface" },
	{ 0x37a0cba, "kfree" },
	{ 0xa5808a32, "usb_driver_release_interface" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x142b2869, "usb_ifnum_to_if" },
	{ 0x6198cad9, "dev_err" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x6b4033ed, "request_firmware" },
	{ 0x91715312, "sprintf" },
	{ 0x70bd1af3, "atm_dev_signal_change" },
	{ 0xc996d097, "del_timer" },
	{ 0x8949858b, "schedule_work" },
	{ 0x5152e605, "memcmp" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x8834396c, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0xea9e9817, "usb_string" },
	{ 0x50eedeb8, "printk" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x24e1307e, "flush_work_sync" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x1303912, "usbatm_usb_probe" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbatm,atm";

MODULE_ALIAS("usb:v06B9p4061d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "66700527535C8F7F4259477");
