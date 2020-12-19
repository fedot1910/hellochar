ifneq ($(KERNELRELEASE),)
obj-m := hello.o
else
KDIR:= /home/lll/lllll/linux

all:
	$(MAKE) -C $(KDIR) M=$$PWD
endif
