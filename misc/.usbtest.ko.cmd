cmd_drivers/usb/misc/usbtest.ko := ld -r -m elf_i386 -T /home/roshan/Downloads/Kernels/linux-3.5/scripts/module-common.lds --build-id  -o drivers/usb/misc/usbtest.ko drivers/usb/misc/usbtest.o drivers/usb/misc/usbtest.mod.o