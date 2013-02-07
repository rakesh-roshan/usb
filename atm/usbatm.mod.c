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
	{ 0x5dce6b75, "complete_and_exit" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x83ab9e79, "send_sig" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x99087794, "atm_charge" },
	{ 0x91715312, "sprintf" },
	{ 0xb7c3687, "vcc_release_async" },
	{ 0xefb12c35, "kthread_create_on_node" },
	{ 0x7d11c268, "jiffies" },
	{ 0x14437e20, "skb_trim" },
	{ 0x3c69927e, "__netdev_alloc_skb" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x3fa58ef8, "wait_for_completion" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x2bc95bd4, "memset" },
	{ 0xea9e9817, "usb_string" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x8834396c, "mod_timer" },
	{ 0x503ccdfa, "atm_dev_register" },
	{ 0x633f9b15, "dev_kfree_skb_any" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9f4921e9, "skb_queue_tail" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdb6770d5, "__alloc_skb" },
	{ 0xc8dd29cd, "usb_get_dev" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xfeced5fa, "usb_put_dev" },
	{ 0x68b1ef74, "kfree_skb" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x2acbc8cd, "wake_up_process" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x8c5f8119, "atm_dev_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xb7b61546, "crc32_be" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xd273b4b4, "skb_dequeue" },
	{ 0x7fc417de, "dev_warn" },
	{ 0x19a9e62b, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0x52770bcb, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm";


MODULE_INFO(srcversion, "E6BD976769E70387C328584");
