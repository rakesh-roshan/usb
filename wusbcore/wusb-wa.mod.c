#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x8a2341e1, "module_layout" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x7f0b7631, "wusb_dev_destroy" },
	{ 0xf339c535, "usb_init_urb" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0x33543801, "queue_work" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x3b2bed6f, "usb_get_urb" },
	{ 0xd0496eb3, "usb_unlink_urb" },
	{ 0x7d11c268, "jiffies" },
	{ 0x2493865b, "wusbhc_giveback_urb" },
	{ 0xd80ca652, "__wusb_dev_get_by_usb_dev" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x50eedeb8, "printk" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xb4390f9a, "mcount" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x4c1182cb, "bitmap_scnprintf" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb0207ecf, "___ratelimit" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf770a6b4, "wusbd" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0xccd0a7e7, "usb_get_intf" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x3d777f47, "wusbhc_handle_dn" },
	{ 0x6d27ef64, "__bitmap_empty" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x7fc417de, "dev_warn" },
	{ 0xd16ca463, "wusbhc_reset_all" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0x9ee25614, "usb_put_intf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wusbcore";


MODULE_INFO(srcversion, "A593DC5D02DD6960BF99E3F");
