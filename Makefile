.SECONDARY: # this prevents object files from being removed
.DEFAULT_GOAL := all

_IGNORE0 := $(shell test -f Makefile.user || cp sample-Makefile.user Makefile.user)
_IGNORE1 := $(shell test -f $(JD_CORE)/jacdac/README.md || git submodule update --init --recursive 1>&2)

include Makefile.user

JD_CORE = jacdac-c
JD_STM = jacdac-stm32x0

include $(JD_STM)/build.mk
