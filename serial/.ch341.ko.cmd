cmd_drivers/usb/serial/ch341.ko := ld -r -m elf_i386 -T /home/roshan/Downloads/Kernels/linux-3.5/scripts/module-common.lds --build-id  -o drivers/usb/serial/ch341.ko drivers/usb/serial/ch341.o drivers/usb/serial/ch341.mod.o