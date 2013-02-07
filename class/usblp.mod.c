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
	{ 0x15692c87, "param_ops_int" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x85ff6470, "_dev_info" },
	{ 0xf16b5c80, "usb_register_dev" },
	{ 0xeae58e84, "device_create_file" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x16888127, "usb_autopm_get_interface" },
	{ 0xfa88ce0e, "usb_find_interface" },
	{ 0xc85aafcd, "usb_autopm_put_interface" },
	{ 0x4292364c, "schedule" },
	{ 0x3a013b7d, "remove_wait_queue" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x1a073285, "mutex_lock_interruptible" },
	{ 0xd7bd3af2, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xf8bff81e, "current_task" },
	{ 0x7fbd3fa, "usb_unanchor_urb" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0xa029ac3f, "usb_anchor_urb" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x9a33f976, "device_remove_file" },
	{ 0xc0ef1c13, "usb_deregister_dev" },
	{ 0x91715312, "sprintf" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x733c3b54, "kasprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c4db1b5, "usb_kill_anchored_urbs" },
	{ 0x6198cad9, "dev_err" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb0207ecf, "___ratelimit" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0xfbe19c9, "usb_set_interface" },
	{ 0x50eedeb8, "printk" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc07dsc01dp01ic*isc*ip*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp02ic*isc*ip*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp03ic*isc*ip*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip01*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip02*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip03*");
MODULE_ALIAS("usb:v04B8p0202d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "BD8A318D5C286F1E78768B9");
