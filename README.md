# CylinOS
An OS made for timepass :)

# Prerequisite
1. Any Linux based OS

## Installation
Run the following commands in your terminal
- `make loader.o`
- `make kernel.o`
- `make cylin.bin`
- `make install`
- add the following to /boot/grub/grub.cfg file

```
### BEGIN MYKERNEL ###
menuentry 'CylinOS' {
        multiboot /boot/cylin.bin
        boot
}
### END MYKERNEL ###
```
