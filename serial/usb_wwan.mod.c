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
	{ 0x5d05fbaf, "tty_port_tty_get" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xeb3bdf69, "usb_get_from_anchor" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0xd0496eb3, "usb_unlink_urb" },
	{ 0x7d11c268, "jiffies" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xdd681228, "tty_get_baud_rate" },
	{ 0x50eedeb8, "printk" },
	{ 0xeb62d212, "usb_autopm_put_interface_async" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0x4d6a062b, "tty_insert_flip_string_fixed_flag" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x290612bb, "usb_autopm_get_interface_async" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x839344e6, "usb_autopm_get_interface_no_resume" },
	{ 0xc6cb79eb, "usb_autopm_put_interface_no_suspend" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x821ba6ce, "tty_kref_put" },
	{ 0xc32eefb0, "tty_flip_buffer_push" },
	{ 0xa4a44d8c, "usb_serial_port_softint" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0xc85aafcd, "usb_autopm_put_interface" },
	{ 0xa029ac3f, "usb_anchor_urb" },
	{ 0x52770bcb, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";


MODULE_INFO(srcversion, "9989BA773ED9F0C6CB3BA71");
