cmd_drivers/usb/renesas_usbhs/renesas_usbhs.ko := ld -r -m elf_i386 -T /home/roshan/Downloads/Kernels/linux-3.5/scripts/module-common.lds --build-id  -o drivers/usb/renesas_usbhs/renesas_usbhs.ko drivers/usb/renesas_usbhs/renesas_usbhs.o drivers/usb/renesas_usbhs/renesas_usbhs.mod.o