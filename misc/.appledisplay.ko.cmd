cmd_drivers/usb/misc/appledisplay.ko := ld -r -m elf_i386 -T /home/roshan/Downloads/Kernels/linux-3.5/scripts/module-common.lds --build-id  -o drivers/usb/misc/appledisplay.ko drivers/usb/misc/appledisplay.o drivers/usb/misc/appledisplay.mod.o