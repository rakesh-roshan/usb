cmd_drivers/usb/serial/ftdi_sio.ko := ld -r -m elf_i386 -T /home/roshan/Downloads/Kernels/linux-3.5/scripts/module-common.lds --build-id  -o drivers/usb/serial/ftdi_sio.ko drivers/usb/serial/ftdi_sio.o drivers/usb/serial/ftdi_sio.mod.o