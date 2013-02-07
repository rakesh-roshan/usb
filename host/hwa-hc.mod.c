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
	{ 0x1e96ef9f, "wusbhc_rh_start_port_reset" },
	{ 0xf844090d, "wusbhc_rh_resume" },
	{ 0xe6b542ef, "wusbhc_rh_suspend" },
	{ 0x8810eb96, "wusbhc_rh_control" },
	{ 0x556957e5, "wusbhc_rh_status_data" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7a4497db, "kzfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x69e27c7a, "bitmap_copy_le" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7fc417de, "dev_warn" },
	{ 0x1e6c70f2, "wusbhc_b_create" },
	{ 0xb1a2cd4b, "usb_add_hcd" },
	{ 0x6e9f04ed, "wa_create" },
	{ 0x48a32ebe, "wusbhc_create" },
	{ 0xb81960ca, "snprintf" },
	{ 0xfe2e17d7, "wusb_et_name" },
	{ 0x9924c496, "__usb_get_extra_descriptor" },
	{ 0x8986abf4, "uwb_rc_get_by_grandpa" },
	{ 0xccd0a7e7, "usb_get_intf" },
	{ 0xc8dd29cd, "usb_get_dev" },
	{ 0xf4654c3f, "wa_urb_enqueue_run" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4a34b57c, "usb_create_hcd" },
	{ 0x85ff6470, "_dev_info" },
	{ 0xbb6bf5e, "wusb_cluster_id_get" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0xb725d128, "wusb_cluster_id_put" },
	{ 0x5de66c45, "wa_urb_enqueue" },
	{ 0x334f2b9, "wa_urb_dequeue" },
	{ 0xc1f85ae3, "rpipe_ep_disable" },
	{ 0x6198cad9, "dev_err" },
	{ 0x24b510b2, "usb_put_hcd" },
	{ 0xccd837e0, "usb_remove_hcd" },
	{ 0x1818d34c, "wusbhc_b_destroy" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0xfeced5fa, "usb_put_dev" },
	{ 0x9ee25614, "usb_put_intf" },
	{ 0xe3790e1, "uwb_rc_put" },
	{ 0x6337c5e1, "wusbhc_destroy" },
	{ 0xa921b814, "__wa_destroy" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wusbcore,wusb-wa,uwb";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc02ip01*");

MODULE_INFO(srcversion, "0B1F54A3EFFB3F0727A69AB");
