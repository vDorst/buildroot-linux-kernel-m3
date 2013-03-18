#
# Makefile for the linux kernel.
#

# Common support
obj-y := core.o clock.o common.o fiq.o fiq_bridge.o debug.o
obj-m :=
obj-n :=
obj-  :=

obj-$(CONFIG_CPU_FREQ) 		+= cpu.o
obj-$(CONFIG_ARCH_MESON3)	+= pinmux.o
obj-$(CONFIG_ARCH_MESON3)	+= gpio.o
obj-$(CONFIG_ARCH_MESON3)	+= power_gate.o
obj-$(CONFIG_ARCH_MESON3)	+= sd_pad.o
obj-$(CONFIG_AML_SUSPEND)   += power_suspend.o
obj-$(CONFIG_ARCH_MESON3)	+= lm.o usbclock.o clk_set.o sram.o sleep.o

obj-$(CONFIG_ARCH_MESON3)	+= board-m3-reff16.o

# Power Management
obj-$(CONFIG_SUSPEND)			+= pm.o
