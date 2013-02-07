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
	{ 0x5d05fbaf, "tty_port_tty_get" },
	{ 0x9a33f976, "device_remove_file" },
	{ 0x38b7dbeb, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3f99e3b3, "driver_register" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x6477d19b, "__bus_register" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xd168235d, "single_open" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0xd6d0acd6, "dev_set_drvdata" },
	{ 0xe988ad7a, "dev_printk" },
	{ 0x4ded984b, "single_release" },
	{ 0x96a592f6, "seq_puts" },
	{ 0x48f3f4ff, "tty_port_open" },
	{ 0x8949858b, "schedule_work" },
	{ 0xc7d337b6, "__alloc_tty_driver" },
	{ 0x96c7e43b, "seq_printf" },
	{ 0x13ebfc9b, "tty_port_hangup" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xcb32c9e4, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xbd11895, "tty_register_driver" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x16888127, "usb_autopm_get_interface" },
	{ 0xaa5eaedd, "mutex_unlock" },
	{ 0x825c0fe7, "put_tty_driver" },
	{ 0x91715312, "sprintf" },
	{ 0x60cdfa56, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6458d288, "tty_set_operations" },
	{ 0xce229333, "tty_port_close" },
	{ 0xff28f65, "device_del" },
	{ 0x6198cad9, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xe98b2038, "usb_deregister" },
	{ 0xbdbaf516, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0x15cada19, "driver_unregister" },
	{ 0xb4390f9a, "mcount" },
	{ 0xb863e8df, "seq_putc" },
	{ 0xe17f695a, "usb_control_msg" },
	{ 0x5ea95f16, "tty_port_init" },
	{ 0x4d6a062b, "tty_insert_flip_string_fixed_flag" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x62ca0b0a, "mutex_lock" },
	{ 0x170f2027, "tty_vhangup" },
	{ 0xc5d70c2c, "device_add" },
	{ 0x18eda87c, "bus_unregister" },
	{ 0x60b2da19, "usb_store_new_id" },
	{ 0x391f8691, "tty_insert_flip_string_flags" },
	{ 0xe0cc0d9, "usb_match_id" },
	{ 0xfc60f0e5, "tty_register_device" },
	{ 0xeae58e84, "device_create_file" },
	{ 0x66392330, "module_put" },
	{ 0x6a7cd462, "tty_unregister_device" },
	{ 0x85ff6470, "_dev_info" },
	{ 0x50701c19, "usb_submit_urb" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xc8dd29cd, "usb_get_dev" },
	{ 0xe912b845, "put_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfeced5fa, "usb_put_dev" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x7ffde7b, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x5c7d54f5, "tty_unregister_driver" },
	{ 0xa32a36ea, "tty_hangup" },
	{ 0x85526eef, "usb_show_dynids" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0xd626add3, "tty_standard_install" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xcb9e4a82, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3aec3cfc, "device_initialize" },
	{ 0x7ca7fcd0, "usb_match_one_id" },
	{ 0xbfe2d402, "usb_register_driver" },
	{ 0x821ba6ce, "tty_kref_put" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xda529772, "driver_attach" },
	{ 0xc32eefb0, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xb81960ca, "snprintf" },
	{ 0x487d9343, "param_ops_ushort" },
	{ 0xcaac2819, "dev_set_name" },
	{ 0xd3fb6cc4, "tty_wakeup" },
	{ 0x51461818, "dev_get_drvdata" },
	{ 0x78cd9578, "usb_free_urb" },
	{ 0xf5757499, "try_module_get" },
	{ 0xc85aafcd, "usb_autopm_put_interface" },
	{ 0x52770bcb, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4BF9CC6732215A93516BD2E");
