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
	{ 0xb151e5de, "platform_driver_unregister" },
	{ 0xb9f75170, "platform_driver_probe" },
	{ 0xd12ea126, "regulator_get" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xa8f59416, "gpio_direction_output" },
	{ 0x11f447ce, "__gpio_to_irq" },
	{ 0x5cf5761a, "platform_get_resource" },
	{ 0x65d6d0f0, "gpio_direction_input" },
	{ 0x6198cad9, "dev_err" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xfe990052, "gpio_free" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xfc80ace8, "usb_set_transceiver" },
	{ 0xd85ac634, "regulator_put" },
	{ 0x6baae653, "cancel_delayed_work_sync" },
	{ 0x94969e5d, "device_init_wakeup" },
	{ 0xabc47f60, "atomic_notifier_call_chain" },
	{ 0x6c8d5ae8, "__gpio_get_value" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0x77edf722, "schedule_delayed_work" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x1258d9d9, "regulator_disable" },
	{ 0x8a5c7a80, "regulator_enable" },
	{ 0xe2dd67e5, "regulator_set_current_limit" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EA53C75AF608B339FD1D08E");
