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
	{ 0x15692c87, "param_ops_int" },
	{ 0xc996d097, "del_timer" },
	{ 0xd3746066, "usb_stor_bulk_transfer_buf" },
	{ 0x51e9de53, "usb_stor_post_reset" },
	{ 0x6e288d58, "usb_stor_control_msg" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x16888127, "usb_autopm_get_interface" },
	{ 0x9a8b667d, "usb_enable_autosuspend" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe08e6020, "usb_stor_disconnect" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xeb62d212, "usb_autopm_put_interface_async" },
	{ 0xb4390f9a, "mcount" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x2a617d4, "usb_stor_probe2" },
	{ 0x8834396c, "mod_timer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x5223c83, "usb_bulk_msg" },
	{ 0xd9559554, "usb_stor_pre_reset" },
	{ 0x87ed9760, "usb_stor_reset_resume" },
	{ 0x8485ba16, "usb_stor_probe1" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0x9c6f42c3, "pm_runtime_set_autosuspend_delay" },
	{ 0x51461818, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage";

MODULE_ALIAS("usb:v0BDAp0138d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp0158d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp0159d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "3BCDD38204F45BDD02D57D3");
