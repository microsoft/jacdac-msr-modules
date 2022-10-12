.SECONDARY: # this prevents object files from being removed
.DEFAULT_GOAL := all

JD_CORE = jacdac-c
JD_STM = jacdac-stm32x0

_IGNORE0 := $(shell test -f Makefile.user || cp sample-Makefile.user Makefile.user)
_IGNORE1 := $(shell test -f $(JD_STM)/stm32/cmsis_device_g0/README.md || git submodule update --init --recursive 1>&2)

include Makefile.user

# these don't have .uf2 files
NO_DROP_TARGETS ?= \
	lora-e5-88-4.0 \

# these go into fw-VERSION.uf2
DROP_TARGETS ?= \
	jm-v4.0 \
	jm-v4.3br \
	jm-v3.3 \
	jm-v3.6 \
	jm-v3.6one \
	jm-v3.8 \
	jm-v4.0rot \
	jm-v4.0matrix \
	jm-access-switch-input-34-1.3 \
	jm-access-switch-output-1.1 \
	jm-button-40-0.2 \
	jm-flex-sensor-1.0 \
	jm-relay-1.0 \
	jm-rgb-led-bar-58-0.1 \
	jm-rgb-led-generic-60-0.1 \
	jm-rgb-led-ring-37-2.1 \
	jm-rotary-control-26-1.0A \
	jm-rotary-control-26-1.1 \
	jm-servo-dual-23-1.0 \
	jm-slider-49-1.1 \
	jm-temp-humidity-18-1.0A \
	jm-temp-humidity-18-1.1 \
	jm-mikrobus-61-3.4 \
	jm-haptic-1.0 \
	jm-imu-1.0 \


include $(JD_STM)/build.mk
