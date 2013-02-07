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
	{ 0xc897c382, "sg_init_table" },
	{ 0xd2d77df6, "uwb_rsv_establish" },
	{ 0xc80a0827, "mem_map" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x3be89d3c, "usb_register_notify" },
	{ 0x71817570, "usb_ep0_reinit" },
	{ 0xf33f1224, "uwb_pal_register" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x77f0ad51, "usb_set_device_state" },
	{ 0xfe1c7488, "uwb_rsv_get_usable_mas" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x33543801, "queue_work" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x6baae653, "cancel_delayed_work_sync" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x399b737b, "usb_hcd_giveback_urb" },
	{ 0x91715312, "sprintf" },
	{ 0xa2d4caf4, "sysfs_remove_group" },
	{ 0xb5d35189, "uwb_rsv_destroy" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8fa8c5c8, "usb_get_hcd" },
	{ 0x24b510b2, "usb_put_hcd" },
	{ 0x3cf5c1a1, "usb_get_descriptor" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x2bc95bd4, "memset" },
	{ 0x6198cad9, "dev_err" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xa1913a7e, "sysfs_create_group" },
	{ 0x5152e605, "memcmp" },
	{ 0x6f176fab, "uwb_radio_stop" },
	{ 0xb4390f9a, "mcount" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x5996fce7, "uwb_rsv_terminate" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4c1182cb, "bitmap_scnprintf" },
	{ 0x3c004bd8, "uwb_pal_unregister" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x61651be, "strcat" },
	{ 0xe9587909, "usb_unregister_notify" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0xc8dd29cd, "usb_get_dev" },
	{ 0xc367a4ad, "uwb_pal_init" },
	{ 0x8b491122, "uwb_rc_reset_all" },
	{ 0xde515fd5, "uwb_radio_start" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xfeced5fa, "usb_put_dev" },
	{ 0xfbce1a75, "crypto_destroy_tfm" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0xb6244511, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x3a2ddfca, "uwb_rsv_create" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x7fc417de, "dev_warn" },
	{ 0xb81960ca, "snprintf" },
	{ 0x48104c3c, "crypto_alloc_base" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0x47c149ab, "queue_delayed_work" },
	{ 0xc2d711e1, "krealloc" },
	{ 0x52770bcb, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uwb";


MODULE_INFO(srcversion, "500EFB81433BAD024816422");
