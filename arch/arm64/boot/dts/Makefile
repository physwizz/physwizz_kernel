# SPDX-License-Identifier: GPL-2.0
dtb-y += exynos/dtbo/exynos7885.dtb

dtb-$(CONFIG_MACH_EXYNOS7885_A20_GLOBAL) := \
    exynos/dtbo/exynos7884b-mali.dtsi

ifeq ($(CONFIG_MACH_EXYNOS7885_A20_GLOBAL),y)
always         := $(dtb-y) $(dtbo-y)
clean-files    := *.dtb *.dtbo
endif

