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
	{ 0x2ab50a7, "scsi_get_host_dev" },
	{ 0xcd9991a9, "usb_usual_set_present" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x39509502, "scsi_host_alloc" },
	{ 0xc65e73c, "scsi_normalize_sense" },
	{ 0xedf68e31, "usb_sg_wait" },
	{ 0xd0d8621b, "strlen" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0x9a61156e, "scsi_add_host_with_dma" },
	{ 0xa088a23f, "blk_queue_max_hw_sectors" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xaebce8f5, "usb_reset_endpoint" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0x3fec048f, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x6baae653, "cancel_delayed_work_sync" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x5e284ee0, "scsi_cmd_get_serial" },
	{ 0x91715312, "sprintf" },
	{ 0xd0496eb3, "usb_unlink_urb" },
	{ 0xefb12c35, "kthread_create_on_node" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4d405db8, "param_ops_string" },
	{ 0x89d4dbaf, "usb_usual_check_type" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x3fa58ef8, "wait_for_completion" },
	{ 0x738c9c41, "scsi_eh_restore_cmnd" },
	{ 0x582f3e70, "scsi_is_host_device" },
	{ 0x7b5dab9d, "usb_lock_device_for_reset" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xf8bff81e, "current_task" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x21eb73c6, "kthread_stop" },
	{ 0x3edad223, "usb_usual_clear_present" },
	{ 0x5152e605, "memcmp" },
	{ 0x66d858b5, "kunmap" },
	{ 0x53f2ef10, "wait_for_completion_interruptible" },
	{ 0xb4390f9a, "mcount" },
	{ 0xf2c14d92, "usb_usual_ignore_device" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0xdc4fc23b, "scsi_scan_host" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x300670a9, "usb_free_coherent" },
	{ 0x164b1f67, "scsi_host_put" },
	{ 0x6241a3da, "blk_queue_update_dma_alignment" },
	{ 0xeae58e84, "device_create_file" },
	{ 0x9683a73d, "dev_notice" },
	{ 0x261e3696, "blk_queue_bounce_limit" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x90751444, "kmap" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbdcbda41, "usb_reset_device" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x4292364c, "schedule" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0xc7a49249, "usb_sg_cancel" },
	{ 0xc41e8f7a, "wait_for_completion_interruptible_timeout" },
	{ 0x2acbc8cd, "wake_up_process" },
	{ 0xe091a67c, "scsi_eh_prep_cmnd" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x839344e6, "usb_autopm_get_interface_no_resume" },
	{ 0xc6cb79eb, "usb_autopm_put_interface_no_suspend" },
	{ 0x2b0ba2b0, "scsi_sense_desc_find" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0x289f836b, "usb_sg_init" },
	{ 0x85a0bd31, "scsi_report_bus_reset" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0x75bb675a, "finish_wait" },
	{ 0xbe13004, "usb_storage_usb_ids" },
	{ 0x7fc417de, "dev_warn" },
	{ 0x96b8e282, "scsi_remove_host" },
	{ 0x19a9e62b, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1163f0a7, "blk_max_low_pfn" },
	{ 0x9ba1ba2a, "usb_alloc_coherent" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0x47c149ab, "queue_delayed_work" },
	{ 0xc85aafcd, "usb_autopm_put_interface" },
	{ 0x1e4255a0, "scsi_report_device_reset" },
	{ 0x52770bcb, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "75E239694F747C0F9CDB1B9");
