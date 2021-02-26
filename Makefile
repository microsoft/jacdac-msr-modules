.SECONDARY: # this prevents object files from being removed
.DEFAULT_GOAL := all

JD_CORE = jacdac-c
JD_STM = jacdac-stm32x0

_IGNORE0 := $(shell test -f Makefile.user || cp sample-Makefile.user Makefile.user)
_IGNORE1 := $(shell test -f $(JD_CORE)/jacdac/README.md || git submodule update --init --recursive 1>&2)

include Makefile.user

DROP_TARGETS ?= jm-v2.0 jm-v2.0i jm-v2.0p jm-v2.1 jm-temp-humidity-18-1.0A 

include $(JD_STM)/build.mk
