cmd_drivers/usb/serial/usb_debug.ko := ld -r -m elf_i386 -T /home/roshan/Downloads/Kernels/linux-3.5/scripts/module-common.lds --build-id  -o drivers/usb/serial/usb_debug.ko drivers/usb/serial/usb_debug.o drivers/usb/serial/usb_debug.mod.o