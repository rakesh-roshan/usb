cmd_drivers/usb/atm/xusbatm.ko := ld -r -m elf_i386 -T /home/roshan/Downloads/Kernels/linux-3.5/scripts/module-common.lds --build-id  -o drivers/usb/atm/xusbatm.ko drivers/usb/atm/xusbatm.o drivers/usb/atm/xusbatm.mod.o