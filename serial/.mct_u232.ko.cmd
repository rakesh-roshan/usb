cmd_drivers/usb/serial/mct_u232.ko := ld -r -m elf_i386 -T /home/roshan/Downloads/Kernels/linux-3.5/scripts/module-common.lds --build-id  -o drivers/usb/serial/mct_u232.ko drivers/usb/serial/mct_u232.o drivers/usb/serial/mct_u232.mod.o