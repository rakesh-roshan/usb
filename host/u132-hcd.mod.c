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
	{ 0x15692c87, "param_ops_int" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x75bb675a, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf8bff81e, "current_task" },
	{ 0xb151e5de, "platform_driver_unregister" },
	{ 0xb0fc0f27, "platform_device_unregister" },
	{ 0x501a10ec, "platform_driver_register" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x96bf44ea, "usb_ftdi_elan_edset_setup" },
	{ 0x2bee9090, "usb_ftdi_elan_edset_flush" },
	{ 0x732b0f9c, "usb_ftdi_elan_edset_single" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0xcc820b5a, "usb_hcd_link_urb_to_ep" },
	{ 0x91715312, "sprintf" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x629ca69d, "usb_hc_died" },
	{ 0x828ea6be, "usb_ftdi_elan_edset_output" },
	{ 0xcacc919a, "usb_ftdi_elan_edset_input" },
	{ 0xe5acf88f, "usb_ftdi_elan_edset_empty" },
	{ 0xccd837e0, "usb_remove_hcd" },
	{ 0x399b737b, "usb_hcd_giveback_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x49cf91cf, "usb_hcd_unlink_urb_from_ep" },
	{ 0x5f6f6ff5, "usb_hcd_check_unlink_urb" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x47c149ab, "queue_delayed_work" },
	{ 0xb1a2cd4b, "usb_add_hcd" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0xc6c087ae, "ftdi_elan_gone_away" },
	{ 0x50eedeb8, "printk" },
	{ 0x4a34b57c, "usb_create_hcd" },
	{ 0x7d11c268, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x10248fee, "usb_ftdi_elan_write_pcimem" },
	{ 0x85ff6470, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xcdee4245, "usb_ftdi_elan_read_pcimem" },
	{ 0x24b510b2, "usb_put_hcd" },
	{ 0x7fc417de, "dev_warn" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x6198cad9, "dev_err" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ftdi-elan";


MODULE_INFO(srcversion, "DBD870B279CEB7863099A27");
