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
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x487d9343, "param_ops_ushort" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0x3cf5c1a1, "usb_get_descriptor" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x4f68e5c9, "do_gettimeofday" },
	{ 0x1a073285, "mutex_lock_interruptible" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0xc80a0827, "mem_map" },
	{ 0xc897c382, "sg_init_table" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0x84be886f, "completion_done" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d11c268, "jiffies" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xd0496eb3, "usb_unlink_urb" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x61c44465, "usb_clear_halt" },
	{ 0x8e28efff, "usb_get_status" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x3fa58ef8, "wait_for_completion" },
	{ 0xfbe19c9, "usb_set_interface" },
	{ 0x7fc417de, "dev_warn" },
	{ 0xe384a102, "usb_speed_string" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x85ff6470, "_dev_info" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x132b1dfc, "page_address" },
	{ 0x6198cad9, "dev_err" },
	{ 0xedf68e31, "usb_sg_wait" },
	{ 0x289f836b, "usb_sg_init" },
	{ 0x300670a9, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x19a9e62b, "complete" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0x9ba1ba2a, "usb_alloc_coherent" },
	{ 0x2bc95bd4, "memset" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "0779EC49B0DB7317DC3C58C");
