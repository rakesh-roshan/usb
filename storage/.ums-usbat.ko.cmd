cmd_drivers/usb/storage/ums-usbat.ko := ld -r -m elf_i386 -T /home/roshan/Downloads/Kernels/linux-3.5/scripts/module-common.lds --build-id  -o drivers/usb/storage/ums-usbat.ko drivers/usb/storage/ums-usbat.o drivers/usb/storage/ums-usbat.mod.o