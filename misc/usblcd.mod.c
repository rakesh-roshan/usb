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
	{ 0x27320567, "noop_llseek" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0xc85aafcd, "usb_autopm_put_interface" },
	{ 0xc0ef1c13, "usb_deregister_dev" },
	{ 0x50eedeb8, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x16888127, "usb_autopm_get_interface" },
	{ 0xfa88ce0e, "usb_find_interface" },
	{ 0x85ff6470, "_dev_info" },
	{ 0xf16b5c80, "usb_register_dev" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7fc417de, "dev_warn" },
	{ 0xc8dd29cd, "usb_get_dev" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x8c4db1b5, "usb_kill_anchored_urbs" },
	{ 0xeec24d31, "usb_wait_anchor_empty_timeout" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xfeced5fa, "usb_put_dev" },
	{ 0x5223c83, "usb_bulk_msg" },
	{ 0x7fbd3fa, "usb_unanchor_urb" },
	{ 0x6198cad9, "dev_err" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0xa029ac3f, "usb_anchor_urb" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x9ba1ba2a, "usb_alloc_coherent" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0x4792c572, "down_interruptible" },
	{ 0xc4554217, "up" },
	{ 0x300670a9, "usb_free_coherent" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xd0d8621b, "strlen" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v10D2p*d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "83D32575F5910098BBD000E");
