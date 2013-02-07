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
	{ 0xe98b2038, "usb_deregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcb6e91a7, "backlight_device_register" },
	{ 0xb81960ca, "snprintf" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x9ba1ba2a, "usb_alloc_coherent" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x77edf722, "schedule_delayed_work" },
	{ 0x47c149ab, "queue_delayed_work" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x6198cad9, "dev_err" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x50eedeb8, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0x300670a9, "usb_free_coherent" },
	{ 0x362c61c8, "backlight_device_unregister" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v05ACp9218d*dc*dsc*dp*ic03isc*ip00*");
MODULE_ALIAS("usb:v05ACp9219d*dc*dsc*dp*ic03isc*ip00*");
MODULE_ALIAS("usb:v05ACp921Cd*dc*dsc*dp*ic03isc*ip00*");
MODULE_ALIAS("usb:v05ACp921Dd*dc*dsc*dp*ic03isc*ip00*");

MODULE_INFO(srcversion, "65A7080F5809882CEDAD3A8");
