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
	{ 0x487d9343, "param_ops_ushort" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0x92dbcf7c, "target_fabric_configfs_deregister" },
	{ 0x9dcbead5, "target_fabric_configfs_register" },
	{ 0x584837d8, "target_fabric_configfs_init" },
	{ 0x6b30e706, "usb_gadget_unregister_driver" },
	{ 0xb460ced1, "usb_gadget_probe_driver" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x6198cad9, "dev_err" },
	{ 0xe384a102, "usb_speed_string" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0xd0951b38, "transport_send_check_condition_and_sense" },
	{ 0x67e80840, "transport_init_se_cmd" },
	{ 0x623f5ed7, "target_submit_cmd" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xada2151b, "transport_free_session" },
	{ 0xef96f775, "__transport_register_session" },
	{ 0x4e1d0b27, "core_tpg_check_initiator_node_acl" },
	{ 0x57360f2, "transport_init_session" },
	{ 0xac8c6740, "transport_deregister_session" },
	{ 0x6c2e3320, "strncmp" },
	{ 0x33543801, "queue_work" },
	{ 0x1b9e0ff1, "scsilun_to_int" },
	{ 0x2e60bace, "memcpy" },
	{ 0x14bf8ea1, "core_tpg_add_initiator_node_acl" },
	{ 0x89ff43f6, "init_uts_ns" },
	{ 0x85ff6470, "_dev_info" },
	{ 0xeae58e84, "device_create_file" },
	{ 0xfb239019, "transport_generic_process_write" },
	{ 0x3fa58ef8, "wait_for_completion" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x3cb3931b, "sg_copy_to_buffer" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3cd2c666, "core_tpg_register" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x54a9db5f, "_kstrtoul" },
	{ 0x9e4b3747, "sg_copy_from_buffer" },
	{ 0x19a9e62b, "complete" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0x9a33f976, "device_remove_file" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x7fc417de, "dev_warn" },
	{ 0xa675804c, "utf8s_to_utf16s" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x11089ac7, "_ctype" },
	{ 0x9f984513, "strrchr" },
	{ 0x2d69b34d, "transport_generic_map_mem_to_cmd" },
	{ 0xa6f6e73f, "target_setup_cmd_from_cdb" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa0fc13a4, "sas_get_fabric_proto_ident" },
	{ 0xc35c82df, "sas_get_pr_transport_id" },
	{ 0x2a2bbc24, "sas_get_pr_transport_id_len" },
	{ 0xff9dab8f, "sas_parse_pr_out_transport_id" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x77a770df, "core_tpg_deregister" },
	{ 0x55ae0952, "core_tpg_del_initiator_node_acl" },
	{ 0x91715312, "sprintf" },
	{ 0xf7df50fb, "transport_generic_free_cmd" },
	{ 0x8949858b, "schedule_work" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0d8621b, "strlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb81960ca, "snprintf" },
	{ 0x50eedeb8, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,udc-core";


MODULE_INFO(srcversion, "5D97C2736B87C84C9E48871");
