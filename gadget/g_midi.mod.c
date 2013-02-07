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
	{ 0x9a33f976, "device_remove_file" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa675804c, "utf8s_to_utf16s" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x15692c87, "param_ops_int" },
	{ 0xd0d8621b, "strlen" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x2756f191, "snd_card_create" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x6b30e706, "usb_gadget_unregister_driver" },
	{ 0x62951747, "snd_rawmidi_set_ops" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x9ec8a335, "snd_rawmidi_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0x42c0f199, "snd_device_new" },
	{ 0xe384a102, "usb_speed_string" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x50eedeb8, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x89ff43f6, "init_uts_ns" },
	{ 0xeae58e84, "device_create_file" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x9f984513, "strrchr" },
	{ 0x742ea46a, "snd_component_add" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xb460ced1, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x1d1cc8a4, "snd_card_free" },
	{ 0x7fc417de, "dev_warn" },
	{ 0x3bdf78e4, "snd_card_register" },
	{ 0xb81960ca, "snprintf" },
	{ 0x487d9343, "param_ops_ushort" },
	{ 0x1b6517ae, "snd_rawmidi_transmit" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x1fa21738, "snd_rawmidi_receive" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,udc-core,snd-rawmidi";


MODULE_INFO(srcversion, "5FA6ECC336E725DC36A9ED7");
