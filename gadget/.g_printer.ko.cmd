cmd_drivers/usb/gadget/g_printer.ko := ld -r -m elf_i386 -T /home/roshan/Downloads/Kernels/linux-3.5/scripts/module-common.lds --build-id  -o drivers/usb/gadget/g_printer.ko drivers/usb/gadget/g_printer.o drivers/usb/gadget/g_printer.mod.o