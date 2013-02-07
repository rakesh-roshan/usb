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
	{ 0x50eedeb8, "printk" },
	{ 0x825c0fe7, "put_tty_driver" },
	{ 0x5c7d54f5, "tty_unregister_driver" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0xbd11895, "tty_register_driver" },
	{ 0x6458d288, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xc7d337b6, "__alloc_tty_driver" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x290612bb, "usb_autopm_get_interface_async" },
	{ 0xfc60f0e5, "tty_register_device" },
	{ 0xccd0a7e7, "usb_get_intf" },
	{ 0x5b948058, "usb_driver_claim_interface" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xeae58e84, "device_create_file" },
	{ 0x7fc417de, "dev_warn" },
	{ 0x52770bcb, "usb_alloc_urb" },
	{ 0x9ba1ba2a, "usb_alloc_coherent" },
	{ 0x5ea95f16, "tty_port_init" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x142b2869, "usb_ifnum_to_if" },
	{ 0x37a0cba, "kfree" },
	{ 0x9ee25614, "usb_put_intf" },
	{ 0x6a7cd462, "tty_unregister_device" },
	{ 0xc32eefb0, "tty_flip_buffer_push" },
	{ 0x4d6a062b, "tty_insert_flip_string_fixed_flag" },
	{ 0xa5808a32, "usb_driver_release_interface" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0x170f2027, "tty_vhangup" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x9a33f976, "device_remove_file" },
	{ 0x2e60bace, "memcpy" },
	{ 0x91715312, "sprintf" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x8949858b, "schedule_work" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x5152e605, "memcmp" },
	{ 0xdd681228, "tty_get_baud_rate" },
	{ 0xc85aafcd, "usb_autopm_put_interface" },
	{ 0x16888127, "usb_autopm_get_interface" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0xeb62d212, "usb_autopm_put_interface_async" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xd626add3, "tty_standard_install" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x48f3f4ff, "tty_port_open" },
	{ 0xce229333, "tty_port_close" },
	{ 0x13ebfc9b, "tty_port_hangup" },
	{ 0xd3fb6cc4, "tty_wakeup" },
	{ 0xba638190, "tty_port_put" },
	{ 0x300670a9, "usb_free_coherent" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0x821ba6ce, "tty_kref_put" },
	{ 0xa32a36ea, "tty_hangup" },
	{ 0x5d05fbaf, "tty_port_tty_get" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6198cad9, "dev_err" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0870p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E8Dp0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E8Dp3329d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0482p0203d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v079Bp000Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACEp1602d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACEp1608d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACEp1611d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p7000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0803p3095d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572p1321d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572p1324d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572p1328d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p6425d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p2D91d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p2D92d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p2D93d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p2D95d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p2D96d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p2D97d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p2D99d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p2D9Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572p1329d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1BBBp0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1576p03B1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0421p042Dd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p04D8d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p04C9d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0419d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p044Dd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0001d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0475d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0508d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0418d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0425d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0486d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p04DFd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p000Ed*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0445d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p042Fd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p048Ed*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0420d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p04E6d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p04B2d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0134d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p046Ed*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p002Fd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0088d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p00FCd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0042d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p00B0d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p00ABd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0481d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0007d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0071d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p04F0d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0070d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p00E9d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0099d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0128d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p008Fd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p00A0d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p007Bd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0094d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p003Ad*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p00E9d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0108d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p01F5d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p02E3d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0178d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p010Ed*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p02D9d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p01D0d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0223d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0275d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p026Cd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0154d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p04CEd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p01D4d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0302d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0335d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p03CDd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v04E7p6651d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v03EBp0030d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0694pFF00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04D8p000Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip00*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip01*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip02*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip03*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip04*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip05*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip06*");

MODULE_INFO(srcversion, "41041BD0A341BD644E421AC");
