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
	{ 0xbd64c265, "usb_serial_deregister_drivers" },
	{ 0xfc68d0af, "usb_serial_register_drivers" },
	{ 0x61c44465, "usb_clear_halt" },
	{ 0x839344e6, "usb_autopm_get_interface_no_resume" },
	{ 0x8fb576b8, "usb_scuttle_anchored_urbs" },
	{ 0xeb3bdf69, "usb_get_from_anchor" },
	{ 0x8c4db1b5, "usb_kill_anchored_urbs" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0xfbe19c9, "usb_set_interface" },
	{ 0x7fbd3fa, "usb_unanchor_urb" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0xa029ac3f, "usb_anchor_urb" },
	{ 0x2e60bace, "memcpy" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x290612bb, "usb_autopm_get_interface_async" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0xa4a44d8c, "usb_serial_port_softint" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0xeb62d212, "usb_autopm_put_interface_async" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xc85aafcd, "usb_autopm_put_interface" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x16888127, "usb_autopm_get_interface" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0xa32a36ea, "tty_hangup" },
	{ 0x37a0cba, "kfree" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x821ba6ce, "tty_kref_put" },
	{ 0xc32eefb0, "tty_flip_buffer_push" },
	{ 0x4d6a062b, "tty_insert_flip_string_fixed_flag" },
	{ 0x5d05fbaf, "tty_port_tty_get" },
	{ 0x6198cad9, "dev_err" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x7d11c268, "jiffies" },
	{ 0x50eedeb8, "printk" },
	{ 0xe988ad7a, "dev_printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0F3Dp0112d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p1B1Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p211Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p1E1Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0017d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0018d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0218d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0020d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0220d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0022d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0024d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0224d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0019d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0021d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0112d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0120d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0301d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0023d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v1199p0025d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v1199p0026d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0027d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0028d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0029d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6802d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6803d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6804d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6805d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6808d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6809d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6812d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6813d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6815d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6816d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6820d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6821d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6822d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6832d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6833d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6834d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6835d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6838d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6839d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p683Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p683Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p683Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p683Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p683Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6850d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6851d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6852d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6853d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6855d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6856d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6859d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p685Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p6880d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v1199p6890d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v1199p6891d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v1199p6892d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v1199p6893d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p68A2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8133d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "EAB194D6B1111FBA8A094A3");
