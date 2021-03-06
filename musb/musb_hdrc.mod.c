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
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfd7b555c, "__pm_runtime_idle" },
	{ 0xb1a2cd4b, "usb_add_hcd" },
	{ 0xf495c3ad, "debugfs_create_dir" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x6b252202, "usb_hcd_unmap_urb_for_dma" },
	{ 0xd168235d, "single_open" },
	{ 0xc996d097, "del_timer" },
	{ 0xccd837e0, "usb_remove_hcd" },
	{ 0x41f6336e, "__pm_runtime_use_autosuspend" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x4ded984b, "single_release" },
	{ 0x4a34b57c, "usb_create_hcd" },
	{ 0xcef84c27, "usb_hcd_poll_rh_status" },
	{ 0x8949858b, "schedule_work" },
	{ 0xfea58b91, "usb_del_gadget_udc" },
	{ 0x96c7e43b, "seq_printf" },
	{ 0xc179eaf4, "platform_bus_type" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x399b737b, "usb_hcd_giveback_urb" },
	{ 0xde44be57, "__pm_runtime_resume" },
	{ 0xac697e18, "debugfs_create_file" },
	{ 0x91715312, "sprintf" },
	{ 0x23534861, "debugfs_remove_recursive" },
	{ 0x60cdfa56, "seq_read" },
	{ 0xa2d4caf4, "sysfs_remove_group" },
	{ 0x7d11c268, "jiffies" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xcc820b5a, "usb_hcd_link_urb_to_ep" },
	{ 0x102cd5ca, "device_register" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x50eedeb8, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xa1913a7e, "sysfs_create_group" },
	{ 0x7234eafb, "otg_state_string" },
	{ 0xb4390f9a, "mcount" },
	{ 0x6c2e3320, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x5cf5761a, "platform_get_resource" },
	{ 0x8834396c, "mod_timer" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x501a10ec, "platform_driver_register" },
	{ 0x94969e5d, "device_init_wakeup" },
	{ 0x61651be, "strcat" },
	{ 0x5f6f6ff5, "usb_hcd_check_unlink_urb" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x9dc48f8f, "pm_runtime_enable" },
	{ 0xe912b845, "put_device" },
	{ 0x6f857831, "usb_add_gadget_udc" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x5103f2d4, "platform_get_irq_byname" },
	{ 0xa40357f7, "sysfs_notify" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xcb9e4a82, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x9c6f42c3, "pm_runtime_set_autosuspend_delay" },
	{ 0x2bd31cf9, "device_unregister" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xb81960ca, "snprintf" },
	{ 0x487d9343, "param_ops_ushort" },
	{ 0xb151e5de, "platform_driver_unregister" },
	{ 0xcaac2819, "dev_set_name" },
	{ 0x49cf91cf, "usb_hcd_unlink_urb_from_ep" },
	{ 0x7cc2b57e, "usb_hcd_resume_root_hub" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";


MODULE_INFO(srcversion, "9C90824D5BE1ACCCC25D6C7");
