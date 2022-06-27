## Version 0.20.2

### microsoft/jacdac-msr-modules

* [2984cc6](https://github.com/microsoft/jacdac-msr-modules/commit/2984cc6) haptic updates
* [39985dc](https://github.com/microsoft/jacdac-msr-modules/commit/39985dc) add gyro-215 use default gyro transform
* [9c859fc](https://github.com/microsoft/jacdac-msr-modules/commit/9c859fc) Add MSR temp&rh 116
* [5a1b185](https://github.com/microsoft/jacdac-msr-modules/commit/5a1b185) add rpihat 212
* [95ee1d2](https://github.com/microsoft/jacdac-msr-modules/commit/95ee1d2) update windows com instructions
* [812a19b](https://github.com/microsoft/jacdac-msr-modules/commit/812a19b) add co2 209 module; update submodules
* [648ec27](https://github.com/microsoft/jacdac-msr-modules/commit/648ec27) add separate profile for temp/hum env204
* [5289b70](https://github.com/microsoft/jacdac-msr-modules/commit/5289b70) [skip ci] firmware v0.20.1 built

### microsoft/jacdac-c

* [f6d8d85](https://github.com/microsoft/jacdac-c/commit/f6d8d85) fix up vibration motor
* [6d2c94f](https://github.com/microsoft/jacdac-c/commit/6d2c94f) SPI bridge fixes
* [ed1d1bb](https://github.com/microsoft/jacdac-c/commit/ed1d1bb) pwm_ -> jd_pwm_
* [73e9944](https://github.com/microsoft/jacdac-c/commit/73e9944) avoid name collisions with pico-sdk
* [0732ecc](https://github.com/microsoft/jacdac-c/commit/0732ecc) support LSM6DS3TR-C (in addition to LSM6DSOX)
* [c437942](https://github.com/microsoft/jacdac-c/commit/c437942) default gyro transform to accel
* [9e5e261](https://github.com/microsoft/jacdac-c/commit/9e5e261) build fix
* [8172cfe](https://github.com/microsoft/jacdac-c/commit/8172cfe) add better usb/spi bridge support
* [5c77062](https://github.com/microsoft/jacdac-c/commit/5c77062) blink once for error
* [c7ff391](https://github.com/microsoft/jacdac-c/commit/c7ff391) avoid race in setup_rx_timeout
* [964c3e6](https://github.com/microsoft/jacdac-c/commit/964c3e6) limit line breaking
* [8f8f5b9](https://github.com/microsoft/jacdac-c/commit/8f8f5b9) add jd_lstore_panic_*() functions
* [b805147](https://github.com/microsoft/jacdac-c/commit/b805147) add SD card CRC funs
* [0c5991c](https://github.com/microsoft/jacdac-c/commit/0c5991c) log tsagg in second log
* [d03cf21](https://github.com/microsoft/jacdac-c/commit/d03cf21) add second log file
* [3e26dda](https://github.com/microsoft/jacdac-c/commit/3e26dda) don't crash when lstore not inited

### microsoft/jacdac-stm32x0

* [7ea9e83](https://github.com/microsoft/jacdac-stm32x0/commit/7ea9e83) add SRST=1 option to Makefile to assert srst before attach
* [5a6ab15](https://github.com/microsoft/jacdac-stm32x0/commit/5a6ab15) renames for latest jd-c
* [40a7f87](https://github.com/microsoft/jacdac-stm32x0/commit/40a7f87) add info comment
* [59aeba4](https://github.com/microsoft/jacdac-stm32x0/commit/59aeba4) add missing pkg info
* [2cb94f7](https://github.com/microsoft/jacdac-stm32x0/commit/2cb94f7) simplify gpiod impl
* [e7c5055](https://github.com/microsoft/jacdac-stm32x0/commit/e7c5055) start on gpiod impl of rpi bridge
* [c530106](https://github.com/microsoft/jacdac-stm32x0/commit/c530106) moving to gpiod
* [0a9014e](https://github.com/microsoft/jacdac-stm32x0/commit/0a9014e) more details on using J-Link and ST-LINK
* [e334761](https://github.com/microsoft/jacdac-stm32x0/commit/e334761) avoid warning
* [4b0c3fb](https://github.com/microsoft/jacdac-stm32x0/commit/4b0c3fb) update SPI bridge to latest jd-c
* [ad5b0e7](https://github.com/microsoft/jacdac-stm32x0/commit/ad5b0e7) fix warnings
* [266b626](https://github.com/microsoft/jacdac-stm32x0/commit/266b626) update windows com instructions
* [1139620](https://github.com/microsoft/jacdac-stm32x0/commit/1139620) setup pin as output in pin_pulse()

## Version 0.20.1

### microsoft/jacdac-msr-modules

* [b02b515](https://github.com/microsoft/jacdac-msr-modules/commit/b02b515) update submodules (fix build)
* [3438141](https://github.com/microsoft/jacdac-msr-modules/commit/3438141) add new pressure and PIR modules
* [0ec1c75](https://github.com/microsoft/jacdac-msr-modules/commit/0ec1c75) set default branch
* [7616e09](https://github.com/microsoft/jacdac-msr-modules/commit/7616e09) readme clarifications; update stm submod

### microsoft/jacdac-c

* [93ac655](https://github.com/microsoft/jacdac-c/commit/93ac655) fix warnings
* [b3ab396](https://github.com/microsoft/jacdac-c/commit/b3ab396) add dps310 pressure sensor
* [5c5dced](https://github.com/microsoft/jacdac-c/commit/5c5dced) add tracing
* [2042587](https://github.com/microsoft/jacdac-c/commit/2042587) run empty program if nothing deployed
* [27681f9](https://github.com/microsoft/jacdac-c/commit/27681f9) add jd_lstore_is_enabled()
* [30d37ff](https://github.com/microsoft/jacdac-c/commit/30d37ff) add rolemgr_serialize_role
* [a82f8bd](https://github.com/microsoft/jacdac-c/commit/a82f8bd) fixes
* [044cf53](https://github.com/microsoft/jacdac-c/commit/044cf53) lstor: user APIs
* [6d46f6c](https://github.com/microsoft/jacdac-c/commit/6d46f6c) lstor: rename; start on block struct
* [606b6a7](https://github.com/microsoft/jacdac-c/commit/606b6a7) add crc32
* [ea78e7e](https://github.com/microsoft/jacdac-c/commit/ea78e7e) remove unused files
* [7c3f7e1](https://github.com/microsoft/jacdac-c/commit/7c3f7e1) start logstore
* [38ce693](https://github.com/microsoft/jacdac-c/commit/38ce693) add JD_CHK() macro
* [ae4fac2](https://github.com/microsoft/jacdac-c/commit/ae4fac2) import FatFs module http://elm-chan.org/fsw/ff/00index_e.html
* [33ddb4e](https://github.com/microsoft/jacdac-c/commit/33ddb4e) fix crash

### microsoft/jacdac-stm32x0

* [e7df1f6](https://github.com/microsoft/jacdac-stm32x0/commit/e7df1f6) compile storage/* in client profile
* [1039a47](https://github.com/microsoft/jacdac-stm32x0/commit/1039a47) Add info on manual deploy
* [8b0043c](https://github.com/microsoft/jacdac-stm32x0/commit/8b0043c) button is new example; add 'update-submodules' target
* [7c81f16](https://github.com/microsoft/jacdac-stm32x0/commit/7c81f16) emphasize on not
* [bd6ec51](https://github.com/microsoft/jacdac-stm32x0/commit/bd6ec51) instructions on submodules
* [b583ac6](https://github.com/microsoft/jacdac-stm32x0/commit/b583ac6) update build for new template repo
* [00d0044](https://github.com/microsoft/jacdac-stm32x0/commit/00d0044) RTC drift seems to larger sometimes

## Version 0.20.0

### microsoft/jacdac-msr-modules

* [43f98d0](https://github.com/microsoft/jacdac-msr-modules/commit/43f98d0) temp fix
* [9d70fa5](https://github.com/microsoft/jacdac-msr-modules/commit/9d70fa5) define jacs program size not to overflow into program
* [31a46b5](https://github.com/microsoft/jacdac-msr-modules/commit/31a46b5) make the jacscript stuff compile
* [52a6cc4](https://github.com/microsoft/jacdac-msr-modules/commit/52a6cc4) disable temp on 204
* [fa2c76c](https://github.com/microsoft/jacdac-msr-modules/commit/fa2c76c) add env 204 board
* [078a687](https://github.com/microsoft/jacdac-msr-modules/commit/078a687) use new sgp30 drivers
* [4d9069d](https://github.com/microsoft/jacdac-msr-modules/commit/4d9069d) [skip ci] firmware v0.19.7 built

### microsoft/jacdac-c

* [d435f40](https://github.com/microsoft/jacdac-c/commit/d435f40) fix warnings
* [6c8ff87](https://github.com/microsoft/jacdac-c/commit/6c8ff87) blink green on startup
* [2b1306f](https://github.com/microsoft/jacdac-c/commit/2b1306f) move proto
* [f1ce037](https://github.com/microsoft/jacdac-c/commit/f1ce037) fix warnings
* [2a56b1e](https://github.com/microsoft/jacdac-c/commit/2a56b1e) bugfix
* [c70b2a8](https://github.com/microsoft/jacdac-c/commit/c70b2a8) send error with readings
* [638af7d](https://github.com/microsoft/jacdac-c/commit/638af7d) use custom sgp30 driver
* [3cc9609](https://github.com/microsoft/jacdac-c/commit/3cc9609) fix glow-end
* [615f960](https://github.com/microsoft/jacdac-c/commit/615f960) add SCD40 driver
* [29d84ba](https://github.com/microsoft/jacdac-c/commit/29d84ba) refactor jd_sgp_crc8; add util macros for sensors

### microsoft/jacdac-stm32x0

* [ac502ed](https://github.com/microsoft/jacdac-stm32x0/commit/ac502ed) fix temp sensor on G030
* [efe56b9](https://github.com/microsoft/jacdac-stm32x0/commit/efe56b9) refactor common stm32.mk
* [6a749e5](https://github.com/microsoft/jacdac-stm32x0/commit/6a749e5) fix warnings
* [c02e36c](https://github.com/microsoft/jacdac-stm32x0/commit/c02e36c) add FLASH_SETTINGS_SIZE config
* [97d32b1](https://github.com/microsoft/jacdac-stm32x0/commit/97d32b1) adapt to jd-c changes

## Version 0.19.7

### microsoft/jacdac-msr-modules

* [973084a](https://github.com/microsoft/jacdac-msr-modules/commit/973084a) add light 205 module adapt to changes in jd-c
* [046c593](https://github.com/microsoft/jacdac-msr-modules/commit/046c593) [skip ci] firmware v0.19.6 built

### microsoft/jacdac-c

* [3f5ef0f](https://github.com/microsoft/jacdac-c/commit/3f5ef0f) fix build errors
* [2d768a8](https://github.com/microsoft/jacdac-c/commit/2d768a8) assert not valid on stm
* [4c73b36](https://github.com/microsoft/jacdac-c/commit/4c73b36) remove logging; update jd-spec
* [ff2115a](https://github.com/microsoft/jacdac-c/commit/ff2115a) bugfix
* [950c0ae](https://github.com/microsoft/jacdac-c/commit/950c0ae) add more asserts
* [de668f4](https://github.com/microsoft/jacdac-c/commit/de668f4) fixes for cloud upload
* [a329475](https://github.com/microsoft/jacdac-c/commit/a329475) improve glow
* [663bc3d](https://github.com/microsoft/jacdac-c/commit/663bc3d) variable delays in error blinks
* [b935d43](https://github.com/microsoft/jacdac-c/commit/b935d43) more blinking
* [402d74b](https://github.com/microsoft/jacdac-c/commit/402d74b) remove dead code; add comment
* [27caa6d](https://github.com/microsoft/jacdac-c/commit/27caa6d) signal line and ovf errors with blinks
* [d86e37d](https://github.com/microsoft/jacdac-c/commit/d86e37d) use jd_glow() in power service
* [03b3985](https://github.com/microsoft/jacdac-c/commit/03b3985) split jd_status() into jd_blink() and jd_glow()
* [7c73509](https://github.com/microsoft/jacdac-c/commit/7c73509) sort self-device first
* [5459ba6](https://github.com/microsoft/jacdac-c/commit/5459ba6) add flash_sync() api
* [af5decd](https://github.com/microsoft/jacdac-c/commit/af5decd) Add extcloud
* [1befd14](https://github.com/microsoft/jacdac-c/commit/1befd14) implement JD_JACSCRIPT_CLOUD_CMD_UPLOAD_BIN
* [8f41db1](https://github.com/microsoft/jacdac-c/commit/8f41db1) restart fast upload on clear in tsagg
* [2903e48](https://github.com/microsoft/jacdac-c/commit/2903e48) encapsulate aggbuffer state
* [1d476a0](https://github.com/microsoft/jacdac-c/commit/1d476a0) implement aggregator spec changes
* [f62d5ea](https://github.com/microsoft/jacdac-c/commit/f62d5ea) add jd_should_sample_ms()
* [b1e9a2a](https://github.com/microsoft/jacdac-c/commit/b1e9a2a) log shortid on upload
* [d61b6b4](https://github.com/microsoft/jacdac-c/commit/d61b6b4) add script to describe repo version
* [8c0a277](https://github.com/microsoft/jacdac-c/commit/8c0a277) report wifi and uptime in tsagg
* [275a8d5](https://github.com/microsoft/jacdac-c/commit/275a8d5) add format warnings
* [8cb803f](https://github.com/microsoft/jacdac-c/commit/8cb803f) jacs cloud upload fixes
* [5714eb3](https://github.com/microsoft/jacdac-c/commit/5714eb3) add now_ms
* [ae8541e](https://github.com/microsoft/jacdac-c/commit/ae8541e) fix default window
* [cf30fc7](https://github.com/microsoft/jacdac-c/commit/cf30fc7) add timeseries aggregator impl
* [5256173](https://github.com/microsoft/jacdac-c/commit/5256173) bugfixes
* [0ae7d04](https://github.com/microsoft/jacdac-c/commit/0ae7d04) add string utils
* [7573317](https://github.com/microsoft/jacdac-c/commit/7573317) add jd_role_by_service()
* [12b007a](https://github.com/microsoft/jacdac-c/commit/12b007a) emit role change events upon free
* [1b77db3](https://github.com/microsoft/jacdac-c/commit/1b77db3) add allocating string utils
* [3321e51](https://github.com/microsoft/jacdac-c/commit/3321e51) add jacs_read_number()
* [7f33fae](https://github.com/microsoft/jacdac-c/commit/7f33fae) subscribe mechanism for client events
* [2d490b7](https://github.com/microsoft/jacdac-c/commit/2d490b7) make jd_vsprintf("%s", NULL) not crash
* [78c23bc](https://github.com/microsoft/jacdac-c/commit/78c23bc) fix build; update spec
* [000405d](https://github.com/microsoft/jacdac-c/commit/000405d) add jacscript cloud impl
* [2085572](https://github.com/microsoft/jacdac-c/commit/2085572) move double-printing from jacs to util
* [9557fff](https://github.com/microsoft/jacdac-c/commit/9557fff) add JD_SEND_FRAME_SIZE
* [188b3fe](https://github.com/microsoft/jacdac-c/commit/188b3fe) protect against race in setup_rx_timeout (visible on esp32)
* [01ca025](https://github.com/microsoft/jacdac-c/commit/01ca025) improve jd_vsprintf() overflows
* [c3d6e31](https://github.com/microsoft/jacdac-c/commit/c3d6e31) AFAIK dummy/* is not used anywhere and it's also out of date
* [c76fdf7](https://github.com/microsoft/jacdac-c/commit/c76fdf7) add jd_respond_empty() and jd_respond_string()
* [a2b9ccf](https://github.com/microsoft/jacdac-c/commit/a2b9ccf) temporary check
* [e2b1767](https://github.com/microsoft/jacdac-c/commit/e2b1767) move short id to jd_util; add jd_log_packet()
* [aa7692e](https://github.com/microsoft/jacdac-c/commit/aa7692e) fix log msg
* [939b74b](https://github.com/microsoft/jacdac-c/commit/939b74b) configurable fault detection delay
* [b187a9a](https://github.com/microsoft/jacdac-c/commit/b187a9a) use jd_send_frame() if possible
* [5477fc1](https://github.com/microsoft/jacdac-c/commit/5477fc1) re-work loopback packets
* [c6e7397](https://github.com/microsoft/jacdac-c/commit/c6e7397) fix handling of 'allowed' register in power
* [a9d8fbf](https://github.com/microsoft/jacdac-c/commit/a9d8fbf) mark client in announce
* [d5d96c1](https://github.com/microsoft/jacdac-c/commit/d5d96c1) fix role re-binding fixes https://github.com/microsoft/jacdac/issues/998
* [9768c91](https://github.com/microsoft/jacdac-c/commit/9768c91) bugfix in txQ
* [5b000bd](https://github.com/microsoft/jacdac-c/commit/5b000bd) improve logging
* [b5245fe](https://github.com/microsoft/jacdac-c/commit/b5245fe) add support for USB bridge
* [b6814d2](https://github.com/microsoft/jacdac-c/commit/b6814d2) add workaround for simple pwm_*
* [5a0f0b2](https://github.com/microsoft/jacdac-c/commit/5a0f0b2) update specs
* [903ac40](https://github.com/microsoft/jacdac-c/commit/903ac40) bugfix

### microsoft/jacdac-msr-modules

* [a7432b1](https://github.com/microsoft/jacdac-msr-modules/commit/a7432b1) tag as ec30
* [8985e3d](https://github.com/microsoft/jacdac-msr-modules/commit/8985e3d) update triple slider shape
* [6cd94cc](https://github.com/microsoft/jacdac-msr-modules/commit/6cd94cc) added sizes for triple sliders
* [5ec1dbc](https://github.com/microsoft/jacdac-msr-modules/commit/5ec1dbc) Apply automatic changes
* [dd2f032](https://github.com/microsoft/jacdac-msr-modules/commit/dd2f032) speify shapres for various modules
* [1fdf059](https://github.com/microsoft/jacdac-msr-modules/commit/1fdf059) add upload_bin cmd in jacscloud
* [bd1da76](https://github.com/microsoft/jacdac-msr-modules/commit/bd1da76) add well know type
* [34daf71](https://github.com/microsoft/jacdac-msr-modules/commit/34daf71) adding form factors
* [1aa13bf](https://github.com/microsoft/jacdac-msr-modules/commit/1aa13bf) support for multiple storeLinks
* [c575044](https://github.com/microsoft/jacdac-msr-modules/commit/c575044) added edgepassive
* [993d6ae](https://github.com/microsoft/jacdac-msr-modules/commit/993d6ae) drop aggregation modes; add config for auto-upload
* [868ba35](https://github.com/microsoft/jacdac-msr-modules/commit/868ba35) button Volatile pressed ([#1036](https://github.com/microsoft/jacdac-msr-modules/pull/1036))
* [94678e0](https://github.com/microsoft/jacdac-msr-modules/commit/94678e0) typo in company name
* [68fc47c](https://github.com/microsoft/jacdac-msr-modules/commit/68fc47c) make timeseries agg more configurable
* [c054fe6](https://github.com/microsoft/jacdac-msr-modules/commit/c054fe6) Lowhighconsumerprovider ([#1035](https://github.com/microsoft/jacdac-msr-modules/pull/1035))
* [5c7d954](https://github.com/microsoft/jacdac-msr-modules/commit/5c7d954) more regular format for spec pack
* [61daef7](https://github.com/microsoft/jacdac-msr-modules/commit/61daef7) don't rely on bash
* [9cbd5d5](https://github.com/microsoft/jacdac-msr-modules/commit/9cbd5d5) add logging
* [46ad19f](https://github.com/microsoft/jacdac-msr-modules/commit/46ad19f) Merge branch 'main' of https://github.com/microsoft/jacdac
* [5968d61](https://github.com/microsoft/jacdac-msr-modules/commit/5968d61) update OOB
* [660bc7f](https://github.com/microsoft/jacdac-msr-modules/commit/660bc7f) generate jd_spec_pack.c
* [3ae44d1](https://github.com/microsoft/jacdac-msr-modules/commit/3ae44d1) Apply automatic changes
* [71a2801](https://github.com/microsoft/jacdac-msr-modules/commit/71a2801) Merge branch 'main' of https://github.com/microsoft/jacdac
* [4f3893c](https://github.com/microsoft/jacdac-msr-modules/commit/4f3893c) replace oob by jukebox
* [e3ab88d](https://github.com/microsoft/jacdac-msr-modules/commit/e3ab88d) add draft timeseries aggregator service
* [967436e](https://github.com/microsoft/jacdac-msr-modules/commit/967436e) emit float/double in C
* [93b5282](https://github.com/microsoft/jacdac-msr-modules/commit/93b5282) restrict more commands/services add jacscript tags
* [a3b6aeb](https://github.com/microsoft/jacdac-msr-modules/commit/a3b6aeb) updated makecode targetconfig.json generation
* [ac57dae](https://github.com/microsoft/jacdac-msr-modules/commit/ac57dae) updated makecode gen
* [599b3ad](https://github.com/microsoft/jacdac-msr-modules/commit/599b3ad) don't generte blocks for low-level registers
* [53566b7](https://github.com/microsoft/jacdac-msr-modules/commit/53566b7) embed units in generated makecode blocks
* [8b1960b](https://github.com/microsoft/jacdac-msr-modules/commit/8b1960b) Compress Images ([#1023](https://github.com/microsoft/jacdac-msr-modules/pull/1023))
* [feff2c3](https://github.com/microsoft/jacdac-msr-modules/commit/feff2c3) updated metadata to support kits
* [0a0cd68](https://github.com/microsoft/jacdac-msr-modules/commit/0a0cd68) remove jacscript cloud client method event
* [a8e99b7](https://github.com/microsoft/jacdac-msr-modules/commit/a8e99b7) add 'restricted' to jacs cloud commands
* [dafeaac](https://github.com/microsoft/jacdac-msr-modules/commit/dafeaac) use secondary unit to specialize buzzer frequency
* [a0bcf22](https://github.com/microsoft/jacdac-msr-modules/commit/a0bcf22) Apply automatic changes
* [df05c95](https://github.com/microsoft/jacdac-msr-modules/commit/df05c95) remove twins ([#1013](https://github.com/microsoft/jacdac-msr-modules/pull/1013))
* [c0759fb](https://github.com/microsoft/jacdac-msr-modules/commit/c0759fb) Apply automatic changes
* [70c676c](https://github.com/microsoft/jacdac-msr-modules/commit/70c676c) Device: Relay Breakout Board ([#1012](https://github.com/microsoft/jacdac-msr-modules/pull/1012))
* [4951b0d](https://github.com/microsoft/jacdac-msr-modules/commit/4951b0d) Device: gamer:bit ([#1011](https://github.com/microsoft/jacdac-msr-modules/pull/1011))
* [febb0d7](https://github.com/microsoft/jacdac-msr-modules/commit/febb0d7) refactor connector type
* [d63bab8](https://github.com/microsoft/jacdac-msr-modules/commit/d63bab8) updated device specs
* [6bded0c](https://github.com/microsoft/jacdac-msr-modules/commit/6bded0c) added brain
* [3a28128](https://github.com/microsoft/jacdac-msr-modules/commit/3a28128) updated itnybit connector
* [66a5dcf](https://github.com/microsoft/jacdac-msr-modules/commit/66a5dcf) Apply automatic changes
* [c7a1f10](https://github.com/microsoft/jacdac-msr-modules/commit/c7a1f10) Device: Tiny-Bit ([#1010](https://github.com/microsoft/jacdac-msr-modules/pull/1010))
* [dbc9bb7](https://github.com/microsoft/jacdac-msr-modules/commit/dbc9bb7) handle missing pxt
* [1c88085](https://github.com/microsoft/jacdac-msr-modules/commit/1c88085) generate targetconfig upgrade list
* [09c186c](https://github.com/microsoft/jacdac-msr-modules/commit/09c186c) updated spec info
* [6472250](https://github.com/microsoft/jacdac-msr-modules/commit/6472250) Apply automatic changes
* [a8a600e](https://github.com/microsoft/jacdac-msr-modules/commit/a8a600e) Service: Dual Motors ([#997](https://github.com/microsoft/jacdac-msr-modules/pull/997))
* [dd645a4](https://github.com/microsoft/jacdac-msr-modules/commit/dd645a4) updated kitronik hw
* [88f812e](https://github.com/microsoft/jacdac-msr-modules/commit/88f812e) Apply automatic changes
* [01f882f](https://github.com/microsoft/jacdac-msr-modules/commit/01f882f) Device: SERVO:LITE ([#996](https://github.com/microsoft/jacdac-msr-modules/pull/996))
* [5f4c360](https://github.com/microsoft/jacdac-msr-modules/commit/5f4c360) added hid-joystick firmware
* [82c8fba](https://github.com/microsoft/jacdac-msr-modules/commit/82c8fba) simplify sound level service
* [8a227f3](https://github.com/microsoft/jacdac-msr-modules/commit/8a227f3) Flatten all device folders
* [b3b5b9b](https://github.com/microsoft/jacdac-msr-modules/commit/b3b5b9b) adding connector info to devices
* [10c0d91](https://github.com/microsoft/jacdac-msr-modules/commit/10c0d91) updated devices
* [802ef8b](https://github.com/microsoft/jacdac-msr-modules/commit/802ef8b) Apply automatic changes
* [7c4d683](https://github.com/microsoft/jacdac-msr-modules/commit/7c4d683) Device: Microbit-LED ([#992](https://github.com/microsoft/jacdac-msr-modules/pull/992))
* [152bc5b](https://github.com/microsoft/jacdac-msr-modules/commit/152bc5b) Device: Game Zip 64 ([#991](https://github.com/microsoft/jacdac-msr-modules/pull/991))
* [e687e9b](https://github.com/microsoft/jacdac-msr-modules/commit/e687e9b) Device: ACCESS:bit ([#990](https://github.com/microsoft/jacdac-msr-modules/pull/990))
* [f3eac69](https://github.com/microsoft/jacdac-msr-modules/commit/f3eac69) Device: Kitronik STOP:bit ([#989](https://github.com/microsoft/jacdac-msr-modules/pull/989))
* [247e5e1](https://github.com/microsoft/jacdac-msr-modules/commit/247e5e1) Apply automatic changes
* [bc511ec](https://github.com/microsoft/jacdac-msr-modules/commit/bc511ec) remapping servo to 0..180
* [56bd8f4](https://github.com/microsoft/jacdac-msr-modules/commit/56bd8f4) added makecode repo info
* [9310411](https://github.com/microsoft/jacdac-msr-modules/commit/9310411) updated kitronik imåges
* [b5f7a31](https://github.com/microsoft/jacdac-msr-modules/commit/b5f7a31) Apply automatic changes
* [0a5a70f](https://github.com/microsoft/jacdac-msr-modules/commit/0a5a70f) Device: Kitronik Air Quality Board ([#980](https://github.com/microsoft/jacdac-msr-modules/pull/980))
* [f9c737d](https://github.com/microsoft/jacdac-msr-modules/commit/f9c737d) Merge branches 'main' and 'main' of https://github.com/microsoft/jacdac
* [31c9b87](https://github.com/microsoft/jacdac-msr-modules/commit/31c9b87) updated device list
* [ca64caf](https://github.com/microsoft/jacdac-msr-modules/commit/ca64caf) Apply automatic changes
* [0f0bd69](https://github.com/microsoft/jacdac-msr-modules/commit/0f0bd69) Device: JM Jacscript Star-Brain ([#979](https://github.com/microsoft/jacdac-msr-modules/pull/979))

### microsoft/jacdac-stm32x0

* [f87562e](https://github.com/microsoft/jacdac-stm32x0/commit/f87562e) use git-version.sh script

## Version 0.19.6

### microsoft/jacdac-msr-modules

* [93ce893](https://github.com/microsoft/jacdac-msr-modules/commit/93ce893) Merge branch 'main' of https://github.com/microsoft/jacdac-msr-modules
* [5472e8a](https://github.com/microsoft/jacdac-msr-modules/commit/5472e8a) invert hall sensor (according to spec)
* [210d51b](https://github.com/microsoft/jacdac-msr-modules/commit/210d51b) [skip ci] firmware v0.19.5 built

## Version 0.19.5

### microsoft/jacdac-msr-modules

* [0648a3f](https://github.com/microsoft/jacdac-msr-modules/commit/0648a3f) update submodules
* [cc1f46d](https://github.com/microsoft/jacdac-msr-modules/commit/cc1f46d) use new magnetic service
* [032458c](https://github.com/microsoft/jacdac-msr-modules/commit/032458c) add star-brain
* [5397d51](https://github.com/microsoft/jacdac-msr-modules/commit/5397d51) Fix typo and update submods
* [6b089f7](https://github.com/microsoft/jacdac-msr-modules/commit/6b089f7) Merge pull request [#39](https://github.com/microsoft/jacdac-msr-modules/pull/39) from microsoft/captouch
* [8bb564f](https://github.com/microsoft/jacdac-msr-modules/commit/8bb564f) update jd-c
* [83ab302](https://github.com/microsoft/jacdac-msr-modules/commit/83ab302) rename board to match silk
* [2d4ffa2](https://github.com/microsoft/jacdac-msr-modules/commit/2d4ffa2) board has no JM marking
* [ffd665c](https://github.com/microsoft/jacdac-msr-modules/commit/ffd665c) Merge branch 'main' into captouch
* [cef9c2c](https://github.com/microsoft/jacdac-msr-modules/commit/cef9c2c) only use new Braille service
* [9c325f6](https://github.com/microsoft/jacdac-msr-modules/commit/9c325f6) add experimental braille module
* [84f9ac6](https://github.com/microsoft/jacdac-msr-modules/commit/84f9ac6) add new modules
* [5b2b057](https://github.com/microsoft/jacdac-msr-modules/commit/5b2b057) sprintf() functions moved
* [b6d5fa9](https://github.com/microsoft/jacdac-msr-modules/commit/b6d5fa9) make module 88 be client
* [54da58b](https://github.com/microsoft/jacdac-msr-modules/commit/54da58b) Merge pull request [#45](https://github.com/microsoft/jacdac-msr-modules/pull/45) from microsoft/win-patch
* [c982c3b](https://github.com/microsoft/jacdac-msr-modules/commit/c982c3b) move led-bar to new leddisplay service
* [aa3d761](https://github.com/microsoft/jacdac-msr-modules/commit/aa3d761) bump
* [7a9f75c](https://github.com/microsoft/jacdac-msr-modules/commit/7a9f75c) bump
* [3130f81](https://github.com/microsoft/jacdac-msr-modules/commit/3130f81) bump
* [621f675](https://github.com/microsoft/jacdac-msr-modules/commit/621f675) bump
* [75eb6fc](https://github.com/microsoft/jacdac-msr-modules/commit/75eb6fc) bump
* [f265518](https://github.com/microsoft/jacdac-msr-modules/commit/f265518) fixup windows build from gitbash
* [b7496ed](https://github.com/microsoft/jacdac-msr-modules/commit/b7496ed) Merge pull request [#43](https://github.com/microsoft/jacdac-msr-modules/pull/43) from microsoft/jm-module-tester
* [cb34e6c](https://github.com/microsoft/jacdac-msr-modules/commit/cb34e6c) update relay params
* [5db06ad](https://github.com/microsoft/jacdac-msr-modules/commit/5db06ad) Merge branch 'main' of https://github.com/microsoft/jacdac-msr-modules into jm-module-tester
* [b159f53](https://github.com/microsoft/jacdac-msr-modules/commit/b159f53) merge submodules
* [b70c9bc](https://github.com/microsoft/jacdac-msr-modules/commit/b70c9bc) Merge pull request [#44](https://github.com/microsoft/jacdac-msr-modules/pull/44) from microsoft/servo-dual-2.0
* [32e915d](https://github.com/microsoft/jacdac-msr-modules/commit/32e915d) fix struct field naming
* [b141a01](https://github.com/microsoft/jacdac-msr-modules/commit/b141a01) initially_active -> initial_state
* [47cf907](https://github.com/microsoft/jacdac-msr-modules/commit/47cf907) Merge branch 'main' of https://github.com/microsoft/jacdac-msr-modules into servo-dual-2.0
* [d6d70ac](https://github.com/microsoft/jacdac-msr-modules/commit/d6d70ac) bump jd-c
* [c6f6295](https://github.com/microsoft/jacdac-msr-modules/commit/c6f6295) update relay iface and use it to toggle high power
* [ab5975c](https://github.com/microsoft/jacdac-msr-modules/commit/ab5975c) rgb ring: use display instead of strip
* [ac5f1f4](https://github.com/microsoft/jacdac-msr-modules/commit/ac5f1f4) format!
* [02552ee](https://github.com/microsoft/jacdac-msr-modules/commit/02552ee) use new units
* [d876da8](https://github.com/microsoft/jacdac-msr-modules/commit/d876da8) use mono led for status; expose rgb led service
* [e17b5f1](https://github.com/microsoft/jacdac-msr-modules/commit/e17b5f1) expose current measurement service
* [27789b0](https://github.com/microsoft/jacdac-msr-modules/commit/27789b0) analogmeasurement -> voltagemeasurement
* [430b483](https://github.com/microsoft/jacdac-msr-modules/commit/430b483) adopt analogue measurement service
* [ceae656](https://github.com/microsoft/jacdac-msr-modules/commit/ceae656) use analogmeasurement service
* [77c8c51](https://github.com/microsoft/jacdac-msr-modules/commit/77c8c51) WIP: ads1115 driver
* [0f6bbdd](https://github.com/microsoft/jacdac-msr-modules/commit/0f6bbdd) bump
* [6e07f28](https://github.com/microsoft/jacdac-msr-modules/commit/6e07f28) SPI_RX = 1
* [d186a8d](https://github.com/microsoft/jacdac-msr-modules/commit/d186a8d) Add now required SPI_RX 1 def
* [66adbfd](https://github.com/microsoft/jacdac-msr-modules/commit/66adbfd) PR feedback
* [00fbaa2](https://github.com/microsoft/jacdac-msr-modules/commit/00fbaa2) implement voltage mapping function
* [ba927d7](https://github.com/microsoft/jacdac-msr-modules/commit/ba927d7) Merge branch 'main' of https://github.com/microsoft/jacdac-msr-modules into jm-module-tester
* [37dc1b8](https://github.com/microsoft/jacdac-msr-modules/commit/37dc1b8) bump jacdac-c
* [97b77f4](https://github.com/microsoft/jacdac-msr-modules/commit/97b77f4) use power supply service
* [0eb2be3](https://github.com/microsoft/jacdac-msr-modules/commit/0eb2be3) add module-tester target
* [0aa1d48](https://github.com/microsoft/jacdac-msr-modules/commit/0aa1d48) set board id; update submodules
* [ae3b1bb](https://github.com/microsoft/jacdac-msr-modules/commit/ae3b1bb) Merge pull request [#42](https://github.com/microsoft/jacdac-msr-modules/pull/42) from microsoft/servo-dual-2.0
* [629c58e](https://github.com/microsoft/jacdac-msr-modules/commit/629c58e) add jacdac-servo-dual 2.0
* [7ad4336](https://github.com/microsoft/jacdac-msr-modules/commit/7ad4336) update dep
* [f0a0acb](https://github.com/microsoft/jacdac-msr-modules/commit/f0a0acb) Add custom lora-e5 board
* [32cb033](https://github.com/microsoft/jacdac-msr-modules/commit/32cb033) Merge pull request [#41](https://github.com/microsoft/jacdac-msr-modules/pull/41) from microsoft/lightbulb
* [73a7f25](https://github.com/microsoft/jacdac-msr-modules/commit/73a7f25) Merge branch 'main' of https://github.com/microsoft/jacdac-msr-modules into lightbulb
* [bdfd46d](https://github.com/microsoft/jacdac-msr-modules/commit/bdfd46d) PR feedback
* [4551f45](https://github.com/microsoft/jacdac-msr-modules/commit/4551f45) Merge pull request [#40](https://github.com/microsoft/jacdac-msr-modules/pull/40) from microsoft/compiler-fix
* [1f5ead9](https://github.com/microsoft/jacdac-msr-modules/commit/1f5ead9) Merge branch 'main' of https://github.com/microsoft/jacdac-msr-modules into compiler-fix
* [1f01364](https://github.com/microsoft/jacdac-msr-modules/commit/1f01364) resolve submodule conflicts
* [fe3353e](https://github.com/microsoft/jacdac-msr-modules/commit/fe3353e) build check
* [9aa1b74](https://github.com/microsoft/jacdac-msr-modules/commit/9aa1b74) [skip ci] firmware v0.19.4 built

### microsoft/jacdac-c

* [b807d5c](https://github.com/microsoft/jacdac-c/commit/b807d5c) LED display -> LED service rename
* [b2490cd](https://github.com/microsoft/jacdac-c/commit/b2490cd) fix warnings
* [a512193](https://github.com/microsoft/jacdac-c/commit/a512193) format
* [5de9a78](https://github.com/microsoft/jacdac-c/commit/5de9a78) pipe fixes; add jd_device_lookup_service()
* [119bb31](https://github.com/microsoft/jacdac-c/commit/119bb31) implement magnetic field level service
* [f5d32f2](https://github.com/microsoft/jacdac-c/commit/f5d32f2) clean up printf() warnings
* [9d440de](https://github.com/microsoft/jacdac-c/commit/9d440de) update specs
* [2b6bcc7](https://github.com/microsoft/jacdac-c/commit/2b6bcc7) jacs: improve runtime verifiaction
* [af31e9d](https://github.com/microsoft/jacdac-c/commit/af31e9d) fix warning
* [39e2487](https://github.com/microsoft/jacdac-c/commit/39e2487) add arbitrary static buffers
* [9d7b7ba](https://github.com/microsoft/jacdac-c/commit/9d7b7ba) move buffer handling to a separate file
* [928c1af](https://github.com/microsoft/jacdac-c/commit/928c1af) WIP: add dynamic parameter register setting
* [6df6220](https://github.com/microsoft/jacdac-c/commit/6df6220) verify float formats
* [df8e27f](https://github.com/microsoft/jacdac-c/commit/df8e27f) add idiv and imul
* [2690f8d](https://github.com/microsoft/jacdac-c/commit/2690f8d) avoid div0
* [46973aa](https://github.com/microsoft/jacdac-c/commit/46973aa) print out stacktrace on panic
* [5f3fd48](https://github.com/microsoft/jacdac-c/commit/5f3fd48) tagging fixes
* [4cce415](https://github.com/microsoft/jacdac-c/commit/4cce415) split out math ops
* [fbe0703](https://github.com/microsoft/jacdac-c/commit/fbe0703) implement nan-boxing
* [5e0553b](https://github.com/microsoft/jacdac-c/commit/5e0553b) add shifts
* [524c0f9](https://github.com/microsoft/jacdac-c/commit/524c0f9) let __LAST be last
* [196bf45](https://github.com/microsoft/jacdac-c/commit/196bf45) new encodings and operators
* [9697d7d](https://github.com/microsoft/jacdac-c/commit/9697d7d) remove unnecessary #include
* [aaa4374](https://github.com/microsoft/jacdac-c/commit/aaa4374) use service_handle_string_register()
* [cfea08b](https://github.com/microsoft/jacdac-c/commit/cfea08b) Add service_handle_string_register()
* [c3b0dd6](https://github.com/microsoft/jacdac-c/commit/c3b0dd6) fix DC services
* [4f70c7e](https://github.com/microsoft/jacdac-c/commit/4f70c7e) don't drop packets while waiting for ADC input; limit logging
* [d12c806](https://github.com/microsoft/jacdac-c/commit/d12c806) minor cap touch fixes
* [4431b2d](https://github.com/microsoft/jacdac-c/commit/4431b2d) Merge pull request [#34](https://github.com/microsoft/jacdac-c/pull/34) from microsoft/captouch
* [2c591f8](https://github.com/microsoft/jacdac-c/commit/2c591f8) instrument captouch for logging
* [1d5ec9d](https://github.com/microsoft/jacdac-c/commit/1d5ec9d) use new cap-touch interface; don't limit number of touches
* [4654b4e](https://github.com/microsoft/jacdac-c/commit/4654b4e) format
* [65ac875](https://github.com/microsoft/jacdac-c/commit/65ac875) merge main
* [1746624](https://github.com/microsoft/jacdac-c/commit/1746624) remove legacy Braille services
* [adf1fb3](https://github.com/microsoft/jacdac-c/commit/adf1fb3) add new Braille service
* [0f99786](https://github.com/microsoft/jacdac-c/commit/0f99786) map pixels correctly
* [6a22868](https://github.com/microsoft/jacdac-c/commit/6a22868) working on braille
* [7fee23a](https://github.com/microsoft/jacdac-c/commit/7fee23a) add simplified braille driver
* [5ab0d9b](https://github.com/microsoft/jacdac-c/commit/5ab0d9b) add driver for daisy-chained NCV7726B
* [20b1def](https://github.com/microsoft/jacdac-c/commit/20b1def) fix warning
* [ae50090](https://github.com/microsoft/jacdac-c/commit/ae50090) buzzer fixes
* [edb1a2a](https://github.com/microsoft/jacdac-c/commit/edb1a2a) adapt jd_vsprintf() to 64 bit
* [bd112a3](https://github.com/microsoft/jacdac-c/commit/bd112a3) move *sprintf functions from jacdac-stm32x0
* [a3cb1ae](https://github.com/microsoft/jacdac-c/commit/a3cb1ae) jacs: fix role waiting bug
* [9a030c9](https://github.com/microsoft/jacdac-c/commit/9a030c9) update spec submod
* [a110ae3](https://github.com/microsoft/jacdac-c/commit/a110ae3) limit logs
* [5185138](https://github.com/microsoft/jacdac-c/commit/5185138) return error codes from jacs verification
* [843c741](https://github.com/microsoft/jacdac-c/commit/843c741) fix pkt Q wakeup
* [384a727](https://github.com/microsoft/jacdac-c/commit/384a727) update spec
* [2ec1515](https://github.com/microsoft/jacdac-c/commit/2ec1515) simplify pkt queues
* [ff1092f](https://github.com/microsoft/jacdac-c/commit/ff1092f) fix zero-out of memory
* [c1335b8](https://github.com/microsoft/jacdac-c/commit/c1335b8) add JD_VERBOSE_ASSERT
* [983a571](https://github.com/microsoft/jacdac-c/commit/983a571) make tx_queue usable from jd-posix
* [fe120fa](https://github.com/microsoft/jacdac-c/commit/fe120fa) add utility functions
* [e1d58e5](https://github.com/microsoft/jacdac-c/commit/e1d58e5) make jd_process_everything_core() process all frames
* [8ad6d04](https://github.com/microsoft/jacdac-c/commit/8ad6d04) add jd_from_hex()
* [d5df0b5](https://github.com/microsoft/jacdac-c/commit/d5df0b5) remove dead code
* [7297c31](https://github.com/microsoft/jacdac-c/commit/7297c31) clang-format all files
* [ef9ecfb](https://github.com/microsoft/jacdac-c/commit/ef9ecfb) remove deps on stm32
* [b184a12](https://github.com/microsoft/jacdac-c/commit/b184a12) fix warning
* [4edea6b](https://github.com/microsoft/jacdac-c/commit/4edea6b) Merge pull request [#40](https://github.com/microsoft/jacdac-c/pull/40) from microsoft/powersupply
* [cda6f89](https://github.com/microsoft/jacdac-c/commit/cda6f89) Merge branch 'main' of https://github.com/microsoft/jacdac-c into powersupply
* [d9f5d26](https://github.com/microsoft/jacdac-c/commit/d9f5d26) Merge pull request [#42](https://github.com/microsoft/jacdac-c/pull/42) from microsoft/servo-dual-2.0
* [413430a](https://github.com/microsoft/jacdac-c/commit/413430a) Merge branch 'main' of https://github.com/microsoft/jacdac-c into servo-dual-2.0
* [7e4652b](https://github.com/microsoft/jacdac-c/commit/7e4652b) add ability to set initial state
* [932b766](https://github.com/microsoft/jacdac-c/commit/932b766) Merge pull request [#41](https://github.com/microsoft/jacdac-c/pull/41) from milador/pressure-sensor
* [d3cfe65](https://github.com/microsoft/jacdac-c/commit/d3cfe65) update interfaces to match new units
* [3b0edff](https://github.com/microsoft/jacdac-c/commit/3b0edff) bump jacdac
* [7316210](https://github.com/microsoft/jacdac-c/commit/7316210) moved __attribute__ before data type
* [e909470](https://github.com/microsoft/jacdac-c/commit/e909470) implement current measurement service
* [8f497da](https://github.com/microsoft/jacdac-c/commit/8f497da) analogmeasurement->voltagemeasurement
* [decae47](https://github.com/microsoft/jacdac-c/commit/decae47) bump specs
* [d2f5bbb](https://github.com/microsoft/jacdac-c/commit/d2f5bbb) analogmeasurement implementation
* [fbe0541](https://github.com/microsoft/jacdac-c/commit/fbe0541) bump specs
* [27f189f](https://github.com/microsoft/jacdac-c/commit/27f189f) Added unused attribute to unused functions
* [8de3f43](https://github.com/microsoft/jacdac-c/commit/8de3f43) Clang format applied
* [15a28f6](https://github.com/microsoft/jacdac-c/commit/15a28f6) Updated I2C Address & Register constant names
* [1af1a2a](https://github.com/microsoft/jacdac-c/commit/1af1a2a) Added LPS33HWTR Driver
* [dba6b83](https://github.com/microsoft/jacdac-c/commit/dba6b83) change event delays to what they were
* [11a65c1](https://github.com/microsoft/jacdac-c/commit/11a65c1) fix pkt-dropping bug
* [ecaf3a5](https://github.com/microsoft/jacdac-c/commit/ecaf3a5) use #defines for delays
* [039744c](https://github.com/microsoft/jacdac-c/commit/039744c) WIP: ads1115 driver
* [53e0919](https://github.com/microsoft/jacdac-c/commit/53e0919) fixup bad ifdef check
* [2ea096a](https://github.com/microsoft/jacdac-c/commit/2ea096a) more pr feedback
* [d46572e](https://github.com/microsoft/jacdac-c/commit/d46572e) if guard mcp41010
* [2a6676a](https://github.com/microsoft/jacdac-c/commit/2a6676a) PR feedback
* [d477d26](https://github.com/microsoft/jacdac-c/commit/d477d26) fixup driver code and implement mapping to potentiometer range
* [1e05415](https://github.com/microsoft/jacdac-c/commit/1e05415) Merge branch 'main' of https://github.com/microsoft/jacdac-c into powersupply
* [fc40b47](https://github.com/microsoft/jacdac-c/commit/fc40b47) add powersupply service implementation and mcp41010 driver
* [ac002f2](https://github.com/microsoft/jacdac-c/commit/ac002f2) bump jacdac for psu service defs
* [041a0fc](https://github.com/microsoft/jacdac-c/commit/041a0fc) avoid use-after-free in wake-role
* [c255fb4](https://github.com/microsoft/jacdac-c/commit/c255fb4) never overwrite a frame being processed
* [e821459](https://github.com/microsoft/jacdac-c/commit/e821459) rolemgr fixes
* [703f595](https://github.com/microsoft/jacdac-c/commit/703f595) buffer fix
* [a6fff7d](https://github.com/microsoft/jacdac-c/commit/a6fff7d) make jacs.logging reg work
* [9f39584](https://github.com/microsoft/jacdac-c/commit/9f39584) use odd jd_free() fill
* [04cb583](https://github.com/microsoft/jacdac-c/commit/04cb583) fix compilation; add logging
* [be9098f](https://github.com/microsoft/jacdac-c/commit/be9098f) fix buffer overrun
* [dbb02c2](https://github.com/microsoft/jacdac-c/commit/dbb02c2) fix log handling
* [dd6bc48](https://github.com/microsoft/jacdac-c/commit/dd6bc48) get rid of assert.h
* [869182e](https://github.com/microsoft/jacdac-c/commit/869182e) implement jd_send_frame()
* [c9cd8ea](https://github.com/microsoft/jacdac-c/commit/c9cd8ea) add queue from jacdac-stm32x0
* [b12f06c](https://github.com/microsoft/jacdac-c/commit/b12f06c) fix proto
* [ac453ec](https://github.com/microsoft/jacdac-c/commit/ac453ec) additional frame size checks
* [895aed4](https://github.com/microsoft/jacdac-c/commit/895aed4) implement jd_free()
* [63a4bc2](https://github.com/microsoft/jacdac-c/commit/63a4bc2) update spec
* [5d5f10c](https://github.com/microsoft/jacdac-c/commit/5d5f10c) memleak trace support
* [79250b9](https://github.com/microsoft/jacdac-c/commit/79250b9) bugfix
* [c0f2639](https://github.com/microsoft/jacdac-c/commit/c0f2639) fix gcc warnings
* [2a0eddb](https://github.com/microsoft/jacdac-c/commit/2a0eddb) bugfixes
* [42693a4](https://github.com/microsoft/jacdac-c/commit/42693a4) Implement jacscript manager service
* [dbf1dd9](https://github.com/microsoft/jacdac-c/commit/dbf1dd9) Merge branch 'main' into client2
* [9f2d408](https://github.com/microsoft/jacdac-c/commit/9f2d408) make flash interface generic
* [82ff7c7](https://github.com/microsoft/jacdac-c/commit/82ff7c7) merge main
* [64e815e](https://github.com/microsoft/jacdac-c/commit/64e815e) implement async log
* [2485860](https://github.com/microsoft/jacdac-c/commit/2485860) guard spiflash compilation
* [528352b](https://github.com/microsoft/jacdac-c/commit/528352b) implement SPI flash
* [b6161e1](https://github.com/microsoft/jacdac-c/commit/b6161e1) bugfix
* [9cbafae](https://github.com/microsoft/jacdac-c/commit/9cbafae) Merge pull request [#37](https://github.com/microsoft/jacdac-c/pull/37) from microsoft/lightbulb
* [f626e75](https://github.com/microsoft/jacdac-c/commit/f626e75) Merge branch 'main' of https://github.com/microsoft/jacdac-c into lightbulb
* [83cb746](https://github.com/microsoft/jacdac-c/commit/83cb746) PR feedback
* [0578231](https://github.com/microsoft/jacdac-c/commit/0578231) Merge pull request [#39](https://github.com/microsoft/jacdac-c/pull/39) from microsoft/compiler-fix
* [eb49871](https://github.com/microsoft/jacdac-c/commit/eb49871) Merge branch 'main' of https://github.com/microsoft/jacdac-c into compiler-fix
* [6ee6ce9](https://github.com/microsoft/jacdac-c/commit/6ee6ce9) add STATIC_ASSERT_EXT
* [f0dff58](https://github.com/microsoft/jacdac-c/commit/f0dff58) Merge pull request [#38](https://github.com/microsoft/jacdac-c/pull/38) from microsoft/client
* [d59f1fc](https://github.com/microsoft/jacdac-c/commit/d59f1fc) rolemgr pipes are done
* [196899e](https://github.com/microsoft/jacdac-c/commit/196899e) fix pointer size checking
* [51afcf9](https://github.com/microsoft/jacdac-c/commit/51afcf9) merge main
* [ef29c01](https://github.com/microsoft/jacdac-c/commit/ef29c01) update spec
* [b5d90e5](https://github.com/microsoft/jacdac-c/commit/b5d90e5) compile fix
* [129b30c](https://github.com/microsoft/jacdac-c/commit/129b30c) undo bad changes to ledstrip driver
* [d7619a4](https://github.com/microsoft/jacdac-c/commit/d7619a4) fixup further jd_inited compiler errors
* [71de193](https://github.com/microsoft/jacdac-c/commit/71de193) align driver to latest service defs [lightbulb.c]
* [eecc39f](https://github.com/microsoft/jacdac-c/commit/eecc39f) use jd_inited [gyroscope.c]
* [6c5035c](https://github.com/microsoft/jacdac-c/commit/6c5035c) Merge branch 'main' of https://github.com/microsoft/jacdac-c into lightbulb
* [e5d3d17](https://github.com/microsoft/jacdac-c/commit/e5d3d17) implement lightbulb service
* [cb095e7](https://github.com/microsoft/jacdac-c/commit/cb095e7) optimize rotary power consumption
* [5c4a290](https://github.com/microsoft/jacdac-c/commit/5c4a290) fix status code events
* [cb1c08d](https://github.com/microsoft/jacdac-c/commit/cb1c08d) fix clearning of leddisplay
* [f1b4335](https://github.com/microsoft/jacdac-c/commit/f1b4335) clean up packet payload storage
* [628fcf6](https://github.com/microsoft/jacdac-c/commit/628fcf6) log is now async
* [a7a91af](https://github.com/microsoft/jacdac-c/commit/a7a91af) re-try packet sending
* [96e4b01](https://github.com/microsoft/jacdac-c/commit/96e4b01) add simple input pipe (untested)
* [007d2d3](https://github.com/microsoft/jacdac-c/commit/007d2d3) add ifdef for 64 bit arch
* [d047c71](https://github.com/microsoft/jacdac-c/commit/d047c71) impl autobind flag
* [33784ee](https://github.com/microsoft/jacdac-c/commit/33784ee) fix crc
* [d9aa31c](https://github.com/microsoft/jacdac-c/commit/d9aa31c) implement rolemgr list with pipes
* [844f3b0](https://github.com/microsoft/jacdac-c/commit/844f3b0) draft impl of output pipe
* [f321be3](https://github.com/microsoft/jacdac-c/commit/f321be3) size fix
* [6b207b3](https://github.com/microsoft/jacdac-c/commit/6b207b3) update todo
* [fa541d9](https://github.com/microsoft/jacdac-c/commit/fa541d9) bugfixes
* [ee0f5f2](https://github.com/microsoft/jacdac-c/commit/ee0f5f2) fix reg refresh time
* [f4cee0c](https://github.com/microsoft/jacdac-c/commit/f4cee0c) nan fix
* [018b474](https://github.com/microsoft/jacdac-c/commit/018b474) fix shift_val
* [3b44c3e](https://github.com/microsoft/jacdac-c/commit/3b44c3e) fixes
* [4c3cd1b](https://github.com/microsoft/jacdac-c/commit/4c3cd1b) bugfix
* [4bf513c](https://github.com/microsoft/jacdac-c/commit/4bf513c) new rolemgr framework
* [641fce2](https://github.com/microsoft/jacdac-c/commit/641fce2) jd_alloc() already zeroes the memory
* [3a9e37d](https://github.com/microsoft/jacdac-c/commit/3a9e37d) start on role manager
* [5e6ba08](https://github.com/microsoft/jacdac-c/commit/5e6ba08) filter out repeated events
* [218697e](https://github.com/microsoft/jacdac-c/commit/218697e) now passes basic test
* [514e60e](https://github.com/microsoft/jacdac-c/commit/514e60e) top-level apis
* [f7e1ad2](https://github.com/microsoft/jacdac-c/commit/f7e1ad2) re-org headers
* [873a12a](https://github.com/microsoft/jacdac-c/commit/873a12a) more work on regcache and fibers
* [db859be](https://github.com/microsoft/jacdac-c/commit/db859be) rename/move stuff
* [4bf194f](https://github.com/microsoft/jacdac-c/commit/4bf194f) rename
* [e61ea22](https://github.com/microsoft/jacdac-c/commit/e61ea22) fiber prelude stuff
* [deff0d1](https://github.com/microsoft/jacdac-c/commit/deff0d1) implement regcache
* [a74152f](https://github.com/microsoft/jacdac-c/commit/a74152f) more code around fiber wakeup
* [f044127](https://github.com/microsoft/jacdac-c/commit/f044127) start work on reg cache
* [8061d60](https://github.com/microsoft/jacdac-c/commit/8061d60) more vm code
* [f383ede](https://github.com/microsoft/jacdac-c/commit/f383ede) add some execution code
* [3d4f61b](https://github.com/microsoft/jacdac-c/commit/3d4f61b) renumber errors
* [a950749](https://github.com/microsoft/jacdac-c/commit/a950749) copy verifier
* [7ea5292](https://github.com/microsoft/jacdac-c/commit/7ea5292) rename jdvm to jacscript
* [4272b97](https://github.com/microsoft/jacdac-c/commit/4272b97) update image format
* [7349f9c](https://github.com/microsoft/jacdac-c/commit/7349f9c) Merge branch 'main' of https://github.com/microsoft/jacdac-c into captouch
* [2b14bed](https://github.com/microsoft/jacdac-c/commit/2b14bed) remove debug
* [b14d387](https://github.com/microsoft/jacdac-c/commit/b14d387) add cap1298 implementation
* [4363af3](https://github.com/microsoft/jacdac-c/commit/4363af3) implement string formatting
* [98a6a98](https://github.com/microsoft/jacdac-c/commit/98a6a98) make it compile
* [878d0a4](https://github.com/microsoft/jacdac-c/commit/878d0a4) set/get buffer impl
* [2b20ff8](https://github.com/microsoft/jacdac-c/commit/2b20ff8) Starting Jacdac VM
* [75d950d](https://github.com/microsoft/jacdac-c/commit/75d950d) check for event handler nesting
* [85662e8](https://github.com/microsoft/jacdac-c/commit/85662e8) register fixes
* [abe6f9e](https://github.com/microsoft/jacdac-c/commit/abe6f9e) refactor
* [8b2fad5](https://github.com/microsoft/jacdac-c/commit/8b2fad5) Implement register queries
* [2542677](https://github.com/microsoft/jacdac-c/commit/2542677) Add utility macros
* [548e9d7](https://github.com/microsoft/jacdac-c/commit/548e9d7) Merge branch 'main' into client
* [a774962](https://github.com/microsoft/jacdac-c/commit/a774962) update naming
* [c4f8ed7](https://github.com/microsoft/jacdac-c/commit/c4f8ed7) Merge branch 'main' into client
* [bb78eb4](https://github.com/microsoft/jacdac-c/commit/bb78eb4) start on reg query
* [5e14b5e](https://github.com/microsoft/jacdac-c/commit/5e14b5e) add little client service framework
* [b1e48bc](https://github.com/microsoft/jacdac-c/commit/b1e48bc) Add basic framework for jd clients

### microsoft/jacdac-msr-modules

* [d351f81](https://github.com/microsoft/jacdac-msr-modules/commit/d351f81) Merge branch 'main' of https://github.com/microsoft/jacdac
* [97dabac](https://github.com/microsoft/jacdac-msr-modules/commit/97dabac) updated specs
* [b97daf4](https://github.com/microsoft/jacdac-msr-modules/commit/b97daf4) Apply automatic changes
* [9f54890](https://github.com/microsoft/jacdac-msr-modules/commit/9f54890) updated paths
* [6ec1447](https://github.com/microsoft/jacdac-msr-modules/commit/6ec1447) rename LED Display to LED, and LED to LED Single (deprecated) ([#977](https://github.com/microsoft/jacdac-msr-modules/pull/977))
* [f89ad91](https://github.com/microsoft/jacdac-msr-modules/commit/f89ad91) add Magnetic field level
* [8e32ae6](https://github.com/microsoft/jacdac-msr-modules/commit/8e32ae6) make light type optional
* [4b2c426](https://github.com/microsoft/jacdac-msr-modules/commit/4b2c426) updated generator
* [8592f14](https://github.com/microsoft/jacdac-msr-modules/commit/8592f14) updated motor constants
* [dc51968](https://github.com/microsoft/jacdac-msr-modules/commit/dc51968) updated motor spec
* [3ffaa65](https://github.com/microsoft/jacdac-msr-modules/commit/3ffaa65) generate const flags in makecode clients
* [b805144](https://github.com/microsoft/jacdac-msr-modules/commit/b805144) updated windspeed category
* [0483c83](https://github.com/microsoft/jacdac-msr-modules/commit/0483c83) updated hidjoystick
* [d7e8ffe](https://github.com/microsoft/jacdac-msr-modules/commit/d7e8ffe) Service: HID Joystick ([#972](https://github.com/microsoft/jacdac-msr-modules/pull/972))
* [b4b0dac](https://github.com/microsoft/jacdac-msr-modules/commit/b4b0dac) Compress Images ([#970](https://github.com/microsoft/jacdac-msr-modules/pull/970))
* [5809132](https://github.com/microsoft/jacdac-msr-modules/commit/5809132) Apply automatic changes
* [5c6fee6](https://github.com/microsoft/jacdac-msr-modules/commit/5c6fee6) Update power.md
* [4ebffb7](https://github.com/microsoft/jacdac-msr-modules/commit/4ebffb7) updated sound-level service
* [3d34a43](https://github.com/microsoft/jacdac-msr-modules/commit/3d34a43) generate strings in namespace
* [96d00da](https://github.com/microsoft/jacdac-msr-modules/commit/96d00da) generate namespaces for makecode
* [7337f0a](https://github.com/microsoft/jacdac-msr-modules/commit/7337f0a) use constants in generated clients
* [580e294](https://github.com/microsoft/jacdac-msr-modules/commit/580e294) generate string constants for makecode
* [78914a6](https://github.com/microsoft/jacdac-msr-modules/commit/78914a6) Apply automatic changes
* [a4ff168](https://github.com/microsoft/jacdac-msr-modules/commit/a4ff168) Device: JM Pressure Sensor v1.0 ([#936](https://github.com/microsoft/jacdac-msr-modules/pull/936))
* [2ecd8a2](https://github.com/microsoft/jacdac-msr-modules/commit/2ecd8a2) Merge branch 'main' of https://github.com/microsoft/jacdac
* [c349170](https://github.com/microsoft/jacdac-msr-modules/commit/c349170) updated 7-segment specs
* [85e3189](https://github.com/microsoft/jacdac-msr-modules/commit/85e3189) Apply automatic changes
* [8c2ba71](https://github.com/microsoft/jacdac-msr-modules/commit/8c2ba71) adjust seven segment service
* [22c1f14](https://github.com/microsoft/jacdac-msr-modules/commit/22c1f14) updated sevenseg
* [339a3fe](https://github.com/microsoft/jacdac-msr-modules/commit/339a3fe) add weight to fixed instances
* [a720cff](https://github.com/microsoft/jacdac-msr-modules/commit/a720cff) rename orange to yellow color
* [532532a](https://github.com/microsoft/jacdac-msr-modules/commit/532532a) removing set_text in sevenseg display
* [6d71741](https://github.com/microsoft/jacdac-msr-modules/commit/6d71741) clarify dot matrix bit representation
* [898ae74](https://github.com/microsoft/jacdac-msr-modules/commit/898ae74) recover multitouch service
* [6b4f22c](https://github.com/microsoft/jacdac-msr-modules/commit/6b4f22c) added makecode aqi
* [02ff163](https://github.com/microsoft/jacdac-msr-modules/commit/02ff163) Air quality index ([#961](https://github.com/microsoft/jacdac-msr-modules/pull/961))
* [2926015](https://github.com/microsoft/jacdac-msr-modules/commit/2926015) Merge branch 'main' of https://github.com/microsoft/jacdac
* [d0073c5](https://github.com/microsoft/jacdac-msr-modules/commit/d0073c5) updated specs
* [6ca25ad](https://github.com/microsoft/jacdac-msr-modules/commit/6ca25ad) Apply automatic changes
* [0e6fc15](https://github.com/microsoft/jacdac-msr-modules/commit/0e6fc15) Device: JM Base ([#965](https://github.com/microsoft/jacdac-msr-modules/pull/965))
* [bb2b7b7](https://github.com/microsoft/jacdac-msr-modules/commit/bb2b7b7) Device: JM Module Tester ([#964](https://github.com/microsoft/jacdac-msr-modules/pull/964))
* [7da13b9](https://github.com/microsoft/jacdac-msr-modules/commit/7da13b9) Device: JM-Buzzer ([#963](https://github.com/microsoft/jacdac-msr-modules/pull/963))
* [0fe6c16](https://github.com/microsoft/jacdac-msr-modules/commit/0fe6c16) Device: JM-Temperature/Humidity ([#962](https://github.com/microsoft/jacdac-msr-modules/pull/962))
* [709313b](https://github.com/microsoft/jacdac-msr-modules/commit/709313b) fixed onEvernt coe generation
* [20e2599](https://github.com/microsoft/jacdac-msr-modules/commit/20e2599) generate onEvent with enums for makecode clients ([#959](https://github.com/microsoft/jacdac-msr-modules/pull/959))
* [816cf16](https://github.com/microsoft/jacdac-msr-modules/commit/816cf16) fix makecode extensions
* [3d7ac2a](https://github.com/microsoft/jacdac-msr-modules/commit/3d7ac2a) clarify packet_count
* [eb7f742](https://github.com/microsoft/jacdac-msr-modules/commit/eb7f742) collect info about generated project
* [32e673c](https://github.com/microsoft/jacdac-msr-modules/commit/32e673c) updated specs
* [c9b63fc](https://github.com/microsoft/jacdac-msr-modules/commit/c9b63fc) Apply automatic changes
* [74f97c7](https://github.com/microsoft/jacdac-msr-modules/commit/74f97c7) support for water ph ([#957](https://github.com/microsoft/jacdac-msr-modules/pull/957))
* [3d4766c](https://github.com/microsoft/jacdac-msr-modules/commit/3d4766c) Apply automatic changes
* [c0da247](https://github.com/microsoft/jacdac-msr-modules/commit/c0da247) typo
* [54b050b](https://github.com/microsoft/jacdac-msr-modules/commit/54b050b) renaming barometer to air pressure
* [ca347a0](https://github.com/microsoft/jacdac-msr-modules/commit/ca347a0) prepend constants with CONST_
* [0d8590d](https://github.com/microsoft/jacdac-msr-modules/commit/0d8590d) prepend generated constants with service name
* [de3466d](https://github.com/microsoft/jacdac-msr-modules/commit/de3466d) Merge branch 'main' of https://github.com/microsoft/jacdac
* [6689708](https://github.com/microsoft/jacdac-msr-modules/commit/6689708) moving to node 16
* [a56c8f0](https://github.com/microsoft/jacdac-msr-modules/commit/a56c8f0) Apply automatic changes
* [3430c08](https://github.com/microsoft/jacdac-msr-modules/commit/3430c08) unify units and prepend dc to voltage/current measurement
* [bf9d76d](https://github.com/microsoft/jacdac-msr-modules/commit/bf9d76d) accidental services
* [f96e1e4](https://github.com/microsoft/jacdac-msr-modules/commit/f96e1e4) Apply automatic changes
* [64f5b51](https://github.com/microsoft/jacdac-msr-modules/commit/64f5b51) added files ([#932](https://github.com/microsoft/jacdac-msr-modules/pull/932))
* [83a2597](https://github.com/microsoft/jacdac-msr-modules/commit/83a2597) Apply automatic changes
* [bea7283](https://github.com/microsoft/jacdac-msr-modules/commit/bea7283) add current measurement spec
* [8fffed4](https://github.com/microsoft/jacdac-msr-modules/commit/8fffed4) Apply automatic changes
* [1fc53fc](https://github.com/microsoft/jacdac-msr-modules/commit/1fc53fc) analogmeasurement -> voltagemeasurement
* [da6fa60](https://github.com/microsoft/jacdac-msr-modules/commit/da6fa60) Apply automatic changes
* [8e5eacc](https://github.com/microsoft/jacdac-msr-modules/commit/8e5eacc) Service: Analog Measurement ([#941](https://github.com/microsoft/jacdac-msr-modules/pull/941))
* [3a38fa3](https://github.com/microsoft/jacdac-msr-modules/commit/3a38fa3) add device storeLink
* [43b65be](https://github.com/microsoft/jacdac-msr-modules/commit/43b65be) Apply automatic changes
* [d5c7e93](https://github.com/microsoft/jacdac-msr-modules/commit/d5c7e93) static -> fixed [powersupply.md]
* [8d1ee8d](https://github.com/microsoft/jacdac-msr-modules/commit/8d1ee8d) Apply automatic changes
* [9a154f2](https://github.com/microsoft/jacdac-msr-modules/commit/9a154f2) Service: Power supply ([#938](https://github.com/microsoft/jacdac-msr-modules/pull/938))
* [1e42012](https://github.com/microsoft/jacdac-msr-modules/commit/1e42012) better normalizing of design identifier
* [9f74f63](https://github.com/microsoft/jacdac-msr-modules/commit/9f74f63) Add more docs to bootloader and fix typo
* [39dd526](https://github.com/microsoft/jacdac-msr-modules/commit/39dd526) add jacscript manager service
* [fc85201](https://github.com/microsoft/jacdac-msr-modules/commit/fc85201) Apply automatic changes
* [06dc328](https://github.com/microsoft/jacdac-msr-modules/commit/06dc328) Device: JM-3-Slider ([#931](https://github.com/microsoft/jacdac-msr-modules/pull/931))
* [3981739](https://github.com/microsoft/jacdac-msr-modules/commit/3981739) Apply automatic changes
* [3838af6](https://github.com/microsoft/jacdac-msr-modules/commit/3838af6) Device: JM RGB-8 ([#930](https://github.com/microsoft/jacdac-msr-modules/pull/930))
* [7cd45af](https://github.com/microsoft/jacdac-msr-modules/commit/7cd45af) Device: JM Rotary + Btn ([#929](https://github.com/microsoft/jacdac-msr-modules/pull/929))
* [d633e61](https://github.com/microsoft/jacdac-msr-modules/commit/d633e61) Device: JM-Hall (magnetic switch) ([#928](https://github.com/microsoft/jacdac-msr-modules/pull/928))
* [5688be8](https://github.com/microsoft/jacdac-msr-modules/commit/5688be8) Device: JM-Matrix ([#927](https://github.com/microsoft/jacdac-msr-modules/pull/927))
* [86ddd6b](https://github.com/microsoft/jacdac-msr-modules/commit/86ddd6b) Apply automatic changes
* [d78983c](https://github.com/microsoft/jacdac-msr-modules/commit/d78983c) Update arcadegamepad.md
* [2c4f332](https://github.com/microsoft/jacdac-msr-modules/commit/2c4f332) remove auto-off-delay
* [71e4593](https://github.com/microsoft/jacdac-msr-modules/commit/71e4593) Update qr-url-device-map.csv
* [f43c249](https://github.com/microsoft/jacdac-msr-modules/commit/f43c249) make rssi a reading register
* [1781447](https://github.com/microsoft/jacdac-msr-modules/commit/1781447) Compress Images ([#909](https://github.com/microsoft/jacdac-msr-modules/pull/909))
* [16fd06a](https://github.com/microsoft/jacdac-msr-modules/commit/16fd06a) Fix naming in text

### microsoft/jacdac-stm32x0

* [d80b9bd](https://github.com/microsoft/jacdac-stm32x0/commit/d80b9bd) light type defines now in jd
* [8983054](https://github.com/microsoft/jacdac-stm32x0/commit/8983054) fix run-combined target; use it in flash loop
* [b486b97](https://github.com/microsoft/jacdac-stm32x0/commit/b486b97) remove unused random_seed from binaries
* [1f6b793](https://github.com/microsoft/jacdac-stm32x0/commit/1f6b793) fix signatures
* [f359c0b](https://github.com/microsoft/jacdac-stm32x0/commit/f359c0b) fix types of sspi_* buffers
* [26b850c](https://github.com/microsoft/jacdac-stm32x0/commit/26b850c) add printf() warnings to DMESG()
* [fd73d3e](https://github.com/microsoft/jacdac-stm32x0/commit/fd73d3e) move *sprintf functions to jacdac-c
* [11647a7](https://github.com/microsoft/jacdac-stm32x0/commit/11647a7) add comments
* [cd87d6e](https://github.com/microsoft/jacdac-stm32x0/commit/cd87d6e) Merge pull request [#45](https://github.com/microsoft/jacdac-stm32x0/pull/45) from microsoft/win-patch
* [10a2405](https://github.com/microsoft/jacdac-stm32x0/commit/10a2405) remove uname
* [9362d71](https://github.com/microsoft/jacdac-stm32x0/commit/9362d71) fixup windows CC comand
* [b089e03](https://github.com/microsoft/jacdac-stm32x0/commit/b089e03) us OS define instead
* [a323428](https://github.com/microsoft/jacdac-stm32x0/commit/a323428) remove trailing semicolon
* [af16e90](https://github.com/microsoft/jacdac-stm32x0/commit/af16e90) Merge branch 'main' of https://github.com/microsoft/jacdac-stm32x0 into win-patch
* [ebe927b](https://github.com/microsoft/jacdac-stm32x0/commit/ebe927b) Merge pull request [#46](https://github.com/microsoft/jacdac-stm32x0/pull/46) from microsoft/powersupply
* [af04f7f](https://github.com/microsoft/jacdac-stm32x0/commit/af04f7f) if on windows, pass GCC params via file.
* [092ed78](https://github.com/microsoft/jacdac-stm32x0/commit/092ed78) if guard PIN_SMISO
* [44bfa8e](https://github.com/microsoft/jacdac-stm32x0/commit/44bfa8e) increase panic blink time
* [676c251](https://github.com/microsoft/jacdac-stm32x0/commit/676c251) moving queue to jacdac-c
* [6fc4b0e](https://github.com/microsoft/jacdac-stm32x0/commit/6fc4b0e) disable spurious warning
* [5c64767](https://github.com/microsoft/jacdac-stm32x0/commit/5c64767) add page size define
* [7558a32](https://github.com/microsoft/jacdac-stm32x0/commit/7558a32) rename queue_* to jd_queue_*
* [9d74534](https://github.com/microsoft/jacdac-stm32x0/commit/9d74534) mark noreturn functions
* [924441a](https://github.com/microsoft/jacdac-stm32x0/commit/924441a) make flash interface generic
* [533251e](https://github.com/microsoft/jacdac-stm32x0/commit/533251e) improve sync-SPI
* [89bd6e5](https://github.com/microsoft/jacdac-stm32x0/commit/89bd6e5) better STM32WL support
* [f236dea](https://github.com/microsoft/jacdac-stm32x0/commit/f236dea) Merge pull request [#44](https://github.com/microsoft/jacdac-stm32x0/pull/44) from microsoft/compiler-fix
* [120eacc](https://github.com/microsoft/jacdac-stm32x0/commit/120eacc) Merge branch 'main' of https://github.com/microsoft/jacdac-stm32x0 into compiler-fix
* [39520f7](https://github.com/microsoft/jacdac-stm32x0/commit/39520f7) use STATIC_ASSERT_EXT
* [eff599e](https://github.com/microsoft/jacdac-stm32x0/commit/eff599e) script to compute values of R/C for module id

## Version 0.19.4

### microsoft/jacdac-msr-modules

* [cbb214d](https://github.com/microsoft/jacdac-msr-modules/commit/cbb214d) update deps

### microsoft/jacdac-c

* [b5d90e5](https://github.com/microsoft/jacdac-c/commit/b5d90e5) compile fix

## Version 0.19.3

### microsoft/jacdac-msr-modules

* [7b5aa4c](https://github.com/microsoft/jacdac-msr-modules/commit/7b5aa4c) update submodules
* [e1d40dd](https://github.com/microsoft/jacdac-msr-modules/commit/e1d40dd) Add 87 matrix display
* [68d85a8](https://github.com/microsoft/jacdac-msr-modules/commit/68d85a8) use leddisplay on 67; make sure PLL is enabled
* [697eb08](https://github.com/microsoft/jacdac-msr-modules/commit/697eb08) use switch service for all sensor
* [e9103fa](https://github.com/microsoft/jacdac-msr-modules/commit/e9103fa) update dep
* [d4ff0f4](https://github.com/microsoft/jacdac-msr-modules/commit/d4ff0f4) use new leddisplay in rgb83
* [ee631c1](https://github.com/microsoft/jacdac-msr-modules/commit/ee631c1) [skip ci] firmware v0.19.2 built

### microsoft/jacdac-c

* [cb095e7](https://github.com/microsoft/jacdac-c/commit/cb095e7) optimize rotary power consumption
* [5c4a290](https://github.com/microsoft/jacdac-c/commit/5c4a290) fix status code events
* [cb1c08d](https://github.com/microsoft/jacdac-c/commit/cb1c08d) fix clearning of leddisplay
* [9ad9708](https://github.com/microsoft/jacdac-c/commit/9ad9708) add dotmatrix service
* [b31cdaf](https://github.com/microsoft/jacdac-c/commit/b31cdaf) make the switch service more generic
* [18d19bd](https://github.com/microsoft/jacdac-c/commit/18d19bd) add switch service
* [910be29](https://github.com/microsoft/jacdac-c/commit/910be29) add new leddisplay service

### microsoft/jacdac-stm32x0

* [0f96480](https://github.com/microsoft/jacdac-stm32x0/commit/0f96480) fix disp_set_brigthness()
* [3d69952](https://github.com/microsoft/jacdac-stm32x0/commit/3d69952) fixup matrix display driver
* [59276a8](https://github.com/microsoft/jacdac-stm32x0/commit/59276a8) allow for system timer on TIM14
* [c7818f5](https://github.com/microsoft/jacdac-stm32x0/commit/c7818f5) force PLL for neopixel
* [3db8db1](https://github.com/microsoft/jacdac-stm32x0/commit/3db8db1) really, no need to sleep after flashing bl

## Version 0.19.2

### microsoft/jacdac-msr-modules

* [cce94f7](https://github.com/microsoft/jacdac-msr-modules/commit/cce94f7) update deps
* [dabaa4e](https://github.com/microsoft/jacdac-msr-modules/commit/dabaa4e) [skip ci] firmware v0.19.1 built

### microsoft/jacdac-c

* [81bf1f5](https://github.com/microsoft/jacdac-c/commit/81bf1f5) allow for optional hw encoder iface

### microsoft/jacdac-stm32x0

* [7dc4f96](https://github.com/microsoft/jacdac-stm32x0/commit/7dc4f96) add encoder interface for TIMx
* [d99c08e](https://github.com/microsoft/jacdac-stm32x0/commit/d99c08e) use constant names
* [e72bb9d](https://github.com/microsoft/jacdac-stm32x0/commit/e72bb9d) Simplify PWM setup (saves 600b of flash)

## Version 0.19.1

### microsoft/jacdac-msr-modules

* [cb9ebf9](https://github.com/microsoft/jacdac-msr-modules/commit/cb9ebf9) add v4.0 modules to drop
* [c3dd94a](https://github.com/microsoft/jacdac-msr-modules/commit/c3dd94a) add rotary encoder v4.0
* [e5b8b7c](https://github.com/microsoft/jacdac-msr-modules/commit/e5b8b7c) renames for latest jacdac spec
* [32dd46c](https://github.com/microsoft/jacdac-msr-modules/commit/32dd46c) add some new modules
* [cc796a3](https://github.com/microsoft/jacdac-msr-modules/commit/cc796a3) add sample lora-e5 mini target
* [ae9f131](https://github.com/microsoft/jacdac-msr-modules/commit/ae9f131) add new services
* [145aa71](https://github.com/microsoft/jacdac-msr-modules/commit/145aa71) remove accidental junk code
* [ab9f155](https://github.com/microsoft/jacdac-msr-modules/commit/ab9f155) Add pressure sensors module 72
* [36000b8](https://github.com/microsoft/jacdac-msr-modules/commit/36000b8) Merge branch 'main' of https://github.com/microsoft/jacdac-msr-modules
* [1d0a674](https://github.com/microsoft/jacdac-msr-modules/commit/1d0a674) Add PIR sensor
* [4917425](https://github.com/microsoft/jacdac-msr-modules/commit/4917425) Update README.md
* [b2518fe](https://github.com/microsoft/jacdac-msr-modules/commit/b2518fe) fix build
* [f06a3a0](https://github.com/microsoft/jacdac-msr-modules/commit/f06a3a0) Add thermocouple starfighter modules
* [95a8604](https://github.com/microsoft/jacdac-msr-modules/commit/95a8604) Blinking lights on RPI shield
* [51e409a](https://github.com/microsoft/jacdac-msr-modules/commit/51e409a) add 3.7 soil temp
* [ff1cee1](https://github.com/microsoft/jacdac-msr-modules/commit/ff1cee1) RPi bridge 3.7
* [363ad0d](https://github.com/microsoft/jacdac-msr-modules/commit/363ad0d) Add 2Key-69
* [0d0bdfb](https://github.com/microsoft/jacdac-msr-modules/commit/0d0bdfb) Use different cable for soil moisture
* [f6f92c9](https://github.com/microsoft/jacdac-msr-modules/commit/f6f92c9) add new v3.7 sensors
* [5800611](https://github.com/microsoft/jacdac-msr-modules/commit/5800611) Add led-ring and keyboard-button
* [74ab8bb](https://github.com/microsoft/jacdac-msr-modules/commit/74ab8bb) Add LTR 390 UV (65) module
* [1542d11](https://github.com/microsoft/jacdac-msr-modules/commit/1542d11) Add SHT30 module (64)
* [7a7e314](https://github.com/microsoft/jacdac-msr-modules/commit/7a7e314) experiments with new power service
* [680455c](https://github.com/microsoft/jacdac-msr-modules/commit/680455c) Add rpi spi bridge 3.5A
* [9d9fc06](https://github.com/microsoft/jacdac-msr-modules/commit/9d9fc06) further submodule update
* [6227890](https://github.com/microsoft/jacdac-msr-modules/commit/6227890) update submodules
* [5a90d7f](https://github.com/microsoft/jacdac-msr-modules/commit/5a90d7f) [skip ci] firmware v0.19.0 built

### microsoft/jacdac-c

* [61b1032](https://github.com/microsoft/jacdac-c/commit/61b1032) allow for encoders with "denser" contacts
* [60e2d93](https://github.com/microsoft/jacdac-c/commit/60e2d93) rename files to match services
* [6f7fd8e](https://github.com/microsoft/jacdac-c/commit/6f7fd8e) update for latest jacdac services spec
* [bca77d8](https://github.com/microsoft/jacdac-c/commit/bca77d8) add non-working SGPC3 driver
* [cad9eb1](https://github.com/microsoft/jacdac-c/commit/cad9eb1) fix compile problem
* [a79a4e2](https://github.com/microsoft/jacdac-c/commit/a79a4e2) Replace #pragma once with traditional #ifndef guard ([#35](https://github.com/microsoft/jacdac-c/pull/35))
* [d7db4a7](https://github.com/microsoft/jacdac-c/commit/d7db4a7) add lora data sending
* [f24a94d](https://github.com/microsoft/jacdac-c/commit/f24a94d) add lorawan "service"
* [8a66b5e](https://github.com/microsoft/jacdac-c/commit/8a66b5e) add is_before()
* [2701349](https://github.com/microsoft/jacdac-c/commit/2701349) function renamed
* [2834483](https://github.com/microsoft/jacdac-c/commit/2834483) add lora hooks
* [de13625](https://github.com/microsoft/jacdac-c/commit/de13625) add JD_LORA define
* [f7ead94](https://github.com/microsoft/jacdac-c/commit/f7ead94) re-order things for smaller size
* [b948fdc](https://github.com/microsoft/jacdac-c/commit/b948fdc) Add MPL3115A2 pressure sensor
* [59e5b2f](https://github.com/microsoft/jacdac-c/commit/59e5b2f) Add motion (PIR) service
* [da24b59](https://github.com/microsoft/jacdac-c/commit/da24b59) fix 'pressed' direct read in button
* [fc9736a](https://github.com/microsoft/jacdac-c/commit/fc9736a) fix build
* [0e9a1b7](https://github.com/microsoft/jacdac-c/commit/0e9a1b7) Add MAX6675 and MAX31855 thermocouple drivers
* [f39ff4f](https://github.com/microsoft/jacdac-c/commit/f39ff4f) use fixed sspi_rx()
* [3250200](https://github.com/microsoft/jacdac-c/commit/3250200) Status fixes
* [7407f0b](https://github.com/microsoft/jacdac-c/commit/7407f0b) Improve signalling in power service
* [c5116a7](https://github.com/microsoft/jacdac-c/commit/c5116a7) Add jd_status_set_ch()
* [40d9217](https://github.com/microsoft/jacdac-c/commit/40d9217) init status light before services, so they can use it
* [bbb676d](https://github.com/microsoft/jacdac-c/commit/bbb676d) fix broadcast matching
* [ded88fd](https://github.com/microsoft/jacdac-c/commit/ded88fd) more flexible analog sensor
* [ced2f0b](https://github.com/microsoft/jacdac-c/commit/ced2f0b) Add CPS122 pressure sensor
* [b8cc391](https://github.com/microsoft/jacdac-c/commit/b8cc391) Add SHT30 and LTR 390 UV sensors
* [9ca6c06](https://github.com/microsoft/jacdac-c/commit/9ca6c06) Add UVI and illuminance services
* [8c75cab](https://github.com/microsoft/jacdac-c/commit/8c75cab) New power service impl
* [4217d03](https://github.com/microsoft/jacdac-c/commit/4217d03) add jd_block_register()
* [0b59bf7](https://github.com/microsoft/jacdac-c/commit/0b59bf7) now also uppercase: SERVICE_NUMBER->SERVICE_INDEX
* [fc502b3](https://github.com/microsoft/jacdac-c/commit/fc502b3) rename service_number to service_index
* [021a711](https://github.com/microsoft/jacdac-c/commit/021a711) update spec repo
* [7cf1607](https://github.com/microsoft/jacdac-c/commit/7cf1607) Split out sending utils

### microsoft/jacdac-msr-modules

* [e063cd4](https://github.com/microsoft/jacdac-msr-modules/commit/e063cd4) (HEAD) move spec docs to jacdac-docs
* [9ab1d6e](https://github.com/microsoft/jacdac-msr-modules/commit/9ab1d6e) Apply automatic changes
* [3b118e7](https://github.com/microsoft/jacdac-msr-modules/commit/3b118e7) update pointer
* [c21ca31](https://github.com/microsoft/jacdac-msr-modules/commit/c21ca31) delete unused images
* [229fd1d](https://github.com/microsoft/jacdac-msr-modules/commit/229fd1d) remove unused stuff
* [e652358](https://github.com/microsoft/jacdac-msr-modules/commit/e652358) update reference
* [bcce699](https://github.com/microsoft/jacdac-msr-modules/commit/bcce699) update
* [36be5f6](https://github.com/microsoft/jacdac-msr-modules/commit/36be5f6) move stuff to DDK
* [3a4c196](https://github.com/microsoft/jacdac-msr-modules/commit/3a4c196) remove DDK-specific files from spec
* [d243a05](https://github.com/microsoft/jacdac-msr-modules/commit/d243a05) move single wire serial into own page
* [3c3d82b](https://github.com/microsoft/jacdac-msr-modules/commit/3c3d82b) Merge branch 'main' of https://github.com/microsoft/jacdac
* [4f4ed4b](https://github.com/microsoft/jacdac-msr-modules/commit/4f4ed4b) updated display specs
* [8c8fdd3](https://github.com/microsoft/jacdac-msr-modules/commit/8c8fdd3) Apply automatic changes
* [11f6248](https://github.com/microsoft/jacdac-msr-modules/commit/11f6248) Remove copy&paste references and make regs const ([#908](https://github.com/microsoft/jacdac-msr-modules/pull/908))
* [8c0aa25](https://github.com/microsoft/jacdac-msr-modules/commit/8c0aa25) updated makecode extensions
* [87d05a9](https://github.com/microsoft/jacdac-msr-modules/commit/87d05a9) new led pixel service ([#836](https://github.com/microsoft/jacdac-msr-modules/pull/836))
* [a63e3e9](https://github.com/microsoft/jacdac-msr-modules/commit/a63e3e9) Apply automatic changes
* [a22776e](https://github.com/microsoft/jacdac-msr-modules/commit/a22776e) added files ([#905](https://github.com/microsoft/jacdac-msr-modules/pull/905))
* [9294c5d](https://github.com/microsoft/jacdac-msr-modules/commit/9294c5d) Apply automatic changes
* [636b34d](https://github.com/microsoft/jacdac-msr-modules/commit/636b34d) Device: JM Motion PIR v3.8 ([#904](https://github.com/microsoft/jacdac-msr-modules/pull/904))
* [13ae057](https://github.com/microsoft/jacdac-msr-modules/commit/13ae057) Apply automatic changes
* [298c031](https://github.com/microsoft/jacdac-msr-modules/commit/298c031) Device: JM Pressure v3.8 ([#903](https://github.com/microsoft/jacdac-msr-modules/pull/903))
* [f663493](https://github.com/microsoft/jacdac-msr-modules/commit/f663493) document captive portal mode ([#897](https://github.com/microsoft/jacdac-msr-modules/pull/897))
* [7b78837](https://github.com/microsoft/jacdac-msr-modules/commit/7b78837) Update qr-url-device-map.csv
* [d04b580](https://github.com/microsoft/jacdac-msr-modules/commit/d04b580) Apply automatic changes
* [0af9c42](https://github.com/microsoft/jacdac-msr-modules/commit/0af9c42) hide farmbeats
* [f582d16](https://github.com/microsoft/jacdac-msr-modules/commit/f582d16) simplify jacscloud - just a simple twin change event, no subs
* [de040cf](https://github.com/microsoft/jacdac-msr-modules/commit/de040cf) Add status in jacs ack_cloud_command
* [fd6fb42](https://github.com/microsoft/jacdac-msr-modules/commit/fd6fb42) improve intellisense for jacscript
* [14100bc](https://github.com/microsoft/jacdac-msr-modules/commit/14100bc) updated role manager docs
* [de51be1](https://github.com/microsoft/jacdac-msr-modules/commit/de51be1) fix snakify
* [6bd70d9](https://github.com/microsoft/jacdac-msr-modules/commit/6bd70d9) make volume optional in sound player
* [8147baf](https://github.com/microsoft/jacdac-msr-modules/commit/8147baf) update relative links so that they are correct ([#890](https://github.com/microsoft/jacdac-msr-modules/pull/890))
* [d2b94f4](https://github.com/microsoft/jacdac-msr-modules/commit/d2b94f4) fixing warnings
* [dd234cf](https://github.com/microsoft/jacdac-msr-modules/commit/dd234cf) generate ushort enums
* [9c74153](https://github.com/microsoft/jacdac-msr-modules/commit/9c74153) add note about rw registers changing with commands
* [1129f97](https://github.com/microsoft/jacdac-msr-modules/commit/1129f97) specify role manager algorithm
* [ed35b67](https://github.com/microsoft/jacdac-msr-modules/commit/ed35b67) Fix fence handling
* [6f98d2d](https://github.com/microsoft/jacdac-msr-modules/commit/6f98d2d) Apply automatic changes
* [280f4f1](https://github.com/microsoft/jacdac-msr-modules/commit/280f4f1) add hardware design
* [87b893c](https://github.com/microsoft/jacdac-msr-modules/commit/87b893c) updated C# codegen
* [c78f55d](https://github.com/microsoft/jacdac-msr-modules/commit/c78f55d) updated buildints
* [182466d](https://github.com/microsoft/jacdac-msr-modules/commit/182466d) missing new lie
* [c72431b](https://github.com/microsoft/jacdac-msr-modules/commit/c72431b) add two jacscript infra services
* [d24ae71](https://github.com/microsoft/jacdac-msr-modules/commit/d24ae71) merge main
* [33dda86](https://github.com/microsoft/jacdac-msr-modules/commit/33dda86) add sound recorder with playback
* [751b4cc](https://github.com/microsoft/jacdac-msr-modules/commit/751b4cc) Service: Record and Replay ([#874](https://github.com/microsoft/jacdac-msr-modules/pull/874))
* [6060047](https://github.com/microsoft/jacdac-msr-modules/commit/6060047) updated C# codegen
* [6e2dbd4](https://github.com/microsoft/jacdac-msr-modules/commit/6e2dbd4) don't warn on mkdir -> exists
* [d71c14f](https://github.com/microsoft/jacdac-msr-modules/commit/d71c14f) format
* [475c06a](https://github.com/microsoft/jacdac-msr-modules/commit/475c06a) added trasnport type
* [3d7d896](https://github.com/microsoft/jacdac-msr-modules/commit/3d7d896) updated event codegen
* [15fc413](https://github.com/microsoft/jacdac-msr-modules/commit/15fc413) Merge branch 'main' of https://github.com/microsoft/jacdac
* [539c3c0](https://github.com/microsoft/jacdac-msr-modules/commit/539c3c0) add joystick design/firmware
* [93dc897](https://github.com/microsoft/jacdac-msr-modules/commit/93dc897) clarify about restart counter
* [577170e](https://github.com/microsoft/jacdac-msr-modules/commit/577170e) Apply automatic changes
* [c2748b2](https://github.com/microsoft/jacdac-msr-modules/commit/c2748b2) rename 'closed' to 'active' in relay + minor spec fixes ([#883](https://github.com/microsoft/jacdac-msr-modules/pull/883))
* [d8acd5c](https://github.com/microsoft/jacdac-msr-modules/commit/d8acd5c) new designs ([#882](https://github.com/microsoft/jacdac-msr-modules/pull/882))
* [55b6e8c](https://github.com/microsoft/jacdac-msr-modules/commit/55b6e8c) handle multi values
* [8aaa1c1](https://github.com/microsoft/jacdac-msr-modules/commit/8aaa1c1) codegen for .net events
* [d0e9c36](https://github.com/microsoft/jacdac-msr-modules/commit/d0e9c36) generate client commands
* [c4d53b4](https://github.com/microsoft/jacdac-msr-modules/commit/c4d53b4) updated service argument names to avoid type clashes in c#
* [8d8115b](https://github.com/microsoft/jacdac-msr-modules/commit/8d8115b) order of ctor
* [56ca29a](https://github.com/microsoft/jacdac-msr-modules/commit/56ca29a) update client codegen
* [6d459ee](https://github.com/microsoft/jacdac-msr-modules/commit/6d459ee) udpated cs constant generations
* [5619831](https://github.com/microsoft/jacdac-msr-modules/commit/5619831) Apply automatic changes
* [9c8b58c](https://github.com/microsoft/jacdac-msr-modules/commit/9c8b58c) update specs
* [3738156](https://github.com/microsoft/jacdac-msr-modules/commit/3738156) removing rolemanager.get_role command
* [a93ad33](https://github.com/microsoft/jacdac-msr-modules/commit/a93ad33) simplify role manager: remove list_stored_roles
* [d6bed9e](https://github.com/microsoft/jacdac-msr-modules/commit/d6bed9e) Complex register fields can now be accessed directly in jacscript
* [7fe1873](https://github.com/microsoft/jacdac-msr-modules/commit/7fe1873) add files to help with intellisense in jacscript
* [0b447e7](https://github.com/microsoft/jacdac-msr-modules/commit/0b447e7) fix generation of non-clients
* [6a7d95c](https://github.com/microsoft/jacdac-msr-modules/commit/6a7d95c) restore makecode-extensions
* [1d122ce](https://github.com/microsoft/jacdac-msr-modules/commit/1d122ce) start on linking to hw and firmware ([#871](https://github.com/microsoft/jacdac-msr-modules/pull/871))
* [caa4243](https://github.com/microsoft/jacdac-msr-modules/commit/caa4243) Add designs 73 and 74
* [1ec8fd8](https://github.com/microsoft/jacdac-msr-modules/commit/1ec8fd8) fix dup reports
* [11693c5](https://github.com/microsoft/jacdac-msr-modules/commit/11693c5) generate C# pack information
* [6334686](https://github.com/microsoft/jacdac-msr-modules/commit/6334686) filter bridge/dashboard clients
* [02be2a0](https://github.com/microsoft/jacdac-msr-modules/commit/02be2a0) udpated C# generation of flags enum
* [2434be1](https://github.com/microsoft/jacdac-msr-modules/commit/2434be1) udpated temperature project
* [76936aa](https://github.com/microsoft/jacdac-msr-modules/commit/76936aa) updated makecode extension names
* [b831169](https://github.com/microsoft/jacdac-msr-modules/commit/b831169) spec review + updates
* [8010f78](https://github.com/microsoft/jacdac-msr-modules/commit/8010f78) updated status "rc"
* [502306c](https://github.com/microsoft/jacdac-msr-modules/commit/502306c) Service stable ([#867](https://github.com/microsoft/jacdac-msr-modules/pull/867))
* [fe4c4c9](https://github.com/microsoft/jacdac-msr-modules/commit/fe4c4c9) updated c# generation
* [31388f2](https://github.com/microsoft/jacdac-msr-modules/commit/31388f2) Compress Images ([#857](https://github.com/microsoft/jacdac-msr-modules/pull/857))
* [8c959eb](https://github.com/microsoft/jacdac-msr-modules/commit/8c959eb) fix broken links
* [b4f7a25](https://github.com/microsoft/jacdac-msr-modules/commit/b4f7a25) Apply automatic changes
* [9152094](https://github.com/microsoft/jacdac-msr-modules/commit/9152094) Device: JM Dual Key ([#864](https://github.com/microsoft/jacdac-msr-modules/pull/864))
* [0770936](https://github.com/microsoft/jacdac-msr-modules/commit/0770936) Device: JM CO2/TVOC/Temp/Hum SGP30+SHT30 ([#865](https://github.com/microsoft/jacdac-msr-modules/pull/865))
* [592aad3](https://github.com/microsoft/jacdac-msr-modules/commit/592aad3) Device: JM Key v3.7 ([#863](https://github.com/microsoft/jacdac-msr-modules/pull/863))
* [3c13e95](https://github.com/microsoft/jacdac-msr-modules/commit/3c13e95) Device: JM SHT30 Temperature/Humidity ([#862](https://github.com/microsoft/jacdac-msr-modules/pull/862))
* [6dc2af0](https://github.com/microsoft/jacdac-msr-modules/commit/6dc2af0) Device: JM RGB-Ring ([#861](https://github.com/microsoft/jacdac-msr-modules/pull/861))
* [7115018](https://github.com/microsoft/jacdac-msr-modules/commit/7115018) Device: JM UVI/Illuminance 65 v3.6 ([#860](https://github.com/microsoft/jacdac-msr-modules/pull/860))
* [c09a6e1](https://github.com/microsoft/jacdac-msr-modules/commit/c09a6e1) Device: JM SPI bridge v3.7 ([#859](https://github.com/microsoft/jacdac-msr-modules/pull/859))
* [a149e1b](https://github.com/microsoft/jacdac-msr-modules/commit/a149e1b) Compress Images ([#858](https://github.com/microsoft/jacdac-msr-modules/pull/858))
* [fc7f6ef](https://github.com/microsoft/jacdac-msr-modules/commit/fc7f6ef) standardize button and accel pictures
* [a77a3b8](https://github.com/microsoft/jacdac-msr-modules/commit/a77a3b8) adding missing image
* [d7415d5](https://github.com/microsoft/jacdac-msr-modules/commit/d7415d5) fixing broken links
* [406c8e9](https://github.com/microsoft/jacdac-msr-modules/commit/406c8e9) Updated title
* [e8b11d4](https://github.com/microsoft/jacdac-msr-modules/commit/e8b11d4) patch a few links
* [9e0a910](https://github.com/microsoft/jacdac-msr-modules/commit/9e0a910) integrate DDK into spec docs
* [ccd5f19](https://github.com/microsoft/jacdac-msr-modules/commit/ccd5f19) moving hardware spec into spec repo
* [e414864](https://github.com/microsoft/jacdac-msr-modules/commit/e414864) fix preview
* [e8e6b25](https://github.com/microsoft/jacdac-msr-modules/commit/e8e6b25) updated spec to be more consistent with other docs ([#851](https://github.com/microsoft/jacdac-msr-modules/pull/851))
* [d5efb8d](https://github.com/microsoft/jacdac-msr-modules/commit/d5efb8d) Updated device code generator link
* [7cf53b8](https://github.com/microsoft/jacdac-msr-modules/commit/7cf53b8) Apply automatic changes
* [743304d](https://github.com/microsoft/jacdac-msr-modules/commit/743304d) added dashboard service
* [16affae](https://github.com/microsoft/jacdac-msr-modules/commit/16affae) updated device definition docs
* [6a0c378](https://github.com/microsoft/jacdac-msr-modules/commit/6a0c378) updated spec generator
* [43c42cc](https://github.com/microsoft/jacdac-msr-modules/commit/43c42cc) update my module names, add 69, 72
* [0446cc7](https://github.com/microsoft/jacdac-msr-modules/commit/0446cc7) generate default field value
* [e11690e](https://github.com/microsoft/jacdac-msr-modules/commit/e11690e) make azure iot hub name, device_id optional
* [763ef9f](https://github.com/microsoft/jacdac-msr-modules/commit/763ef9f) updated clock spec
* [3302438](https://github.com/microsoft/jacdac-msr-modules/commit/3302438) update codegen to support tuples
* [f87d01f](https://github.com/microsoft/jacdac-msr-modules/commit/f87d01f) add my new designs
* [16ca663](https://github.com/microsoft/jacdac-msr-modules/commit/16ca663) handle reading registers
* [964085d](https://github.com/microsoft/jacdac-msr-modules/commit/964085d) generate sensor services
* [342569d](https://github.com/microsoft/jacdac-msr-modules/commit/342569d) fix hid-adapter codegen
* [6f4e6f3](https://github.com/microsoft/jacdac-msr-modules/commit/6f4e6f3) handle bool, scaled values
* [fe7543f](https://github.com/microsoft/jacdac-msr-modules/commit/fe7543f) reduce generated code size
* [8be27f1](https://github.com/microsoft/jacdac-msr-modules/commit/8be27f1) add generated link
* [c7f391f](https://github.com/microsoft/jacdac-msr-modules/commit/c7f391f) reduce noise in generated python
* [2687db4](https://github.com/microsoft/jacdac-msr-modules/commit/2687db4) generate init.py
* [e7d1e16](https://github.com/microsoft/jacdac-msr-modules/commit/e7d1e16) generate IntEnum instead of Enum to fix typecehcking
* [4eae86c](https://github.com/microsoft/jacdac-msr-modules/commit/4eae86c) generate tuples
* [90b4bbf](https://github.com/microsoft/jacdac-msr-modules/commit/90b4bbf) use client base, optional types
* [d690240](https://github.com/microsoft/jacdac-msr-modules/commit/d690240) generate enabled fields
* [60666ab](https://github.com/microsoft/jacdac-msr-modules/commit/60666ab) generate python events
* [7821abf](https://github.com/microsoft/jacdac-msr-modules/commit/7821abf) generate python commands
* [9cf1c50](https://github.com/microsoft/jacdac-msr-modules/commit/9cf1c50) more python codegen
* [4eb9f64](https://github.com/microsoft/jacdac-msr-modules/commit/4eb9f64) emit empty line
* [644f4c3](https://github.com/microsoft/jacdac-msr-modules/commit/644f4c3) don't genearte empty dictionaries
* [4bf7b0e](https://github.com/microsoft/jacdac-msr-modules/commit/4bf7b0e) generate module docstrings
* [d914e64](https://github.com/microsoft/jacdac-msr-modules/commit/d914e64) generate linted py
* [4a0871a](https://github.com/microsoft/jacdac-msr-modules/commit/4a0871a) fix double __
* [df6bb5e](https://github.com/microsoft/jacdac-msr-modules/commit/df6bb5e) generate pack format dictionary
* [8303147](https://github.com/microsoft/jacdac-msr-modules/commit/8303147) remove extraneous generated files
* [f1ae95a](https://github.com/microsoft/jacdac-msr-modules/commit/f1ae95a) fix import startegy
* [25d4cea](https://github.com/microsoft/jacdac-msr-modules/commit/25d4cea) updated file path
* [ef2ae3c](https://github.com/microsoft/jacdac-msr-modules/commit/ef2ae3c) generate desktop python constants
* [9ee4b70](https://github.com/microsoft/jacdac-msr-modules/commit/9ee4b70) fix camelize
* [57c20b3](https://github.com/microsoft/jacdac-msr-modules/commit/57c20b3) better camelize
* [b15b14a](https://github.com/microsoft/jacdac-msr-modules/commit/b15b14a) updated specs
* [f2973df](https://github.com/microsoft/jacdac-msr-modules/commit/f2973df) add deperacted 2.0 version of led 8-ring
* [ecc2eae](https://github.com/microsoft/jacdac-msr-modules/commit/ecc2eae) Merge branch 'main' of https://github.com/microsoft/jacdac
* [06f4f87](https://github.com/microsoft/jacdac-msr-modules/commit/06f4f87) updated download locations
* [2510878](https://github.com/microsoft/jacdac-msr-modules/commit/2510878) Apply automatic changes
* [ca6464e](https://github.com/microsoft/jacdac-msr-modules/commit/ca6464e) add custom product identifiers per firmware
* [c5d96c6](https://github.com/microsoft/jacdac-msr-modules/commit/c5d96c6) updated codegen to set enable to true when setting value
* [c237de7](https://github.com/microsoft/jacdac-msr-modules/commit/c237de7) updatd information about bootloader

### microsoft/jacdac-stm32x0

* [94f95b9](https://github.com/microsoft/jacdac-stm32x0/commit/94f95b9) updates for latest jacdac
* [c776285](https://github.com/microsoft/jacdac-stm32x0/commit/c776285) fix compilation
* [b279f4a](https://github.com/microsoft/jacdac-stm32x0/commit/b279f4a) Merge branch 'stm32wl'
* [7110ddc](https://github.com/microsoft/jacdac-stm32x0/commit/7110ddc) Update README.md
* [bae5365](https://github.com/microsoft/jacdac-stm32x0/commit/bae5365) clean up config; fixes
* [b9aa041](https://github.com/microsoft/jacdac-stm32x0/commit/b9aa041) name IRQ priorities
* [a5978e2](https://github.com/microsoft/jacdac-stm32x0/commit/a5978e2) timer fixes
* [9d94120](https://github.com/microsoft/jacdac-stm32x0/commit/9d94120) timer fixes
* [c7ea585](https://github.com/microsoft/jacdac-stm32x0/commit/c7ea585) improve lora logging
* [2b4c164](https://github.com/microsoft/jacdac-stm32x0/commit/2b4c164) reverse UID64 bytes
* [e81a7ff](https://github.com/microsoft/jacdac-stm32x0/commit/e81a7ff) implement lora callbacks
* [544d2e8](https://github.com/microsoft/jacdac-stm32x0/commit/544d2e8) remove unused files
* [34526b9](https://github.com/microsoft/jacdac-stm32x0/commit/34526b9) implement radio iface
* [eb6c24b](https://github.com/microsoft/jacdac-stm32x0/commit/eb6c24b) add LPTIM-based timer
* [549de54](https://github.com/microsoft/jacdac-stm32x0/commit/549de54) save time delta to BKP
* [676e30c](https://github.com/microsoft/jacdac-stm32x0/commit/676e30c) simplify systime.c
* [9a77ba9](https://github.com/microsoft/jacdac-stm32x0/commit/9a77ba9) avoid conflict with stdlib.h
* [e9e4d11](https://github.com/microsoft/jacdac-stm32x0/commit/e9e4d11) use tim_get_micros() etc
* [d28100b](https://github.com/microsoft/jacdac-stm32x0/commit/d28100b) format
* [912cf51](https://github.com/microsoft/jacdac-stm32x0/commit/912cf51) remove calendar code
* [0b0f294](https://github.com/microsoft/jacdac-stm32x0/commit/0b0f294) copy stm32_systime.h/c
* [5a86aa1](https://github.com/microsoft/jacdac-stm32x0/commit/5a86aa1) de-HALify
* [4c5a38f](https://github.com/microsoft/jacdac-stm32x0/commit/4c5a38f) add missing lora files HAL compat
* [3ffd2e9](https://github.com/microsoft/jacdac-stm32x0/commit/3ffd2e9) compile lorawan
* [77bfb1d](https://github.com/microsoft/jacdac-stm32x0/commit/77bfb1d) prefix FLASH_PAGE_SIZE with JD_
* [e62f352](https://github.com/microsoft/jacdac-stm32x0/commit/e62f352) use STM32CubeWL package (need LoRaWAN)
* [7cef2d4](https://github.com/microsoft/jacdac-stm32x0/commit/7cef2d4) setup RTC and deep sleep for WL
* [77031bd](https://github.com/microsoft/jacdac-stm32x0/commit/77031bd) set device id
* [5e88ac4](https://github.com/microsoft/jacdac-stm32x0/commit/5e88ac4) adc fixes
* [1357ebe](https://github.com/microsoft/jacdac-stm32x0/commit/1357ebe) uart fixes
* [e84ae8d](https://github.com/microsoft/jacdac-stm32x0/commit/e84ae8d) no GPIOF on WL
* [15c6a58](https://github.com/microsoft/jacdac-stm32x0/commit/15c6a58) fix dmamux clock
* [f63fc5b](https://github.com/microsoft/jacdac-stm32x0/commit/f63fc5b) setup HSI16 on WL
* [2aa11f5](https://github.com/microsoft/jacdac-stm32x0/commit/2aa11f5) calibrate target_wait_us for M4
* [c8bb5fd](https://github.com/microsoft/jacdac-stm32x0/commit/c8bb5fd) wait for conversion end
* [023dbc6](https://github.com/microsoft/jacdac-stm32x0/commit/023dbc6) format
* [ee1600c](https://github.com/microsoft/jacdac-stm32x0/commit/ee1600c) stm32wl compiles
* [762214f](https://github.com/microsoft/jacdac-stm32x0/commit/762214f) add submodules for stm32wl
* [716e2ab](https://github.com/microsoft/jacdac-stm32x0/commit/716e2ab) Make 'enabled' in spi bridge do something
* [322e214](https://github.com/microsoft/jacdac-stm32x0/commit/322e214) make sspi_rx() work
* [9d2035b](https://github.com/microsoft/jacdac-stm32x0/commit/9d2035b) Merge pull request [#41](https://github.com/microsoft/jacdac-stm32x0/pull/41) from microsoft/captouch
* [ccc591e](https://github.com/microsoft/jacdac-stm32x0/commit/ccc591e) Merge branch 'main' of https://github.com/microsoft/jacdac-stm32x0 into captouch
* [37bf8ff](https://github.com/microsoft/jacdac-stm32x0/commit/37bf8ff) add new LED pin mappings for G0
* [8bb680c](https://github.com/microsoft/jacdac-stm32x0/commit/8bb680c) add hardware schematics for the bridge
* [cd4aed8](https://github.com/microsoft/jacdac-stm32x0/commit/cd4aed8) Add some pibridge instructions
* [0010f35](https://github.com/microsoft/jacdac-stm32x0/commit/0010f35) Blink on SPI packets
* [de9597e](https://github.com/microsoft/jacdac-stm32x0/commit/de9597e) Allow larger frames
* [6b3cf84](https://github.com/microsoft/jacdac-stm32x0/commit/6b3cf84) reduce logging
* [1750ef0](https://github.com/microsoft/jacdac-stm32x0/commit/1750ef0) only re-link when needed
* [de625d7](https://github.com/microsoft/jacdac-stm32x0/commit/de625d7) support for raw frame sending
* [b80e061](https://github.com/microsoft/jacdac-stm32x0/commit/b80e061) Align rpi-bridge pinout with 3.5A shield
* [ab31309](https://github.com/microsoft/jacdac-stm32x0/commit/ab31309) now also uppercase: SERVICE_NUMBER->SERVICE_INDEX
* [d4b89d0](https://github.com/microsoft/jacdac-stm32x0/commit/d4b89d0) rename service_number to service_index

## Version 0.19.0

### microsoft/jacdac-msr-modules

* [662e8ef](https://github.com/microsoft/jacdac-msr-modules/commit/662e8ef) update submodules with command_not_impl report
* [9a0a9f6](https://github.com/microsoft/jacdac-msr-modules/commit/9a0a9f6) Add soil temp module
* [5652377](https://github.com/microsoft/jacdac-msr-modules/commit/5652377) Add soil moisture sensor
* [a5d5413](https://github.com/microsoft/jacdac-msr-modules/commit/a5d5413) Hopefully fix build
* [a8b8526](https://github.com/microsoft/jacdac-msr-modules/commit/a8b8526) don't try to upload release in CodeQL
* [9adf02c](https://github.com/microsoft/jacdac-msr-modules/commit/9adf02c) Add SPI bridge target
* [3cf8319](https://github.com/microsoft/jacdac-msr-modules/commit/3cf8319) [skip ci] firmware v0.18.0 built

### microsoft/jacdac-c

* [047f04a](https://github.com/microsoft/jacdac-c/commit/047f04a) Fix build
* [5087a06](https://github.com/microsoft/jacdac-c/commit/5087a06) Ignore broadcast packets
* [3b4b9a5](https://github.com/microsoft/jacdac-c/commit/3b4b9a5) Bump specs; use new constants
* [a6b362b](https://github.com/microsoft/jacdac-c/commit/a6b362b) add support for command_not_implemented
* [2dfc90e](https://github.com/microsoft/jacdac-c/commit/2dfc90e) adding nack in ctrl
* [a90eacd](https://github.com/microsoft/jacdac-c/commit/a90eacd) fix the ROM ID read
* [386f58c](https://github.com/microsoft/jacdac-c/commit/386f58c) add DS18B20 driver
* [fbb8f79](https://github.com/microsoft/jacdac-c/commit/fbb8f79) Add set_pin_pull()
* [a2c8aad](https://github.com/microsoft/jacdac-c/commit/a2c8aad) Add 1-Wire APIs
* [9a381a4](https://github.com/microsoft/jacdac-c/commit/9a381a4) size-optimize
* [099ca0d](https://github.com/microsoft/jacdac-c/commit/099ca0d) Add generic framework for analog sensors
* [50fbe94](https://github.com/microsoft/jacdac-c/commit/50fbe94) optimize binary size

### microsoft/jacdac-msr-modules

* [61c5e52](https://github.com/microsoft/jacdac-msr-modules/commit/61c5e52) Add reliable actions and error responses ([#809](https://github.com/microsoft/jacdac-msr-modules/pull/809))
* [a6fe1bd](https://github.com/microsoft/jacdac-msr-modules/commit/a6fe1bd) Apply automatic changes
* [61525a5](https://github.com/microsoft/jacdac-msr-modules/commit/61525a5) Device: JM Capacitive Soil Moisture ([#835](https://github.com/microsoft/jacdac-msr-modules/pull/835))
* [093b41e](https://github.com/microsoft/jacdac-msr-modules/commit/093b41e) Device: JM Soil Temperature DS18B20 ([#834](https://github.com/microsoft/jacdac-msr-modules/pull/834))
* [579a729](https://github.com/microsoft/jacdac-msr-modules/commit/579a729) updatd drive name info
* [38268f8](https://github.com/microsoft/jacdac-msr-modules/commit/38268f8) udpated esp brain firmware locations
* [499dd46](https://github.com/microsoft/jacdac-msr-modules/commit/499dd46) fix esp repo
* [1abe2e7](https://github.com/microsoft/jacdac-msr-modules/commit/1abe2e7) group encrionemtn sensors
* [edad45c](https://github.com/microsoft/jacdac-msr-modules/commit/edad45c) braille display service spec ([#832](https://github.com/microsoft/jacdac-msr-modules/pull/832))

### microsoft/jacdac-stm32x0

* [6c82ca4](https://github.com/microsoft/jacdac-stm32x0/commit/6c82ca4) add support for command_not_implemented
* [3f7a47f](https://github.com/microsoft/jacdac-stm32x0/commit/3f7a47f) 1-wire bugfix
* [5625ca0](https://github.com/microsoft/jacdac-stm32x0/commit/5625ca0) implement 1-Wire APIs
* [e37b0ae](https://github.com/microsoft/jacdac-stm32x0/commit/e37b0ae) implement pin_set_pull()
* [47e8e07](https://github.com/microsoft/jacdac-stm32x0/commit/47e8e07) ccache support
* [6d936ae](https://github.com/microsoft/jacdac-stm32x0/commit/6d936ae) Add RPi client for the bridge
* [d7350f8](https://github.com/microsoft/jacdac-stm32x0/commit/d7350f8) Bugfixes
* [4cd60d1](https://github.com/microsoft/jacdac-stm32x0/commit/4cd60d1) SPI bridge compiles
* [f150dbb](https://github.com/microsoft/jacdac-stm32x0/commit/f150dbb) make SPIS compile
* [318f6d8](https://github.com/microsoft/jacdac-stm32x0/commit/318f6d8) copy from arcade active shield
* [14b93c3](https://github.com/microsoft/jacdac-stm32x0/commit/14b93c3) copy from m:b bridge
* [9061bef](https://github.com/microsoft/jacdac-stm32x0/commit/9061bef) split out common SPI code
* [539e775](https://github.com/microsoft/jacdac-stm32x0/commit/539e775) anti-optimization in memcpy/set

## Version 0.18.0

### microsoft/jacdac-msr-modules

* [5a9f63c](https://github.com/microsoft/jacdac-msr-modules/commit/5a9f63c) Add MACH IMU board Accel/gyro ranges now supported
* [c0adbe8](https://github.com/microsoft/jacdac-msr-modules/commit/c0adbe8) Update jacdac-c; add gyro
* [f453f31](https://github.com/microsoft/jacdac-msr-modules/commit/f453f31) [skip ci] firmware v0.17.10 built

### microsoft/jacdac-c

* [3058672](https://github.com/microsoft/jacdac-c/commit/3058672) update specs
* [3644a14](https://github.com/microsoft/jacdac-c/commit/3644a14) Support ranges for LSM6DS and KXTJ3
* [4193d6d](https://github.com/microsoft/jacdac-c/commit/4193d6d) generic support for sensor ranges
* [d908951](https://github.com/microsoft/jacdac-c/commit/d908951) Add gyro service and lsm6ds support

### microsoft/jacdac-msr-modules

* [892654a](https://github.com/microsoft/jacdac-msr-modules/commit/892654a) updated brain, missing devices
* [504fc46](https://github.com/microsoft/jacdac-msr-modules/commit/504fc46) Add generic reading_range register; use in accel/gyro
* [ef4728a](https://github.com/microsoft/jacdac-msr-modules/commit/ef4728a) use 0.16 / for brightness
* [7b5d657](https://github.com/microsoft/jacdac-msr-modules/commit/7b5d657) add lightbuld service
* [6fa4dd6](https://github.com/microsoft/jacdac-msr-modules/commit/6fa4dd6) Correct picture for relay ([#828](https://github.com/microsoft/jacdac-msr-modules/pull/828))
* [15fd2d3](https://github.com/microsoft/jacdac-msr-modules/commit/15fd2d3) Apply automatic changes
* [afcf266](https://github.com/microsoft/jacdac-msr-modules/commit/afcf266) Device: JM Relay MACH-0.1 ([#827](https://github.com/microsoft/jacdac-msr-modules/pull/827))
* [2c6548b](https://github.com/microsoft/jacdac-msr-modules/commit/2c6548b) re-generate files
* [2868b70](https://github.com/microsoft/jacdac-msr-modules/commit/2868b70) Add unique brain service
* [ce75d44](https://github.com/microsoft/jacdac-msr-modules/commit/ce75d44) Add message_sent event in iot hub
* [e8df9d3](https://github.com/microsoft/jacdac-msr-modules/commit/e8df9d3) Add correct product id for esp32 brain
* [3a2cf8d](https://github.com/microsoft/jacdac-msr-modules/commit/3a2cf8d) Remove wifi.connected, add wifi.connection_failed
* [1ee95b3](https://github.com/microsoft/jacdac-msr-modules/commit/1ee95b3) support reading error on soil-moisture sensor
* [0b1c759](https://github.com/microsoft/jacdac-msr-modules/commit/0b1c759) store vendor id, product id in device spec
* [e5b6cf7](https://github.com/microsoft/jacdac-msr-modules/commit/e5b6cf7) updated espbrain
* [de74d88](https://github.com/microsoft/jacdac-msr-modules/commit/de74d88) store target info in makecode export
* [ef7bdd6](https://github.com/microsoft/jacdac-msr-modules/commit/ef7bdd6) Apply automatic changes
* [907d01a](https://github.com/microsoft/jacdac-msr-modules/commit/907d01a) add proxy service
* [a9f0f85](https://github.com/microsoft/jacdac-msr-modules/commit/a9f0f85) fix generation of makecode project names
* [c11a8d9](https://github.com/microsoft/jacdac-msr-modules/commit/c11a8d9) add codal message bus service ([#793](https://github.com/microsoft/jacdac-msr-modules/pull/793))
* [821c415](https://github.com/microsoft/jacdac-msr-modules/commit/821c415) Apply automatic changes
* [6e026d5](https://github.com/microsoft/jacdac-msr-modules/commit/6e026d5) Device: JM Haptic MACH-1.0 ([#783](https://github.com/microsoft/jacdac-msr-modules/pull/783))
* [c3e5ef2](https://github.com/microsoft/jacdac-msr-modules/commit/c3e5ef2) Revert "remove RP2040 & rotary."
* [ed672b8](https://github.com/microsoft/jacdac-msr-modules/commit/ed672b8) remove RP2040 & rotary.
* [b1938e6](https://github.com/microsoft/jacdac-msr-modules/commit/b1938e6) use # as unit for matrix dimensions
* [84bc9ec](https://github.com/microsoft/jacdac-msr-modules/commit/84bc9ec) merge main
* [56c1ba7](https://github.com/microsoft/jacdac-msr-modules/commit/56c1ba7) use count for character screen sizes
* [6e0f0c0](https://github.com/microsoft/jacdac-msr-modules/commit/6e0f0c0) Add wifi.rssi

### microsoft/jacdac-stm32x0

* [7b6a002](https://github.com/microsoft/jacdac-stm32x0/commit/7b6a002) fix order of SWD remapping
* [7d346d1](https://github.com/microsoft/jacdac-stm32x0/commit/7d346d1) disable LED on SWD pin in BL

## Version 0.17.10

### microsoft/jacdac-msr-modules

* [13a80c7](https://github.com/microsoft/jacdac-msr-modules/commit/13a80c7) Fix the relay to be off by default
* [37b3504](https://github.com/microsoft/jacdac-msr-modules/commit/37b3504) [skip ci] firmware v0.17.9 built

## Version 0.17.9

### microsoft/jacdac-msr-modules

* [8d6f2e2](https://github.com/microsoft/jacdac-msr-modules/commit/8d6f2e2) update jacdac-c to fix build

### microsoft/jacdac-c

* [49576cb](https://github.com/microsoft/jacdac-c/commit/49576cb) Haptic ([#33](https://github.com/microsoft/jacdac-c/pull/33))

## Version 0.17.8

### microsoft/jacdac-msr-modules

* [65cada8](https://github.com/microsoft/jacdac-msr-modules/commit/65cada8) Update submodules
* [9b15dff](https://github.com/microsoft/jacdac-msr-modules/commit/9b15dff) [skip ci] firmware v0.17.7 built

### microsoft/jacdac-stm32x0

* [6711de3](https://github.com/microsoft/jacdac-stm32x0/commit/6711de3) Add flash loops for bl/app

## Version 0.17.7

### microsoft/jacdac-msr-modules

* [0a02209](https://github.com/microsoft/jacdac-msr-modules/commit/0a02209) invert logic of switch output to active lo for 1.0 too
* [67b0e6f](https://github.com/microsoft/jacdac-msr-modules/commit/67b0e6f) [skip ci] firmware v0.17.6 built

## Version 0.17.6

### microsoft/jacdac-msr-modules

* [7fd7177](https://github.com/microsoft/jacdac-msr-modules/commit/7fd7177) invert relay polarity
* [12ee80e](https://github.com/microsoft/jacdac-msr-modules/commit/12ee80e) [skip ci] firmware v0.17.5 built

## Version 0.17.5

### microsoft/jacdac-msr-modules

* [9be2191](https://github.com/microsoft/jacdac-msr-modules/commit/9be2191) add haptic to drop targets
* [cc45fb2](https://github.com/microsoft/jacdac-msr-modules/commit/cc45fb2) [skip ci] firmware v0.17.4 built

## Version 0.17.4

### microsoft/jacdac-msr-modules

* [3c2c8c7](https://github.com/microsoft/jacdac-msr-modules/commit/3c2c8c7) Merge pull request [#37](https://github.com/microsoft/jacdac-msr-modules/pull/37) from microsoft/haptic
* [cbd4972](https://github.com/microsoft/jacdac-msr-modules/commit/cbd4972) Merge pull request [#38](https://github.com/microsoft/jacdac-msr-modules/pull/38) from microsoft/accelerometer-patch
* [43be4d3](https://github.com/microsoft/jacdac-msr-modules/commit/43be4d3) disable swclk for haptic board
* [ac97906](https://github.com/microsoft/jacdac-msr-modules/commit/ac97906) flip z
* [38a8155](https://github.com/microsoft/jacdac-msr-modules/commit/38a8155) fixup haptic.
* [2e6f6cb](https://github.com/microsoft/jacdac-msr-modules/commit/2e6f6cb) sync jd-c
* [7a46843](https://github.com/microsoft/jacdac-msr-modules/commit/7a46843) submodule sync
* [3967483](https://github.com/microsoft/jacdac-msr-modules/commit/3967483) Merge branch 'main' into haptic
* [88395c8](https://github.com/microsoft/jacdac-msr-modules/commit/88395c8) sync jd-stm32x0
* [40a68b7](https://github.com/microsoft/jacdac-msr-modules/commit/40a68b7) sync jd-c
* [80a12ef](https://github.com/microsoft/jacdac-msr-modules/commit/80a12ef) use new vibration driver and service
* [7868b10](https://github.com/microsoft/jacdac-msr-modules/commit/7868b10) [skip ci] firmware v0.17.3 built

### microsoft/jacdac-c

* [d176719](https://github.com/microsoft/jacdac-c/commit/d176719) fixup vibration service
* [c17f129](https://github.com/microsoft/jacdac-c/commit/c17f129) init the driver
* [f8ce2a0](https://github.com/microsoft/jacdac-c/commit/f8ce2a0) add wrap around to sequence idx handling
* [78977de](https://github.com/microsoft/jacdac-c/commit/78977de) update driver code
* [e847210](https://github.com/microsoft/jacdac-c/commit/e847210) Merge branch 'main' of https://github.com/microsoft/jacdac-c into haptic
* [66ac960](https://github.com/microsoft/jacdac-c/commit/66ac960) add vibration driver and service
* [420754b](https://github.com/microsoft/jacdac-c/commit/420754b) Merge pull request [#32](https://github.com/microsoft/jacdac-c/pull/32) from microsoft/braille-cell-map
* [0c1d989](https://github.com/microsoft/jacdac-c/commit/0c1d989) refactor braille to share common driver
* [2d25be9](https://github.com/microsoft/jacdac-c/commit/2d25be9) update relay events
* [aecf372](https://github.com/microsoft/jacdac-c/commit/aecf372) update jacdac specs
* [21a98d2](https://github.com/microsoft/jacdac-c/commit/21a98d2) adapt to new braille hardware
* [3c0bae6](https://github.com/microsoft/jacdac-c/commit/3c0bae6) Merge pull request [#31](https://github.com/microsoft/jacdac-c/pull/31) from microsoft/braille2
* [da4d35a](https://github.com/microsoft/jacdac-c/commit/da4d35a) driver clean up
* [7587f44](https://github.com/microsoft/jacdac-c/commit/7587f44) ifdef guard spi driver
* [08eac36](https://github.com/microsoft/jacdac-c/commit/08eac36) ifdef guard for double def of MIKROBUS_CS
* [ce21922](https://github.com/microsoft/jacdac-c/commit/ce21922) define PIN_CS if not defined
* [f62b2c1](https://github.com/microsoft/jacdac-c/commit/f62b2c1) use PIN_CS instead of MIKROBUS_CS
* [b372c20](https://github.com/microsoft/jacdac-c/commit/b372c20) modify braille up time
* [95045ba](https://github.com/microsoft/jacdac-c/commit/95045ba) make delay static
* [4bb0fec](https://github.com/microsoft/jacdac-c/commit/4bb0fec) update dspi init signature
* [57905aa](https://github.com/microsoft/jacdac-c/commit/57905aa) use MIKROBUS_CS define
* [4afadf2](https://github.com/microsoft/jacdac-c/commit/4afadf2) implemented braille service
* [e017fd4](https://github.com/microsoft/jacdac-c/commit/e017fd4) begin braille service implementation
* [de61ce9](https://github.com/microsoft/jacdac-c/commit/de61ce9) add raw api
* [dd33128](https://github.com/microsoft/jacdac-c/commit/dd33128) Merge branch 'main' of https://github.com/microsoft/jacdac-c into braille2
* [7eef3f9](https://github.com/microsoft/jacdac-c/commit/7eef3f9) decrease delay between writes
* [379ef00](https://github.com/microsoft/jacdac-c/commit/379ef00) more verification of cmds
* [74d8aab](https://github.com/microsoft/jacdac-c/commit/74d8aab) increase delay between writes
* [2bc910e](https://github.com/microsoft/jacdac-c/commit/2bc910e) update driver code
* [5dad2be](https://github.com/microsoft/jacdac-c/commit/5dad2be) Merge branch 'main' into braille2
* [16b4bf6](https://github.com/microsoft/jacdac-c/commit/16b4bf6) WIP ncv7726b driver updates
* [39de1e5](https://github.com/microsoft/jacdac-c/commit/39de1e5) neaten up ncv7726b driver interface
* [449081a](https://github.com/microsoft/jacdac-c/commit/449081a) add draft of ncv7726b driver

### microsoft/jacdac-msr-modules

* [990c2a8](https://github.com/microsoft/jacdac-msr-modules/commit/990c2a8) Apply automatic changes
* [467eb7a](https://github.com/microsoft/jacdac-msr-modules/commit/467eb7a) use link instead of repo for padauk
* [463b2e1](https://github.com/microsoft/jacdac-msr-modules/commit/463b2e1) updated character screen spec
* [e249b63](https://github.com/microsoft/jacdac-msr-modules/commit/e249b63) remove hardware that never shipped from list
* [5edaf45](https://github.com/microsoft/jacdac-msr-modules/commit/5edaf45) remove hardware that never shipped from list
* [2f27ecb](https://github.com/microsoft/jacdac-msr-modules/commit/2f27ecb) MAC address as const register
* [e69134b](https://github.com/microsoft/jacdac-msr-modules/commit/e69134b) Add Wifi.networks_changed event
* [3c66cc6](https://github.com/microsoft/jacdac-msr-modules/commit/3c66cc6) Compress Images ([#766](https://github.com/microsoft/jacdac-msr-modules/pull/766))
* [a04a2ad](https://github.com/microsoft/jacdac-msr-modules/commit/a04a2ad) Add more features to WiFi service ([#771](https://github.com/microsoft/jacdac-msr-modules/pull/771))
* [3f68081](https://github.com/microsoft/jacdac-msr-modules/commit/3f68081) mark devices without picture as experimental
* [3e74017](https://github.com/microsoft/jacdac-msr-modules/commit/3e74017) formatting json
* [e670b23](https://github.com/microsoft/jacdac-msr-modules/commit/e670b23) extra space in device name
* [a470f36](https://github.com/microsoft/jacdac-msr-modules/commit/a470f36) joystick picture in correct orientation; fixes https://github.com/microsoft/jacdac/issues/753
* [79c6a85](https://github.com/microsoft/jacdac-msr-modules/commit/79c6a85) Apply automatic changes
* [a1bd440](https://github.com/microsoft/jacdac-msr-modules/commit/a1bd440) hide experimental boards
* [06fb905](https://github.com/microsoft/jacdac-msr-modules/commit/06fb905) Apply automatic changes
* [bdfd418](https://github.com/microsoft/jacdac-msr-modules/commit/bdfd418) mark esp as experimental
* [8edd963](https://github.com/microsoft/jacdac-msr-modules/commit/8edd963) Apply automatic changes
* [62d9305](https://github.com/microsoft/jacdac-msr-modules/commit/62d9305) Device: JacdacTouchTest ([#759](https://github.com/microsoft/jacdac-msr-modules/pull/759))
* [1c1b0ce](https://github.com/microsoft/jacdac-msr-modules/commit/1c1b0ce) Device: JacdacTouchTestElectrode ([#760](https://github.com/microsoft/jacdac-msr-modules/pull/760))
* [bda3b25](https://github.com/microsoft/jacdac-msr-modules/commit/bda3b25) Device: JacdacJoystick 44-0.3 ([#761](https://github.com/microsoft/jacdac-msr-modules/pull/761))
* [d72ce11](https://github.com/microsoft/jacdac-msr-modules/commit/d72ce11) Device: JacdacCableExtender  ([#758](https://github.com/microsoft/jacdac-msr-modules/pull/758))
* [eea4795](https://github.com/microsoft/jacdac-msr-modules/commit/eea4795) Device: JacdacMotionDetection  ([#757](https://github.com/microsoft/jacdac-msr-modules/pull/757))
* [f42bb8c](https://github.com/microsoft/jacdac-msr-modules/commit/f42bb8c) Device: JacDacMicroBitShieldLP ([#755](https://github.com/microsoft/jacdac-msr-modules/pull/755))
* [315c44b](https://github.com/microsoft/jacdac-msr-modules/commit/315c44b) Device: JacdacPinHeaders  ([#740](https://github.com/microsoft/jacdac-msr-modules/pull/740))
* [09bcb9b](https://github.com/microsoft/jacdac-msr-modules/commit/09bcb9b) Update modules list.
* [56f2a7d](https://github.com/microsoft/jacdac-msr-modules/commit/56f2a7d) Update missing product id.
* [0be5293](https://github.com/microsoft/jacdac-msr-modules/commit/0be5293) Update missing productid.
* [b4cfb25](https://github.com/microsoft/jacdac-msr-modules/commit/b4cfb25) normalize module names
* [a3b38e7](https://github.com/microsoft/jacdac-msr-modules/commit/a3b38e7) mark transport for esp brain
* [8665c15](https://github.com/microsoft/jacdac-msr-modules/commit/8665c15) Apply automatic changes
* [3887638](https://github.com/microsoft/jacdac-msr-modules/commit/3887638) Device: MikrobusCarrierBoard  ([#741](https://github.com/microsoft/jacdac-msr-modules/pull/741))
* [adf080f](https://github.com/microsoft/jacdac-msr-modules/commit/adf080f) Apply automatic changes
* [29603bf](https://github.com/microsoft/jacdac-msr-modules/commit/29603bf) Device: JacDacMicroBitShieldLP  ([#739](https://github.com/microsoft/jacdac-msr-modules/pull/739))
* [b9a86a8](https://github.com/microsoft/jacdac-msr-modules/commit/b9a86a8) Device: JacdacHub ([#736](https://github.com/microsoft/jacdac-msr-modules/pull/736))
* [274e4e6](https://github.com/microsoft/jacdac-msr-modules/commit/274e4e6) Apply automatic changes
* [94fea8c](https://github.com/microsoft/jacdac-msr-modules/commit/94fea8c) deprecating older models
* [71c447c](https://github.com/microsoft/jacdac-msr-modules/commit/71c447c) temp fixes on names
* [f86d00c](https://github.com/microsoft/jacdac-msr-modules/commit/f86d00c) Compress Images ([#731](https://github.com/microsoft/jacdac-msr-modules/pull/731))
* [47fadb0](https://github.com/microsoft/jacdac-msr-modules/commit/47fadb0) standardize picture of text-to-speech module
* [ea14d04](https://github.com/microsoft/jacdac-msr-modules/commit/ea14d04) Apply automatic changes
* [b69dbe4](https://github.com/microsoft/jacdac-msr-modules/commit/b69dbe4) adding comments ([#730](https://github.com/microsoft/jacdac-msr-modules/pull/730))
* [e6a8ac5](https://github.com/microsoft/jacdac-msr-modules/commit/e6a8ac5) Merge branch 'main' of https://github.com/microsoft/jacdac
* [935e4bf](https://github.com/microsoft/jacdac-msr-modules/commit/935e4bf) more compress images
* [202b8f8](https://github.com/microsoft/jacdac-msr-modules/commit/202b8f8) Apply automatic changes
* [ddd2b8c](https://github.com/microsoft/jacdac-msr-modules/commit/ddd2b8c) Add pin headers; update m:b image
* [ec0b24e](https://github.com/microsoft/jacdac-msr-modules/commit/ec0b24e) renamed action
* [4495053](https://github.com/microsoft/jacdac-msr-modules/commit/4495053) update workflow
* [47ea2aa](https://github.com/microsoft/jacdac-msr-modules/commit/47ea2aa) compress on main
* [03b2ee6](https://github.com/microsoft/jacdac-msr-modules/commit/03b2ee6) udpate action name
* [ec9eddd](https://github.com/microsoft/jacdac-msr-modules/commit/ec9eddd) manual trigger
* [ffe16e6](https://github.com/microsoft/jacdac-msr-modules/commit/ffe16e6) rename action
* [93fd788](https://github.com/microsoft/jacdac-msr-modules/commit/93fd788) run image compression on main
* [a4a5abe](https://github.com/microsoft/jacdac-msr-modules/commit/a4a5abe) high-res images of modules ([#728](https://github.com/microsoft/jacdac-msr-modules/pull/728))
* [81eb21b](https://github.com/microsoft/jacdac-msr-modules/commit/81eb21b) Apply automatic changes
* [6ad8204](https://github.com/microsoft/jacdac-msr-modules/commit/6ad8204) fix link to microbit-oob
* [c1d467f](https://github.com/microsoft/jacdac-msr-modules/commit/c1d467f) add real picture for esp32 v0.2
* [0b48500](https://github.com/microsoft/jacdac-msr-modules/commit/0b48500) Apply automatic changes
* [e641db5](https://github.com/microsoft/jacdac-msr-modules/commit/e641db5) point to release files for firmware update
* [b2b7103](https://github.com/microsoft/jacdac-msr-modules/commit/b2b7103) refactor device id generation
* [8c76311](https://github.com/microsoft/jacdac-msr-modules/commit/8c76311) normalize pics
* [6244592](https://github.com/microsoft/jacdac-msr-modules/commit/6244592) Apply automatic changes
* [c9f8452](https://github.com/microsoft/jacdac-msr-modules/commit/c9f8452) Device: JacdacBrainESP32 ([#725](https://github.com/microsoft/jacdac-msr-modules/pull/725))
* [aa442a6](https://github.com/microsoft/jacdac-msr-modules/commit/aa442a6) Apply automatic changes
* [45fab25](https://github.com/microsoft/jacdac-msr-modules/commit/45fab25) Device: JacdacIoT ([#724](https://github.com/microsoft/jacdac-msr-modules/pull/724))
* [648dc7b](https://github.com/microsoft/jacdac-msr-modules/commit/648dc7b) Apply automatic changes
* [a1c725f](https://github.com/microsoft/jacdac-msr-modules/commit/a1c725f) Device: JacdacBrainRP2040 ([#723](https://github.com/microsoft/jacdac-msr-modules/pull/723))
* [95de070](https://github.com/microsoft/jacdac-msr-modules/commit/95de070) Update missing product ID.
* [b1c7f00](https://github.com/microsoft/jacdac-msr-modules/commit/b1c7f00) fixed files names
* [fdd3084](https://github.com/microsoft/jacdac-msr-modules/commit/fdd3084) Apply automatic changes
* [d284ec8](https://github.com/microsoft/jacdac-msr-modules/commit/d284ec8) use generic brain profiles for HID servers; add RP2040
* [2b9884a](https://github.com/microsoft/jacdac-msr-modules/commit/2b9884a) Update modules list.
* [057000a](https://github.com/microsoft/jacdac-msr-modules/commit/057000a) fixed image
* [0ea0a89](https://github.com/microsoft/jacdac-msr-modules/commit/0ea0a89) add product identifier generator in file format
* [4be9ea8](https://github.com/microsoft/jacdac-msr-modules/commit/4be9ea8) allow larger device images
* [3b04f91](https://github.com/microsoft/jacdac-msr-modules/commit/3b04f91) allow larger pics
* [e3c09fa](https://github.com/microsoft/jacdac-msr-modules/commit/e3c09fa) updated version
* [78528e1](https://github.com/microsoft/jacdac-msr-modules/commit/78528e1) Apply automatic changes
* [db22e18](https://github.com/microsoft/jacdac-msr-modules/commit/db22e18) Device: JM Speech Synthesis v3.3 ([#713](https://github.com/microsoft/jacdac-msr-modules/pull/713))
* [8449ebe](https://github.com/microsoft/jacdac-msr-modules/commit/8449ebe) Update missing product ID.
* [8a80326](https://github.com/microsoft/jacdac-msr-modules/commit/8a80326) missing qr code
* [e6ec8bb](https://github.com/microsoft/jacdac-msr-modules/commit/e6ec8bb) normalize device naming schemes
* [9ecb2e6](https://github.com/microsoft/jacdac-msr-modules/commit/9ecb2e6) compiler version in devices catalog
* [029a7ef](https://github.com/microsoft/jacdac-msr-modules/commit/029a7ef) adding version/design ids to devices
* [9ac501f](https://github.com/microsoft/jacdac-msr-modules/commit/9ac501f) assign a few product ids
* [ed9aca8](https://github.com/microsoft/jacdac-msr-modules/commit/ed9aca8) add slider v1.1
* [1e78f4a](https://github.com/microsoft/jacdac-msr-modules/commit/1e78f4a) Apply automatic changes
* [42bfa08](https://github.com/microsoft/jacdac-msr-modules/commit/42bfa08) updated firmwares
* [3030e60](https://github.com/microsoft/jacdac-msr-modules/commit/3030e60) udated images
* [3d3c169](https://github.com/microsoft/jacdac-msr-modules/commit/3d3c169) Apply automatic changes
* [6325254](https://github.com/microsoft/jacdac-msr-modules/commit/6325254) updated dowload location
* [d3739bb](https://github.com/microsoft/jacdac-msr-modules/commit/d3739bb) renaming name packages
* [d328db2](https://github.com/microsoft/jacdac-msr-modules/commit/d328db2) merged changes
* [a9fc970](https://github.com/microsoft/jacdac-msr-modules/commit/a9fc970) patch modules
* [f74f239](https://github.com/microsoft/jacdac-msr-modules/commit/f74f239) Apply automatic changes
* [a621c37](https://github.com/microsoft/jacdac-msr-modules/commit/a621c37) Device: Keyboard Key ([#702](https://github.com/microsoft/jacdac-msr-modules/pull/702))
* [4ef7971](https://github.com/microsoft/jacdac-msr-modules/commit/4ef7971) Device: Accelerometer ([#700](https://github.com/microsoft/jacdac-msr-modules/pull/700))
* [e202241](https://github.com/microsoft/jacdac-msr-modules/commit/e202241) Device: Access Switch Input ([#699](https://github.com/microsoft/jacdac-msr-modules/pull/699))
* [a88ea18](https://github.com/microsoft/jacdac-msr-modules/commit/a88ea18) Merge branch 'main' of https://github.com/microsoft/jacdac
* [c8a4088](https://github.com/microsoft/jacdac-msr-modules/commit/c8a4088) fixing device template names
* [635ce93](https://github.com/microsoft/jacdac-msr-modules/commit/635ce93) Apply automatic changes
* [af8eb86](https://github.com/microsoft/jacdac-msr-modules/commit/af8eb86) Device: G0 Button ([#696](https://github.com/microsoft/jacdac-msr-modules/pull/696))
* [955c404](https://github.com/microsoft/jacdac-msr-modules/commit/955c404) add flags to store hardware design info
* [8823970](https://github.com/microsoft/jacdac-msr-modules/commit/8823970) Apply automatic changes
* [feba117](https://github.com/microsoft/jacdac-msr-modules/commit/feba117) fixing devices
* [195e2be](https://github.com/microsoft/jacdac-msr-modules/commit/195e2be) adding extra firmware info
* [c558213](https://github.com/microsoft/jacdac-msr-modules/commit/c558213) adding tags notations to modules
* [6fc97bb](https://github.com/microsoft/jacdac-msr-modules/commit/6fc97bb) Apply automatic changes
* [ce5bc93](https://github.com/microsoft/jacdac-msr-modules/commit/ce5bc93) Add JM HID servers
* [e4e4254](https://github.com/microsoft/jacdac-msr-modules/commit/e4e4254) udpated makecode generation
* [919895c](https://github.com/microsoft/jacdac-msr-modules/commit/919895c) Apply automatic changes
* [6f2cee4](https://github.com/microsoft/jacdac-msr-modules/commit/6f2cee4) Merge branch 'main' of https://github.com/microsoft/jacdac
* [cdde9f9](https://github.com/microsoft/jacdac-msr-modules/commit/cdde9f9) add new keyboard key module
* [2659420](https://github.com/microsoft/jacdac-msr-modules/commit/2659420) Apply automatic changes
* [7a74e9e](https://github.com/microsoft/jacdac-msr-modules/commit/7a74e9e) add new modules
* [9d52682](https://github.com/microsoft/jacdac-msr-modules/commit/9d52682) updated relay terminology
* [f93d538](https://github.com/microsoft/jacdac-msr-modules/commit/f93d538) Apply automatic changes
* [0269b19](https://github.com/microsoft/jacdac-msr-modules/commit/0269b19) added control command to force proxy mode
* [ef80a15](https://github.com/microsoft/jacdac-msr-modules/commit/ef80a15) wording
* [98e1e99](https://github.com/microsoft/jacdac-msr-modules/commit/98e1e99) fixing icons
* [10511ef](https://github.com/microsoft/jacdac-msr-modules/commit/10511ef) add golden icon
* [cdf0798](https://github.com/microsoft/jacdac-msr-modules/commit/cdf0798) removing infrastructure registers
* [1153092](https://github.com/microsoft/jacdac-msr-modules/commit/1153092) deleted old icons
* [b28ac2f](https://github.com/microsoft/jacdac-msr-modules/commit/b28ac2f) add infrastructure service
* [f2194f4](https://github.com/microsoft/jacdac-msr-modules/commit/f2194f4) specify support transport for devices
* [e6b6058](https://github.com/microsoft/jacdac-msr-modules/commit/e6b6058) move to node 14.x
* [03c22d5](https://github.com/microsoft/jacdac-msr-modules/commit/03c22d5) Apply automatic changes
* [7187181](https://github.com/microsoft/jacdac-msr-modules/commit/7187181) require node 16
* [fdbc2ef](https://github.com/microsoft/jacdac-msr-modules/commit/fdbc2ef) handle client reg/commands in makecode generation

### microsoft/jacdac-stm32x0

* [6340d24](https://github.com/microsoft/jacdac-stm32x0/commit/6340d24) Merge pull request [#39](https://github.com/microsoft/jacdac-stm32x0/pull/39) from microsoft/braille2
* [c402381](https://github.com/microsoft/jacdac-stm32x0/commit/c402381) update dspi signature
* [1ccd381](https://github.com/microsoft/jacdac-stm32x0/commit/1ccd381) SPIx disable before configure
* [564bb1d](https://github.com/microsoft/jacdac-stm32x0/commit/564bb1d) Merge branch 'main' into braille2
* [6fdfcff](https://github.com/microsoft/jacdac-stm32x0/commit/6fdfcff) braille driver requires 2POL

## Version 0.17.3

### microsoft/jacdac-msr-modules

* [5689829](https://github.com/microsoft/jacdac-msr-modules/commit/5689829) Merge pull request [#36](https://github.com/microsoft/jacdac-msr-modules/pull/36) from microsoft/new-cell-map
* [cbf7945](https://github.com/microsoft/jacdac-msr-modules/commit/cbf7945) add two profile for braille proto variants
* [43151f6](https://github.com/microsoft/jacdac-msr-modules/commit/43151f6) adopt new braille abstractions
* [350e06b](https://github.com/microsoft/jacdac-msr-modules/commit/350e06b) update cell map for new hardware
* [83840a5](https://github.com/microsoft/jacdac-msr-modules/commit/83840a5) [skip ci] firmware v0.17.2 built

### microsoft/jacdac-c

* [0c1d989](https://github.com/microsoft/jacdac-c/commit/0c1d989) refactor braille to share common driver
* [2d25be9](https://github.com/microsoft/jacdac-c/commit/2d25be9) update relay events
* [aecf372](https://github.com/microsoft/jacdac-c/commit/aecf372) update jacdac specs
* [21a98d2](https://github.com/microsoft/jacdac-c/commit/21a98d2) adapt to new braille hardware

### microsoft/jacdac-msr-modules

* [990c2a8](https://github.com/microsoft/jacdac-msr-modules/commit/990c2a8) Apply automatic changes
* [467eb7a](https://github.com/microsoft/jacdac-msr-modules/commit/467eb7a) use link instead of repo for padauk
* [463b2e1](https://github.com/microsoft/jacdac-msr-modules/commit/463b2e1) updated character screen spec
* [e249b63](https://github.com/microsoft/jacdac-msr-modules/commit/e249b63) remove hardware that never shipped from list
* [5edaf45](https://github.com/microsoft/jacdac-msr-modules/commit/5edaf45) remove hardware that never shipped from list
* [2f27ecb](https://github.com/microsoft/jacdac-msr-modules/commit/2f27ecb) MAC address as const register
* [e69134b](https://github.com/microsoft/jacdac-msr-modules/commit/e69134b) Add Wifi.networks_changed event
* [3c66cc6](https://github.com/microsoft/jacdac-msr-modules/commit/3c66cc6) Compress Images ([#766](https://github.com/microsoft/jacdac-msr-modules/pull/766))
* [a04a2ad](https://github.com/microsoft/jacdac-msr-modules/commit/a04a2ad) Add more features to WiFi service ([#771](https://github.com/microsoft/jacdac-msr-modules/pull/771))
* [3f68081](https://github.com/microsoft/jacdac-msr-modules/commit/3f68081) mark devices without picture as experimental
* [3e74017](https://github.com/microsoft/jacdac-msr-modules/commit/3e74017) formatting json
* [e670b23](https://github.com/microsoft/jacdac-msr-modules/commit/e670b23) extra space in device name
* [a470f36](https://github.com/microsoft/jacdac-msr-modules/commit/a470f36) joystick picture in correct orientation; fixes https://github.com/microsoft/jacdac/issues/753
* [79c6a85](https://github.com/microsoft/jacdac-msr-modules/commit/79c6a85) Apply automatic changes
* [a1bd440](https://github.com/microsoft/jacdac-msr-modules/commit/a1bd440) hide experimental boards
* [06fb905](https://github.com/microsoft/jacdac-msr-modules/commit/06fb905) Apply automatic changes
* [bdfd418](https://github.com/microsoft/jacdac-msr-modules/commit/bdfd418) mark esp as experimental
* [8edd963](https://github.com/microsoft/jacdac-msr-modules/commit/8edd963) Apply automatic changes
* [62d9305](https://github.com/microsoft/jacdac-msr-modules/commit/62d9305) Device: JacdacTouchTest ([#759](https://github.com/microsoft/jacdac-msr-modules/pull/759))
* [1c1b0ce](https://github.com/microsoft/jacdac-msr-modules/commit/1c1b0ce) Device: JacdacTouchTestElectrode ([#760](https://github.com/microsoft/jacdac-msr-modules/pull/760))
* [bda3b25](https://github.com/microsoft/jacdac-msr-modules/commit/bda3b25) Device: JacdacJoystick 44-0.3 ([#761](https://github.com/microsoft/jacdac-msr-modules/pull/761))
* [d72ce11](https://github.com/microsoft/jacdac-msr-modules/commit/d72ce11) Device: JacdacCableExtender  ([#758](https://github.com/microsoft/jacdac-msr-modules/pull/758))
* [eea4795](https://github.com/microsoft/jacdac-msr-modules/commit/eea4795) Device: JacdacMotionDetection  ([#757](https://github.com/microsoft/jacdac-msr-modules/pull/757))
* [f42bb8c](https://github.com/microsoft/jacdac-msr-modules/commit/f42bb8c) Device: JacDacMicroBitShieldLP ([#755](https://github.com/microsoft/jacdac-msr-modules/pull/755))
* [315c44b](https://github.com/microsoft/jacdac-msr-modules/commit/315c44b) Device: JacdacPinHeaders  ([#740](https://github.com/microsoft/jacdac-msr-modules/pull/740))
* [09bcb9b](https://github.com/microsoft/jacdac-msr-modules/commit/09bcb9b) Update modules list.
* [56f2a7d](https://github.com/microsoft/jacdac-msr-modules/commit/56f2a7d) Update missing product id.
* [0be5293](https://github.com/microsoft/jacdac-msr-modules/commit/0be5293) Update missing productid.
* [b4cfb25](https://github.com/microsoft/jacdac-msr-modules/commit/b4cfb25) normalize module names
* [a3b38e7](https://github.com/microsoft/jacdac-msr-modules/commit/a3b38e7) mark transport for esp brain
* [8665c15](https://github.com/microsoft/jacdac-msr-modules/commit/8665c15) Apply automatic changes
* [3887638](https://github.com/microsoft/jacdac-msr-modules/commit/3887638) Device: MikrobusCarrierBoard  ([#741](https://github.com/microsoft/jacdac-msr-modules/pull/741))
* [adf080f](https://github.com/microsoft/jacdac-msr-modules/commit/adf080f) Apply automatic changes
* [29603bf](https://github.com/microsoft/jacdac-msr-modules/commit/29603bf) Device: JacDacMicroBitShieldLP  ([#739](https://github.com/microsoft/jacdac-msr-modules/pull/739))
* [b9a86a8](https://github.com/microsoft/jacdac-msr-modules/commit/b9a86a8) Device: JacdacHub ([#736](https://github.com/microsoft/jacdac-msr-modules/pull/736))
* [274e4e6](https://github.com/microsoft/jacdac-msr-modules/commit/274e4e6) Apply automatic changes
* [94fea8c](https://github.com/microsoft/jacdac-msr-modules/commit/94fea8c) deprecating older models
* [71c447c](https://github.com/microsoft/jacdac-msr-modules/commit/71c447c) temp fixes on names
* [f86d00c](https://github.com/microsoft/jacdac-msr-modules/commit/f86d00c) Compress Images ([#731](https://github.com/microsoft/jacdac-msr-modules/pull/731))
* [47fadb0](https://github.com/microsoft/jacdac-msr-modules/commit/47fadb0) standardize picture of text-to-speech module
* [ea14d04](https://github.com/microsoft/jacdac-msr-modules/commit/ea14d04) Apply automatic changes
* [b69dbe4](https://github.com/microsoft/jacdac-msr-modules/commit/b69dbe4) adding comments ([#730](https://github.com/microsoft/jacdac-msr-modules/pull/730))
* [e6a8ac5](https://github.com/microsoft/jacdac-msr-modules/commit/e6a8ac5) Merge branch 'main' of https://github.com/microsoft/jacdac
* [935e4bf](https://github.com/microsoft/jacdac-msr-modules/commit/935e4bf) more compress images
* [202b8f8](https://github.com/microsoft/jacdac-msr-modules/commit/202b8f8) Apply automatic changes
* [ddd2b8c](https://github.com/microsoft/jacdac-msr-modules/commit/ddd2b8c) Add pin headers; update m:b image
* [ec0b24e](https://github.com/microsoft/jacdac-msr-modules/commit/ec0b24e) renamed action
* [4495053](https://github.com/microsoft/jacdac-msr-modules/commit/4495053) update workflow
* [47ea2aa](https://github.com/microsoft/jacdac-msr-modules/commit/47ea2aa) compress on main
* [03b2ee6](https://github.com/microsoft/jacdac-msr-modules/commit/03b2ee6) udpate action name
* [ec9eddd](https://github.com/microsoft/jacdac-msr-modules/commit/ec9eddd) manual trigger
* [ffe16e6](https://github.com/microsoft/jacdac-msr-modules/commit/ffe16e6) rename action
* [93fd788](https://github.com/microsoft/jacdac-msr-modules/commit/93fd788) run image compression on main
* [a4a5abe](https://github.com/microsoft/jacdac-msr-modules/commit/a4a5abe) high-res images of modules ([#728](https://github.com/microsoft/jacdac-msr-modules/pull/728))
* [81eb21b](https://github.com/microsoft/jacdac-msr-modules/commit/81eb21b) Apply automatic changes
* [6ad8204](https://github.com/microsoft/jacdac-msr-modules/commit/6ad8204) fix link to microbit-oob
* [c1d467f](https://github.com/microsoft/jacdac-msr-modules/commit/c1d467f) add real picture for esp32 v0.2
* [0b48500](https://github.com/microsoft/jacdac-msr-modules/commit/0b48500) Apply automatic changes
* [e641db5](https://github.com/microsoft/jacdac-msr-modules/commit/e641db5) point to release files for firmware update
* [b2b7103](https://github.com/microsoft/jacdac-msr-modules/commit/b2b7103) refactor device id generation
* [8c76311](https://github.com/microsoft/jacdac-msr-modules/commit/8c76311) normalize pics
* [6244592](https://github.com/microsoft/jacdac-msr-modules/commit/6244592) Apply automatic changes
* [c9f8452](https://github.com/microsoft/jacdac-msr-modules/commit/c9f8452) Device: JacdacBrainESP32 ([#725](https://github.com/microsoft/jacdac-msr-modules/pull/725))
* [aa442a6](https://github.com/microsoft/jacdac-msr-modules/commit/aa442a6) Apply automatic changes
* [45fab25](https://github.com/microsoft/jacdac-msr-modules/commit/45fab25) Device: JacdacIoT ([#724](https://github.com/microsoft/jacdac-msr-modules/pull/724))
* [648dc7b](https://github.com/microsoft/jacdac-msr-modules/commit/648dc7b) Apply automatic changes
* [a1c725f](https://github.com/microsoft/jacdac-msr-modules/commit/a1c725f) Device: JacdacBrainRP2040 ([#723](https://github.com/microsoft/jacdac-msr-modules/pull/723))
* [95de070](https://github.com/microsoft/jacdac-msr-modules/commit/95de070) Update missing product ID.
* [b1c7f00](https://github.com/microsoft/jacdac-msr-modules/commit/b1c7f00) fixed files names
* [fdd3084](https://github.com/microsoft/jacdac-msr-modules/commit/fdd3084) Apply automatic changes
* [d284ec8](https://github.com/microsoft/jacdac-msr-modules/commit/d284ec8) use generic brain profiles for HID servers; add RP2040
* [2b9884a](https://github.com/microsoft/jacdac-msr-modules/commit/2b9884a) Update modules list.
* [057000a](https://github.com/microsoft/jacdac-msr-modules/commit/057000a) fixed image
* [0ea0a89](https://github.com/microsoft/jacdac-msr-modules/commit/0ea0a89) add product identifier generator in file format
* [4be9ea8](https://github.com/microsoft/jacdac-msr-modules/commit/4be9ea8) allow larger device images
* [3b04f91](https://github.com/microsoft/jacdac-msr-modules/commit/3b04f91) allow larger pics
* [e3c09fa](https://github.com/microsoft/jacdac-msr-modules/commit/e3c09fa) updated version
* [78528e1](https://github.com/microsoft/jacdac-msr-modules/commit/78528e1) Apply automatic changes
* [db22e18](https://github.com/microsoft/jacdac-msr-modules/commit/db22e18) Device: JM Speech Synthesis v3.3 ([#713](https://github.com/microsoft/jacdac-msr-modules/pull/713))
* [8449ebe](https://github.com/microsoft/jacdac-msr-modules/commit/8449ebe) Update missing product ID.
* [8a80326](https://github.com/microsoft/jacdac-msr-modules/commit/8a80326) missing qr code
* [e6ec8bb](https://github.com/microsoft/jacdac-msr-modules/commit/e6ec8bb) normalize device naming schemes
* [9ecb2e6](https://github.com/microsoft/jacdac-msr-modules/commit/9ecb2e6) compiler version in devices catalog
* [029a7ef](https://github.com/microsoft/jacdac-msr-modules/commit/029a7ef) adding version/design ids to devices
* [9ac501f](https://github.com/microsoft/jacdac-msr-modules/commit/9ac501f) assign a few product ids
* [ed9aca8](https://github.com/microsoft/jacdac-msr-modules/commit/ed9aca8) add slider v1.1
* [1e78f4a](https://github.com/microsoft/jacdac-msr-modules/commit/1e78f4a) Apply automatic changes
* [42bfa08](https://github.com/microsoft/jacdac-msr-modules/commit/42bfa08) updated firmwares
* [3030e60](https://github.com/microsoft/jacdac-msr-modules/commit/3030e60) udated images
* [3d3c169](https://github.com/microsoft/jacdac-msr-modules/commit/3d3c169) Apply automatic changes
* [6325254](https://github.com/microsoft/jacdac-msr-modules/commit/6325254) updated dowload location
* [d3739bb](https://github.com/microsoft/jacdac-msr-modules/commit/d3739bb) renaming name packages
* [d328db2](https://github.com/microsoft/jacdac-msr-modules/commit/d328db2) merged changes
* [a9fc970](https://github.com/microsoft/jacdac-msr-modules/commit/a9fc970) patch modules
* [f74f239](https://github.com/microsoft/jacdac-msr-modules/commit/f74f239) Apply automatic changes
* [a621c37](https://github.com/microsoft/jacdac-msr-modules/commit/a621c37) Device: Keyboard Key ([#702](https://github.com/microsoft/jacdac-msr-modules/pull/702))
* [4ef7971](https://github.com/microsoft/jacdac-msr-modules/commit/4ef7971) Device: Accelerometer ([#700](https://github.com/microsoft/jacdac-msr-modules/pull/700))
* [e202241](https://github.com/microsoft/jacdac-msr-modules/commit/e202241) Device: Access Switch Input ([#699](https://github.com/microsoft/jacdac-msr-modules/pull/699))
* [a88ea18](https://github.com/microsoft/jacdac-msr-modules/commit/a88ea18) Merge branch 'main' of https://github.com/microsoft/jacdac
* [c8a4088](https://github.com/microsoft/jacdac-msr-modules/commit/c8a4088) fixing device template names
* [635ce93](https://github.com/microsoft/jacdac-msr-modules/commit/635ce93) Apply automatic changes
* [af8eb86](https://github.com/microsoft/jacdac-msr-modules/commit/af8eb86) Device: G0 Button ([#696](https://github.com/microsoft/jacdac-msr-modules/pull/696))
* [955c404](https://github.com/microsoft/jacdac-msr-modules/commit/955c404) add flags to store hardware design info
* [8823970](https://github.com/microsoft/jacdac-msr-modules/commit/8823970) Apply automatic changes
* [feba117](https://github.com/microsoft/jacdac-msr-modules/commit/feba117) fixing devices
* [195e2be](https://github.com/microsoft/jacdac-msr-modules/commit/195e2be) adding extra firmware info
* [c558213](https://github.com/microsoft/jacdac-msr-modules/commit/c558213) adding tags notations to modules
* [6fc97bb](https://github.com/microsoft/jacdac-msr-modules/commit/6fc97bb) Apply automatic changes
* [ce5bc93](https://github.com/microsoft/jacdac-msr-modules/commit/ce5bc93) Add JM HID servers
* [e4e4254](https://github.com/microsoft/jacdac-msr-modules/commit/e4e4254) udpated makecode generation
* [919895c](https://github.com/microsoft/jacdac-msr-modules/commit/919895c) Apply automatic changes
* [6f2cee4](https://github.com/microsoft/jacdac-msr-modules/commit/6f2cee4) Merge branch 'main' of https://github.com/microsoft/jacdac
* [cdde9f9](https://github.com/microsoft/jacdac-msr-modules/commit/cdde9f9) add new keyboard key module
* [2659420](https://github.com/microsoft/jacdac-msr-modules/commit/2659420) Apply automatic changes
* [7a74e9e](https://github.com/microsoft/jacdac-msr-modules/commit/7a74e9e) add new modules
* [9d52682](https://github.com/microsoft/jacdac-msr-modules/commit/9d52682) updated relay terminology
* [f93d538](https://github.com/microsoft/jacdac-msr-modules/commit/f93d538) Apply automatic changes
* [0269b19](https://github.com/microsoft/jacdac-msr-modules/commit/0269b19) added control command to force proxy mode
* [ef80a15](https://github.com/microsoft/jacdac-msr-modules/commit/ef80a15) wording
* [98e1e99](https://github.com/microsoft/jacdac-msr-modules/commit/98e1e99) fixing icons
* [10511ef](https://github.com/microsoft/jacdac-msr-modules/commit/10511ef) add golden icon
* [cdf0798](https://github.com/microsoft/jacdac-msr-modules/commit/cdf0798) removing infrastructure registers
* [1153092](https://github.com/microsoft/jacdac-msr-modules/commit/1153092) deleted old icons
* [b28ac2f](https://github.com/microsoft/jacdac-msr-modules/commit/b28ac2f) add infrastructure service
* [f2194f4](https://github.com/microsoft/jacdac-msr-modules/commit/f2194f4) specify support transport for devices
* [e6b6058](https://github.com/microsoft/jacdac-msr-modules/commit/e6b6058) move to node 14.x
* [03c22d5](https://github.com/microsoft/jacdac-msr-modules/commit/03c22d5) Apply automatic changes
* [7187181](https://github.com/microsoft/jacdac-msr-modules/commit/7187181) require node 16
* [fdbc2ef](https://github.com/microsoft/jacdac-msr-modules/commit/fdbc2ef) handle client reg/commands in makecode generation

## Version 0.17.2

### microsoft/jacdac-msr-modules

* [9b2d3ce](https://github.com/microsoft/jacdac-msr-modules/commit/9b2d3ce) Merge pull request [#35](https://github.com/microsoft/jacdac-msr-modules/pull/35) from microsoft/braille2
* [129f897](https://github.com/microsoft/jacdac-msr-modules/commit/129f897) ncv driver cleanup
* [de4638e](https://github.com/microsoft/jacdac-msr-modules/commit/de4638e) jd-c sync
* [731145f](https://github.com/microsoft/jacdac-msr-modules/commit/731145f) def PIN_CS for jm-v3.3
* [d366806](https://github.com/microsoft/jacdac-msr-modules/commit/d366806) jd-c sync
* [4b7c01b](https://github.com/microsoft/jacdac-msr-modules/commit/4b7c01b) use PIN_CS
* [0dee22a](https://github.com/microsoft/jacdac-msr-modules/commit/0dee22a) update braille timings
* [71d546a](https://github.com/microsoft/jacdac-msr-modules/commit/71d546a) sync jd-c jd-stm
* [afeb271](https://github.com/microsoft/jacdac-msr-modules/commit/afeb271) sync jd-c
* [d8e4e80](https://github.com/microsoft/jacdac-msr-modules/commit/d8e4e80) remove debug scripts from target
* [0bcf771](https://github.com/microsoft/jacdac-msr-modules/commit/0bcf771) Merge remote-tracking branch 'origin' into braille2
* [154ab17](https://github.com/microsoft/jacdac-msr-modules/commit/154ab17) sync jacdac-c
* [0a886db](https://github.com/microsoft/jacdac-msr-modules/commit/0a886db) begin braille service imp
* [0b6a886](https://github.com/microsoft/jacdac-msr-modules/commit/0b6a886) further WIP
* [c3bc372](https://github.com/microsoft/jacdac-msr-modules/commit/c3bc372) more braille tests
* [8641c34](https://github.com/microsoft/jacdac-msr-modules/commit/8641c34) update app, isolate cell
* [e33301d](https://github.com/microsoft/jacdac-msr-modules/commit/e33301d) Merge pull request [#34](https://github.com/microsoft/jacdac-msr-modules/pull/34) from microsoft/drop-targets
* [c3913a6](https://github.com/microsoft/jacdac-msr-modules/commit/c3913a6) add mikrobus to drop targets
* [b0ddc06](https://github.com/microsoft/jacdac-msr-modules/commit/b0ddc06) [skip ci] firmware v0.17.1 built

### microsoft/jacdac-c

* [da4d35a](https://github.com/microsoft/jacdac-c/commit/da4d35a) driver clean up
* [7587f44](https://github.com/microsoft/jacdac-c/commit/7587f44) ifdef guard spi driver
* [08eac36](https://github.com/microsoft/jacdac-c/commit/08eac36) ifdef guard for double def of MIKROBUS_CS
* [ce21922](https://github.com/microsoft/jacdac-c/commit/ce21922) define PIN_CS if not defined
* [f62b2c1](https://github.com/microsoft/jacdac-c/commit/f62b2c1) use PIN_CS instead of MIKROBUS_CS
* [b372c20](https://github.com/microsoft/jacdac-c/commit/b372c20) modify braille up time
* [95045ba](https://github.com/microsoft/jacdac-c/commit/95045ba) make delay static
* [4bb0fec](https://github.com/microsoft/jacdac-c/commit/4bb0fec) update dspi init signature
* [57905aa](https://github.com/microsoft/jacdac-c/commit/57905aa) use MIKROBUS_CS define
* [4afadf2](https://github.com/microsoft/jacdac-c/commit/4afadf2) implemented braille service
* [e017fd4](https://github.com/microsoft/jacdac-c/commit/e017fd4) begin braille service implementation
* [de61ce9](https://github.com/microsoft/jacdac-c/commit/de61ce9) add raw api
* [dd33128](https://github.com/microsoft/jacdac-c/commit/dd33128) Merge branch 'main' of https://github.com/microsoft/jacdac-c into braille2
* [7eef3f9](https://github.com/microsoft/jacdac-c/commit/7eef3f9) decrease delay between writes
* [379ef00](https://github.com/microsoft/jacdac-c/commit/379ef00) more verification of cmds
* [74d8aab](https://github.com/microsoft/jacdac-c/commit/74d8aab) increase delay between writes
* [574634b](https://github.com/microsoft/jacdac-c/commit/574634b) Minor fixes for color sensor

### microsoft/jacdac-stm32x0

* [c402381](https://github.com/microsoft/jacdac-stm32x0/commit/c402381) update dspi signature

## Version 0.17.1

### microsoft/jacdac-msr-modules

* [9176fc0](https://github.com/microsoft/jacdac-msr-modules/commit/9176fc0) Disable DMESG on overflowing module

## Version 0.17.0

### microsoft/jacdac-msr-modules

* [6eb536c](https://github.com/microsoft/jacdac-msr-modules/commit/6eb536c) Update jd-c
* [7be0cbe](https://github.com/microsoft/jacdac-msr-modules/commit/7be0cbe) Try to update drop list
* [5fd62d3](https://github.com/microsoft/jacdac-msr-modules/commit/5fd62d3) Merge pull request [#33](https://github.com/microsoft/jacdac-msr-modules/pull/33) from microsoft/flex-sensor-updates
* [9873241](https://github.com/microsoft/jacdac-msr-modules/commit/9873241) use new flex sensor service
* [4030bcc](https://github.com/microsoft/jacdac-msr-modules/commit/4030bcc) Merge pull request [#32](https://github.com/microsoft/jacdac-msr-modules/pull/32) from microsoft/bump-sub
* [836c6e8](https://github.com/microsoft/jacdac-msr-modules/commit/836c6e8) bump submodules
* [6ec1e27](https://github.com/microsoft/jacdac-msr-modules/commit/6ec1e27) Merge branch 'main' of https://github.com/microsoft/jacdac-msr-modules into bump-sub
* [a2537b0](https://github.com/microsoft/jacdac-msr-modules/commit/a2537b0) sync submodules to latest
* [28f14df](https://github.com/microsoft/jacdac-msr-modules/commit/28f14df) Merge pull request [#31](https://github.com/microsoft/jacdac-msr-modules/pull/31) from microsoft/flex-sensor
* [dfe5fe2](https://github.com/microsoft/jacdac-msr-modules/commit/dfe5fe2) submodule sync
* [ad40c78](https://github.com/microsoft/jacdac-msr-modules/commit/ad40c78) fixup config.mk [access-output]
* [30c033d](https://github.com/microsoft/jacdac-msr-modules/commit/30c033d) change access-switch to g031
* [fc2bbc6](https://github.com/microsoft/jacdac-msr-modules/commit/fc2bbc6) update jacdac-stm32x0 for new adc code
* [8e62eff](https://github.com/microsoft/jacdac-msr-modules/commit/8e62eff) swap from g030 to g031
* [6a46c0d](https://github.com/microsoft/jacdac-msr-modules/commit/6a46c0d) add WIP draft of flex sensor files
* [7e40713](https://github.com/microsoft/jacdac-msr-modules/commit/7e40713) [skip ci] firmware v0.16.7 built

### microsoft/jacdac-c

* [574634b](https://github.com/microsoft/jacdac-c/commit/574634b) Minor fixes for color sensor
* [64a7632](https://github.com/microsoft/jacdac-c/commit/64a7632) Merge pull request [#30](https://github.com/microsoft/jacdac-c/pull/30) from microsoft/flex-sensor-service
* [6f0798b](https://github.com/microsoft/jacdac-c/commit/6f0798b) define flex sensor service
* [7f022f1](https://github.com/microsoft/jacdac-c/commit/7f022f1) depracate FIRMWARE IDENTIFIER
* [b2f37f6](https://github.com/microsoft/jacdac-c/commit/b2f37f6) Merge pull request [#29](https://github.com/microsoft/jacdac-c/pull/29) from microsoft/bump-jacdac
* [f12add5](https://github.com/microsoft/jacdac-c/commit/f12add5) bump jacdac definitions
* [ed3a186](https://github.com/microsoft/jacdac-c/commit/ed3a186) Merge pull request [#28](https://github.com/microsoft/jacdac-c/pull/28) from microsoft/button-update
* [7959fb9](https://github.com/microsoft/jacdac-c/commit/7959fb9) fixup button pressed range

### microsoft/jacdac-msr-modules

* [6db534e](https://github.com/microsoft/jacdac-msr-modules/commit/6db534e) (HEAD) feat: adding flex sensor
* [11c63e7](https://github.com/microsoft/jacdac-msr-modules/commit/11c63e7) adding flex sensor
* [3f50350](https://github.com/microsoft/jacdac-msr-modules/commit/3f50350) updated makecode extension list
* [16bddfa](https://github.com/microsoft/jacdac-msr-modules/commit/16bddfa) Fix for https://github.com/microsoft/jacdac/issues/641
* [2290840](https://github.com/microsoft/jacdac-msr-modules/commit/2290840) fix generated code for descaling / units in makecode
* [31790d5](https://github.com/microsoft/jacdac-msr-modules/commit/31790d5) makecode gen: infer range on u16
* [a47091e](https://github.com/microsoft/jacdac-msr-modules/commit/a47091e) updated package list
* [3f8652d](https://github.com/microsoft/jacdac-msr-modules/commit/3f8652d) Apply automatic changes
* [714878e](https://github.com/microsoft/jacdac-msr-modules/commit/714878e) typo
* [24504a2](https://github.com/microsoft/jacdac-msr-modules/commit/24504a2) renaming led matrix to dot matrix
* [2aa86ac](https://github.com/microsoft/jacdac-msr-modules/commit/2aa86ac) updated specs
* [d6b3786](https://github.com/microsoft/jacdac-msr-modules/commit/d6b3786) Apply automatic changes
* [9bf37ac](https://github.com/microsoft/jacdac-msr-modules/commit/9bf37ac) updated change description
* [4cccbd6](https://github.com/microsoft/jacdac-msr-modules/commit/4cccbd6) added micro:bit v2 picture
* [28a0002](https://github.com/microsoft/jacdac-msr-modules/commit/28a0002) updated makecode extensions
* [6f0539a](https://github.com/microsoft/jacdac-msr-modules/commit/6f0539a) updated sound player play name
* [82b0e7c](https://github.com/microsoft/jacdac-msr-modules/commit/82b0e7c) fix hidAdapter, don't generate restricted commands in makecode
* [d9878a0](https://github.com/microsoft/jacdac-msr-modules/commit/d9878a0) restrict settings
* [6831f65](https://github.com/microsoft/jacdac-msr-modules/commit/6831f65) restrict settings set
* [9115be1](https://github.com/microsoft/jacdac-msr-modules/commit/9115be1) autoamtically generate packinfo correctly
* [5d98e8f](https://github.com/microsoft/jacdac-msr-modules/commit/5d98e8f) adding code generation of typescript snippets
* [b9ed7a0](https://github.com/microsoft/jacdac-msr-modules/commit/b9ed7a0) updated connection constants
* [40efc6b](https://github.com/microsoft/jacdac-msr-modules/commit/40efc6b) removing statistics from hub interface
* [ed5ef6c](https://github.com/microsoft/jacdac-msr-modules/commit/ed5ef6c) removed azure iot hub ping
* [e664c3d](https://github.com/microsoft/jacdac-msr-modules/commit/e664c3d) restore ping comand
* [6735e49](https://github.com/microsoft/jacdac-msr-modules/commit/6735e49) updated specs
* [249d2d9](https://github.com/microsoft/jacdac-msr-modules/commit/249d2d9) comment out azure iot hub service
* [0fd19c8](https://github.com/microsoft/jacdac-msr-modules/commit/0fd19c8) Update protocol.mdx ([#596](https://github.com/microsoft/jacdac-msr-modules/pull/596))
* [1fc0e5a](https://github.com/microsoft/jacdac-msr-modules/commit/1fc0e5a) Remove old testing ([#583](https://github.com/microsoft/jacdac-msr-modules/pull/583))
* [7255ee4](https://github.com/microsoft/jacdac-msr-modules/commit/7255ee4) update qr-url-device-map.csv
* [8d14eea](https://github.com/microsoft/jacdac-msr-modules/commit/8d14eea) cleanup todo
* [30cdb64](https://github.com/microsoft/jacdac-msr-modules/commit/30cdb64) remove outdated hardware file
* [cdd81b4](https://github.com/microsoft/jacdac-msr-modules/commit/cdd81b4) updated set_connection_string to use string
* [5ce466f](https://github.com/microsoft/jacdac-msr-modules/commit/5ce466f) Apply automatic changes
* [db0c0da](https://github.com/microsoft/jacdac-msr-modules/commit/db0c0da) updated health service events
* [478284f](https://github.com/microsoft/jacdac-msr-modules/commit/478284f) Update qr-url-device-map.csv
* [d89aeb3](https://github.com/microsoft/jacdac-msr-modules/commit/d89aeb3) Update qr-url-device-map.csv
* [32e18cc](https://github.com/microsoft/jacdac-msr-modules/commit/32e18cc) use mdx
* [4280798](https://github.com/microsoft/jacdac-msr-modules/commit/4280798) removed identify/reset from hub health
* [717e281](https://github.com/microsoft/jacdac-msr-modules/commit/717e281) updated hub name register
* [4dc6355](https://github.com/microsoft/jacdac-msr-modules/commit/4dc6355) renaming file
* [2dd39b8](https://github.com/microsoft/jacdac-msr-modules/commit/2dd39b8) updated control spec, removed unused registers
* [7147264](https://github.com/microsoft/jacdac-msr-modules/commit/7147264) Service: Azure IoT Heath ([#577](https://github.com/microsoft/jacdac-msr-modules/pull/577))
* [1e3f5f8](https://github.com/microsoft/jacdac-msr-modules/commit/1e3f5f8) adding a few volatiles
* [6e37a0d](https://github.com/microsoft/jacdac-msr-modules/commit/6e37a0d) Apply automatic changes
* [ed863b9](https://github.com/microsoft/jacdac-msr-modules/commit/ed863b9) New picture for gamepad module
* [6ec7e87](https://github.com/microsoft/jacdac-msr-modules/commit/6ec7e87) Add two click board adapters
* [483d23e](https://github.com/microsoft/jacdac-msr-modules/commit/483d23e) Apply automatic changes
* [bc00611](https://github.com/microsoft/jacdac-msr-modules/commit/bc00611) Remove repo and set link on Padauk modules
* [d0a2ad2](https://github.com/microsoft/jacdac-msr-modules/commit/d0a2ad2) split device spec
* [090e8f2](https://github.com/microsoft/jacdac-msr-modules/commit/090e8f2) use stability status for device
* [17a4bc3](https://github.com/microsoft/jacdac-msr-modules/commit/17a4bc3) Apply automatic changes
* [5a88df0](https://github.com/microsoft/jacdac-msr-modules/commit/5a88df0) removing . from path to please github pages
* [407d759](https://github.com/microsoft/jacdac-msr-modules/commit/407d759) deprecated one more
* [58a7d8a](https://github.com/microsoft/jacdac-msr-modules/commit/58a7d8a) fix jdspec tool
* [0e84e54](https://github.com/microsoft/jacdac-msr-modules/commit/0e84e54) support deprecation of devices
* [475ca65](https://github.com/microsoft/jacdac-msr-modules/commit/475ca65) updated device paths
* [5531bcf](https://github.com/microsoft/jacdac-msr-modules/commit/5531bcf) Apply automatic changes
* [f77739d](https://github.com/microsoft/jacdac-msr-modules/commit/f77739d) Add more modules to catalog
* [92a6122](https://github.com/microsoft/jacdac-msr-modules/commit/92a6122) add volatile as modifier on register ([#570](https://github.com/microsoft/jacdac-msr-modules/pull/570))
* [794589f](https://github.com/microsoft/jacdac-msr-modules/commit/794589f) Update qr-url-device-map.csv
* [1ac3d5e](https://github.com/microsoft/jacdac-msr-modules/commit/1ac3d5e) add mikroBUS v3.4
* [2254bb4](https://github.com/microsoft/jacdac-msr-modules/commit/2254bb4) Update qr-url-device-map.csv
* [7780b67](https://github.com/microsoft/jacdac-msr-modules/commit/7780b67) Product Identifiers ([#566](https://github.com/microsoft/jacdac-msr-modules/pull/566))
* [a438aba](https://github.com/microsoft/jacdac-msr-modules/commit/a438aba) add productids to csv (from github dev) :)
* [30979ca](https://github.com/microsoft/jacdac-msr-modules/commit/30979ca) edited from github.dev
* [a0b6e38](https://github.com/microsoft/jacdac-msr-modules/commit/a0b6e38) Merge branch 'main' of https://github.com/microsoft/jacdac
* [709de6f](https://github.com/microsoft/jacdac-msr-modules/commit/709de6f) refresh dist
* [5d961eb](https://github.com/microsoft/jacdac-msr-modules/commit/5d961eb) Apply automatic changes
* [45bb184](https://github.com/microsoft/jacdac-msr-modules/commit/45bb184) added files ([#563](https://github.com/microsoft/jacdac-msr-modules/pull/563))
* [e26a369](https://github.com/microsoft/jacdac-msr-modules/commit/e26a369) typo fixed
* [5253240](https://github.com/microsoft/jacdac-msr-modules/commit/5253240) Update qr-ur-device-map.csv
* [f240cc8](https://github.com/microsoft/jacdac-msr-modules/commit/f240cc8) updated dashify
* [fee0d25](https://github.com/microsoft/jacdac-msr-modules/commit/fee0d25) formatting
* [221099a](https://github.com/microsoft/jacdac-msr-modules/commit/221099a) adding partner previews

### microsoft/jacdac-stm32x0

* [bde901e](https://github.com/microsoft/jacdac-stm32x0/commit/bde901e) depracate firmware identifier
* [59a7304](https://github.com/microsoft/jacdac-stm32x0/commit/59a7304) Merge pull request [#38](https://github.com/microsoft/jacdac-stm32x0/pull/38) from microsoft/OPTR_LEGACY
* [58e37ac](https://github.com/microsoft/jacdac-stm32x0/commit/58e37ac) Merge pull request [#37](https://github.com/microsoft/jacdac-stm32x0/pull/37) from microsoft/flex-sensor
* [9044f93](https://github.com/microsoft/jacdac-stm32x0/commit/9044f93) add check for OPTR_LEGACY_MODE
* [28a2b09](https://github.com/microsoft/jacdac-stm32x0/commit/28a2b09) ifdef guard configured_fixed
* [a3653f4](https://github.com/microsoft/jacdac-stm32x0/commit/a3653f4) update adc code to handle channels 15-17
* [caa56e7](https://github.com/microsoft/jacdac-stm32x0/commit/caa56e7) add adc channel for PA_12

## Version 0.16.7

### microsoft/jacdac-msr-modules

* [4dc49fc](https://github.com/microsoft/jacdac-msr-modules/commit/4dc49fc) Merge branch 'main' of https://github.com/microsoft/jacdac-msr-modules into main
* [b18aa9c](https://github.com/microsoft/jacdac-msr-modules/commit/b18aa9c) add targets to DROP
* [98c7fe3](https://github.com/microsoft/jacdac-msr-modules/commit/98c7fe3) [skip ci] firmware v0.16.6 built

## Version 0.16.6

### microsoft/jacdac-msr-modules

* [9c5dfe7](https://github.com/microsoft/jacdac-msr-modules/commit/9c5dfe7) Merge pull request [#30](https://github.com/microsoft/jacdac-msr-modules/pull/30) from microsoft/swclk_ain
* [b96976f](https://github.com/microsoft/jacdac-msr-modules/commit/b96976f) disable SWCLK for 8 pin packages.
* [39d3869](https://github.com/microsoft/jacdac-msr-modules/commit/39d3869) update board defs and relay polarity
* [09355b3](https://github.com/microsoft/jacdac-msr-modules/commit/09355b3) add option to disable SWCLK/SWD in app mode
* [12fbdb7](https://github.com/microsoft/jacdac-msr-modules/commit/12fbdb7) Merge pull request [#24](https://github.com/microsoft/jacdac-msr-modules/pull/24) from microsoft/relay-1.0
* [a4590c5](https://github.com/microsoft/jacdac-msr-modules/commit/a4590c5) Merge branch 'main' into relay-1.0
* [62c50cf](https://github.com/microsoft/jacdac-msr-modules/commit/62c50cf) submodule update
* [37e6f14](https://github.com/microsoft/jacdac-msr-modules/commit/37e6f14) access switch output 1.1
* [8254b56](https://github.com/microsoft/jacdac-msr-modules/commit/8254b56) [skip ci] firmware v0.16.5 built

### microsoft/jacdac-c

* [3daaccf](https://github.com/microsoft/jacdac-c/commit/3daaccf) Merge pull request [#27](https://github.com/microsoft/jacdac-c/pull/27) from microsoft/active_lo
* [c61cd5f](https://github.com/microsoft/jacdac-c/commit/c61cd5f) Add PIN_LED_ACTIVE_LO define

### microsoft/jacdac-stm32x0

* [e20bcc6](https://github.com/microsoft/jacdac-stm32x0/commit/e20bcc6) Merge pull request [#36](https://github.com/microsoft/jacdac-stm32x0/pull/36) from microsoft/swclk_swd_dis
* [fa57bbc](https://github.com/microsoft/jacdac-stm32x0/commit/fa57bbc) add option to disable SWCLK/SWDIO
* [4f88436](https://github.com/microsoft/jacdac-stm32x0/commit/4f88436) Merge pull request [#35](https://github.com/microsoft/jacdac-stm32x0/pull/35) from microsoft/tts-click

## Version 0.16.5

### microsoft/jacdac-msr-modules

* [289d22b](https://github.com/microsoft/jacdac-msr-modules/commit/289d22b) update click voice
* [6758c50](https://github.com/microsoft/jacdac-msr-modules/commit/6758c50) [skip ci] firmware v0.16.4 built

### microsoft/jacdac-c

* [afb6f7c](https://github.com/microsoft/jacdac-c/commit/afb6f7c) use default voice

## Version 0.16.4

### microsoft/jacdac-msr-modules

* [452e90a](https://github.com/microsoft/jacdac-msr-modules/commit/452e90a) update click tts volume
* [181f398](https://github.com/microsoft/jacdac-msr-modules/commit/181f398) [skip ci] firmware v0.16.3 built

### microsoft/jacdac-c

* [b0a71ed](https://github.com/microsoft/jacdac-c/commit/b0a71ed) increase volume
* [a90b7cb](https://github.com/microsoft/jacdac-c/commit/a90b7cb) Merge pull request [#26](https://github.com/microsoft/jacdac-c/pull/26) from microsoft/tt-click

## Version 0.16.3

### microsoft/jacdac-msr-modules

* [0fa8570](https://github.com/microsoft/jacdac-msr-modules/commit/0fa8570) Merge branch 'main' of https://github.com/microsoft/jacdac-msr-modules into main
* [18ff59e](https://github.com/microsoft/jacdac-msr-modules/commit/18ff59e) add jm-v3.3 to drop targets
* [48131f9](https://github.com/microsoft/jacdac-msr-modules/commit/48131f9) Merge pull request [#28](https://github.com/microsoft/jacdac-msr-modules/pull/28) from microsoft/tts-click
* [03a7ef1](https://github.com/microsoft/jacdac-msr-modules/commit/03a7ef1) sync jacdac-c
* [2011eff](https://github.com/microsoft/jacdac-msr-modules/commit/2011eff) sync jacdac-c
* [1c03028](https://github.com/microsoft/jacdac-msr-modules/commit/1c03028) undo bad changes
* [1862882](https://github.com/microsoft/jacdac-msr-modules/commit/1862882) define RX_CS for jm-3.1
* [2168d43](https://github.com/microsoft/jacdac-msr-modules/commit/2168d43) fixup compile error
* [b2c5e2f](https://github.com/microsoft/jacdac-msr-modules/commit/b2c5e2f) fixup compile error
* [c1dd359](https://github.com/microsoft/jacdac-msr-modules/commit/c1dd359) update jacdac-c
* [6e14a56](https://github.com/microsoft/jacdac-msr-modules/commit/6e14a56) move speech synth app to jm-v3.3
* [5b4e96d](https://github.com/microsoft/jacdac-msr-modules/commit/5b4e96d) Merge branch 'main' into tts-click
* [c7ba4c1](https://github.com/microsoft/jacdac-msr-modules/commit/c7ba4c1) Merge pull request [#29](https://github.com/microsoft/jacdac-msr-modules/pull/29) from microsoft/jm-3.3
* [279bf62](https://github.com/microsoft/jacdac-msr-modules/commit/279bf62) add jm-3.3
* [f3b7948](https://github.com/microsoft/jacdac-msr-modules/commit/f3b7948) update submodules
* [ec9d083](https://github.com/microsoft/jacdac-msr-modules/commit/ec9d083) add tts click code
* [5d7276c](https://github.com/microsoft/jacdac-msr-modules/commit/5d7276c) [skip ci] firmware v0.16.2 built

### microsoft/jacdac-c

* [4b37086](https://github.com/microsoft/jacdac-c/commit/4b37086) use mikrobus defines in glue
* [fa2a720](https://github.com/microsoft/jacdac-c/commit/fa2a720) mikrobus NO_PIN
* [f96072f](https://github.com/microsoft/jacdac-c/commit/f96072f) use mikrobus pin defs
* [c6cee86](https://github.com/microsoft/jacdac-c/commit/c6cee86) default return value for msg rdy
* [660246a](https://github.com/microsoft/jacdac-c/commit/660246a) ifdef guard and duplicate fname cleanup
* [29d12a7](https://github.com/microsoft/jacdac-c/commit/29d12a7) update jacdac submodule
* [54fb20e](https://github.com/microsoft/jacdac-c/commit/54fb20e) Merge branch 'main' into tt-click
* [54eb882](https://github.com/microsoft/jacdac-c/commit/54eb882) add tts click code and service imp
* [3733d09](https://github.com/microsoft/jacdac-c/commit/3733d09) move const into c file
* [9cc807d](https://github.com/microsoft/jacdac-c/commit/9cc807d) WIP: TTS click
* [adbe095](https://github.com/microsoft/jacdac-c/commit/adbe095) WIP: TTS click
* [917881e](https://github.com/microsoft/jacdac-c/commit/917881e) Merge pull request [#24](https://github.com/microsoft/jacdac-c/pull/24) from microsoft/relay-1.0
* [79f73fa](https://github.com/microsoft/jacdac-c/commit/79f73fa) Merge branch 'main' of https://github.com/microsoft/jacdac-c into relay-1.0
* [c57b00f](https://github.com/microsoft/jacdac-c/commit/c57b00f) Unify sensor APIs
* [d14007c](https://github.com/microsoft/jacdac-c/commit/d14007c) add color sleep
* [6c3b3d0](https://github.com/microsoft/jacdac-c/commit/6c3b3d0) support for status codes
* [d4e8907](https://github.com/microsoft/jacdac-c/commit/d4e8907) Fix for events with data
* [796f3e2](https://github.com/microsoft/jacdac-c/commit/796f3e2) Add enabled register for env sensors
* [ca2d97b](https://github.com/microsoft/jacdac-c/commit/ca2d97b) lazy-init env sensors
* [711f61f](https://github.com/microsoft/jacdac-c/commit/711f61f) Add 'inited' bitfield to sensor common
* [8b8ada7](https://github.com/microsoft/jacdac-c/commit/8b8ada7) add relay implementation

### microsoft/jacdac-msr-modules

* [5c11b83](https://github.com/microsoft/jacdac-msr-modules/commit/5c11b83) (HEAD) C# constant generation ([#543](https://github.com/microsoft/jacdac-msr-modules/pull/543))
* [d547890](https://github.com/microsoft/jacdac-msr-modules/commit/d547890) Update qr-url-device-map.csv
* [6e22dd5](https://github.com/microsoft/jacdac-msr-modules/commit/6e22dd5) Update qr-url-device-map.csv
* [2a254b9](https://github.com/microsoft/jacdac-msr-modules/commit/2a254b9) Update qr-url-device-map.csv
* [05ad769](https://github.com/microsoft/jacdac-msr-modules/commit/05ad769) Update qr-url-device-map.csv
* [5d866af](https://github.com/microsoft/jacdac-msr-modules/commit/5d866af) Add slider v1.1 to qr table ([#522](https://github.com/microsoft/jacdac-msr-modules/pull/522))
* [33b747a](https://github.com/microsoft/jacdac-msr-modules/commit/33b747a) Update qr-url-device-map.csv
* [c610279](https://github.com/microsoft/jacdac-msr-modules/commit/c610279) Update qr-url-device-map.csv
* [80899c5](https://github.com/microsoft/jacdac-msr-modules/commit/80899c5) Update qr-url-device-map.csv
* [74e9f7c](https://github.com/microsoft/jacdac-msr-modules/commit/74e9f7c) update resolution ([#497](https://github.com/microsoft/jacdac-msr-modules/pull/497))
* [a0e2e10](https://github.com/microsoft/jacdac-msr-modules/commit/a0e2e10) add JDIoT and Power
* [22c9c19](https://github.com/microsoft/jacdac-msr-modules/commit/22c9c19) Apply automatic changes
* [c22ba99](https://github.com/microsoft/jacdac-msr-modules/commit/c22ba99) Service: HID Configurator ([#408](https://github.com/microsoft/jacdac-msr-modules/pull/408))
* [9595486](https://github.com/microsoft/jacdac-msr-modules/commit/9595486) add servo dual
* [5fffaef](https://github.com/microsoft/jacdac-msr-modules/commit/5fffaef) Add rotary control
* [0e9c446](https://github.com/microsoft/jacdac-msr-modules/commit/0e9c446) Power spec: updates, make stuff optional
* [5f57b0a](https://github.com/microsoft/jacdac-msr-modules/commit/5f57b0a) Update qr-url-device-map.csv
* [22bd192](https://github.com/microsoft/jacdac-msr-modules/commit/22bd192) Add slider to device map ([#490](https://github.com/microsoft/jacdac-msr-modules/pull/490))
* [aa33ed7](https://github.com/microsoft/jacdac-msr-modules/commit/aa33ed7) Update qr-url-device-map.csv
* [94f0c3a](https://github.com/microsoft/jacdac-msr-modules/commit/94f0c3a) udpated csv format
* [0563771](https://github.com/microsoft/jacdac-msr-modules/commit/0563771) Create qr-url-device-map.csv ([#479](https://github.com/microsoft/jacdac-msr-modules/pull/479))
* [740ce7d](https://github.com/microsoft/jacdac-msr-modules/commit/740ce7d) use number for confidence
* [84d0eb8](https://github.com/microsoft/jacdac-msr-modules/commit/84d0eb8) updated event value name
* [1374d58](https://github.com/microsoft/jacdac-msr-modules/commit/1374d58) updated dependable iot
* [4aa7d64](https://github.com/microsoft/jacdac-msr-modules/commit/4aa7d64) Apply automatic changes
* [3be3ccc](https://github.com/microsoft/jacdac-msr-modules/commit/3be3ccc) udpate bytes for template
* [cc9a63c](https://github.com/microsoft/jacdac-msr-modules/commit/cc9a63c) Apply automatic changes
* [e35f46f](https://github.com/microsoft/jacdac-msr-modules/commit/e35f46f) updated service
* [e19761c](https://github.com/microsoft/jacdac-msr-modules/commit/e19761c) hackery
* [db9df35](https://github.com/microsoft/jacdac-msr-modules/commit/db9df35) remove checking for $.global ([#463](https://github.com/microsoft/jacdac-msr-modules/pull/463))
* [956ac9f](https://github.com/microsoft/jacdac-msr-modules/commit/956ac9f) adding (future client) convinience apis on character screen
* [29c251b](https://github.com/microsoft/jacdac-msr-modules/commit/29c251b) patch: build fix
* [970045d](https://github.com/microsoft/jacdac-msr-modules/commit/970045d) add encoding info for string/bytes ([#458](https://github.com/microsoft/jacdac-msr-modules/pull/458))
* [2fd0f99](https://github.com/microsoft/jacdac-msr-modules/commit/2fd0f99) patch: updated service name
* [b3ab568](https://github.com/microsoft/jacdac-msr-modules/commit/b3ab568) Apply automatic changes
* [42ce65c](https://github.com/microsoft/jacdac-msr-modules/commit/42ce65c) added verified telemetry interface ([#410](https://github.com/microsoft/jacdac-msr-modules/pull/410))
* [e8ae74d](https://github.com/microsoft/jacdac-msr-modules/commit/e8ae74d) simplify azure iot service ([#457](https://github.com/microsoft/jacdac-msr-modules/pull/457))
* [2e5ad6e](https://github.com/microsoft/jacdac-msr-modules/commit/2e5ad6e) Apply automatic changes
* [389206e](https://github.com/microsoft/jacdac-msr-modules/commit/389206e) Add orientation information to accelerometer spec ([#448](https://github.com/microsoft/jacdac-msr-modules/pull/448))
* [16f75b4](https://github.com/microsoft/jacdac-msr-modules/commit/16f75b4) mark hid keys as low level
* [ebdf3d4](https://github.com/microsoft/jacdac-msr-modules/commit/ebdf3d4) let -> const
* [2e1b974](https://github.com/microsoft/jacdac-msr-modules/commit/2e1b974) Apply automatic changes
* [1fc0e75](https://github.com/microsoft/jacdac-msr-modules/commit/1fc0e75) fix typo
* [c7700f8](https://github.com/microsoft/jacdac-msr-modules/commit/c7700f8) Apply automatic changes
* [e5a345b](https://github.com/microsoft/jacdac-msr-modules/commit/e5a345b) collect up roles
* [7084430](https://github.com/microsoft/jacdac-msr-modules/commit/7084430) New draft of power service ([#402](https://github.com/microsoft/jacdac-msr-modules/pull/402))
* [3f33123](https://github.com/microsoft/jacdac-msr-modules/commit/3f33123) updated docs on lowlevel, client
* [caa73b4](https://github.com/microsoft/jacdac-msr-modules/commit/caa73b4) client/server flags ([#401](https://github.com/microsoft/jacdac-msr-modules/pull/401))
* [ff536f1](https://github.com/microsoft/jacdac-msr-modules/commit/ff536f1) renamine IT4 -> VM ([#419](https://github.com/microsoft/jacdac-msr-modules/pull/419))
* [79a1677](https://github.com/microsoft/jacdac-msr-modules/commit/79a1677) stronger error checking
* [c17c7e9](https://github.com/microsoft/jacdac-msr-modules/commit/c17c7e9) Event param ([#417](https://github.com/microsoft/jacdac-msr-modules/pull/417))
* [bbeab46](https://github.com/microsoft/jacdac-msr-modules/commit/bbeab46) minor updates ([#411](https://github.com/microsoft/jacdac-msr-modules/pull/411))
* [43b0bcc](https://github.com/microsoft/jacdac-msr-modules/commit/43b0bcc) fix links
* [86b4fa1](https://github.com/microsoft/jacdac-msr-modules/commit/86b4fa1) update jsep
* [2396b79](https://github.com/microsoft/jacdac-msr-modules/commit/2396b79) refactoring to permit expression checking online ([#403](https://github.com/microsoft/jacdac-msr-modules/pull/403))
* [5a9bd06](https://github.com/microsoft/jacdac-msr-modules/commit/5a9bd06) Command support ([#396](https://github.com/microsoft/jacdac-msr-modules/pull/396))
* [cef7318](https://github.com/microsoft/jacdac-msr-modules/commit/cef7318) Merge branch 'main' of https://github.com/microsoft/jacdac
* [0d37424](https://github.com/microsoft/jacdac-msr-modules/commit/0d37424) patch: updated services
* [01978f1](https://github.com/microsoft/jacdac-msr-modules/commit/01978f1) Apply automatic changes
* [1508688](https://github.com/microsoft/jacdac-msr-modules/commit/1508688) added files ([#390](https://github.com/microsoft/jacdac-msr-modules/pull/390))
* [510b0b1](https://github.com/microsoft/jacdac-msr-modules/commit/510b0b1) fix degrees
* [2d38918](https://github.com/microsoft/jacdac-msr-modules/commit/2d38918) Apply automatic changes
* [acd7f49](https://github.com/microsoft/jacdac-msr-modules/commit/acd7f49) refactoring for vm roles ([#385](https://github.com/microsoft/jacdac-msr-modules/pull/385))
* [8bece00](https://github.com/microsoft/jacdac-msr-modules/commit/8bece00) Create codeql-analysis.yml
* [fcb6f86](https://github.com/microsoft/jacdac-msr-modules/commit/fcb6f86) Generate .gts not .g.ts to avoid confusing intellisense ([#384](https://github.com/microsoft/jacdac-msr-modules/pull/384))
* [996bd12](https://github.com/microsoft/jacdac-msr-modules/commit/996bd12) Add some wording on mixins
* [1d649a1](https://github.com/microsoft/jacdac-msr-modules/commit/1d649a1) updated hid keyboard modifier values
* [01866a2](https://github.com/microsoft/jacdac-msr-modules/commit/01866a2) udpated hid mouse constants
* [9dbc569](https://github.com/microsoft/jacdac-msr-modules/commit/9dbc569) Apply automatic changes
* [e635532](https://github.com/microsoft/jacdac-msr-modules/commit/e635532) updated description
* [c7ea868](https://github.com/microsoft/jacdac-msr-modules/commit/c7ea868) updated hid keyboard spec
* [970e7b2](https://github.com/microsoft/jacdac-msr-modules/commit/970e7b2) Add table with service_index values
* [2c416af](https://github.com/microsoft/jacdac-msr-modules/commit/2c416af) Add "padauk" tag to services implemented in jacdac-padauk
* [542c700](https://github.com/microsoft/jacdac-msr-modules/commit/542c700) PR feedback
* [7d3cd51](https://github.com/microsoft/jacdac-msr-modules/commit/7d3cd51) patch: use define syntax
* [06921fc](https://github.com/microsoft/jacdac-msr-modules/commit/06921fc) updated specs
* [5c72d33](https://github.com/microsoft/jacdac-msr-modules/commit/5c72d33) support for consts in spec ([#369](https://github.com/microsoft/jacdac-msr-modules/pull/369))
* [d037c57](https://github.com/microsoft/jacdac-msr-modules/commit/d037c57) tag simple SI-unit services with 8bit ([#370](https://github.com/microsoft/jacdac-msr-modules/pull/370))
* [9296d15](https://github.com/microsoft/jacdac-msr-modules/commit/9296d15) Update SWS delays, fixes [#304](https://github.com/microsoft/jacdac-msr-modules/pull/304)
* [af365ed](https://github.com/microsoft/jacdac-msr-modules/commit/af365ed) early support for generation mpy constants
* [8d1d850](https://github.com/microsoft/jacdac-msr-modules/commit/8d1d850) better bounds on u8 input
* [811d851](https://github.com/microsoft/jacdac-msr-modules/commit/811d851) updated status info
* [70af592](https://github.com/microsoft/jacdac-msr-modules/commit/70af592) keep variants optional

### microsoft/jacdac-stm32x0

* [039838a](https://github.com/microsoft/jacdac-stm32x0/commit/039838a) add synchronous spi implementation
* [1555046](https://github.com/microsoft/jacdac-stm32x0/commit/1555046) SPI_RX DMA 2_3 STMG030
* [0310ed1](https://github.com/microsoft/jacdac-stm32x0/commit/0310ed1) Merge pull request [#34](https://github.com/microsoft/jacdac-stm32x0/pull/34) from microsoft/max-min
* [654d2e5](https://github.com/microsoft/jacdac-stm32x0/commit/654d2e5) max-min
* [f5147a5](https://github.com/microsoft/jacdac-stm32x0/commit/f5147a5) Merge pull request [#33](https://github.com/microsoft/jacdac-stm32x0/pull/33) from microsoft/reset_as_gpio

## Version 0.16.2

### microsoft/jacdac-msr-modules

* [2183172](https://github.com/microsoft/jacdac-msr-modules/commit/2183172) Merge branch 'main' of https://github.com/microsoft/jacdac-msr-modules into main
* [ff03cd0](https://github.com/microsoft/jacdac-msr-modules/commit/ff03cd0) add mikrobus to drop targets
* [f1b47d8](https://github.com/microsoft/jacdac-msr-modules/commit/f1b47d8) [skip ci] firmware v0.16.1 built

## Version 0.16.1

### microsoft/jacdac-msr-modules

* [af68fb8](https://github.com/microsoft/jacdac-msr-modules/commit/af68fb8) Merge branch 'main' of https://github.com/microsoft/jacdac-msr-modules into main
* [d074f21](https://github.com/microsoft/jacdac-msr-modules/commit/d074f21) NO_PIN on PB3
* [0391a11](https://github.com/microsoft/jacdac-msr-modules/commit/0391a11) [skip ci] firmware v0.16.0 built

## Version 0.16.0

### microsoft/jacdac-msr-modules

* [45b3f70](https://github.com/microsoft/jacdac-msr-modules/commit/45b3f70) x6 not x8x6 not x8x6 not x8x6 not x8x6 not x8x6 not x8
* [44561b7](https://github.com/microsoft/jacdac-msr-modules/commit/44561b7) Merge pull request [#27](https://github.com/microsoft/jacdac-msr-modules/pull/27) from microsoft/mikrobus-3.4
* [747b56e](https://github.com/microsoft/jacdac-msr-modules/commit/747b56e) add mikrobus v3.4
* [60029a6](https://github.com/microsoft/jacdac-msr-modules/commit/60029a6) Merge pull request [#26](https://github.com/microsoft/jacdac-msr-modules/pull/26) from microsoft/new-led-modules
* [100d893](https://github.com/microsoft/jacdac-msr-modules/commit/100d893) working generic rgb target
* [5715d87](https://github.com/microsoft/jacdac-msr-modules/commit/5715d87) add generic and bar led targets
* [62a72c7](https://github.com/microsoft/jacdac-msr-modules/commit/62a72c7) Merge pull request [#25](https://github.com/microsoft/jacdac-msr-modules/pull/25) from microsoft/click
* [264031a](https://github.com/microsoft/jacdac-msr-modules/commit/264031a) remove old npx modules (out of flash)
* [483a9eb](https://github.com/microsoft/jacdac-msr-modules/commit/483a9eb) Update jacdac-c
* [944d9d2](https://github.com/microsoft/jacdac-msr-modules/commit/944d9d2) disable shtc3 compensation
* [58097ca](https://github.com/microsoft/jacdac-msr-modules/commit/58097ca) remove outdated #define
* [b0450ba](https://github.com/microsoft/jacdac-msr-modules/commit/b0450ba) Add airquality click module
* [7751a71](https://github.com/microsoft/jacdac-msr-modules/commit/7751a71) change config.mk to stm32g031 (button)
* [abae118](https://github.com/microsoft/jacdac-msr-modules/commit/abae118) add colorclick
* [c7d31ef](https://github.com/microsoft/jacdac-msr-modules/commit/c7d31ef) adapt to sensor API changes
* [ad7afc3](https://github.com/microsoft/jacdac-msr-modules/commit/ad7afc3) [skip ci] firmware v0.15.0 built

### microsoft/jacdac-c

* [d1dd687](https://github.com/microsoft/jacdac-c/commit/d1dd687) (HEAD) Fix aq4 config
* [f8a47ad](https://github.com/microsoft/jacdac-c/commit/f8a47ad) Remove unused file
* [8c648f8](https://github.com/microsoft/jacdac-c/commit/8c648f8) Fix todo
* [8b02aae](https://github.com/microsoft/jacdac-c/commit/8b02aae) move ENV_INIT_* to a header file
* [fdf6faa](https://github.com/microsoft/jacdac-c/commit/fdf6faa) bugfix
* [8885c3a](https://github.com/microsoft/jacdac-c/commit/8885c3a) compute absolute humidity with table lookup+interpolation
* [3126400](https://github.com/microsoft/jacdac-c/commit/3126400) Add absolute humidty calculation
* [cbabd8d](https://github.com/microsoft/jacdac-c/commit/cbabd8d) Add humidity compensation
* [0fd71a0](https://github.com/microsoft/jacdac-c/commit/0fd71a0) no nested sleep
* [3359147](https://github.com/microsoft/jacdac-c/commit/3359147) Add default weak app_process()
* [b77c784](https://github.com/microsoft/jacdac-c/commit/b77c784) Add tvoc and eco2 services
* [603ea64](https://github.com/microsoft/jacdac-c/commit/603ea64) Add glue for airqualit4 click
* [18979e1](https://github.com/microsoft/jacdac-c/commit/18979e1) update jacdac-spec
* [bde53a4](https://github.com/microsoft/jacdac-c/commit/bde53a4) use similar framework for all sensor apis
* [6d45266](https://github.com/microsoft/jacdac-c/commit/6d45266) one sensor header to rule them all
* [541d7bf](https://github.com/microsoft/jacdac-c/commit/541d7bf) add sleep framework
* [55c9a5e](https://github.com/microsoft/jacdac-c/commit/55c9a5e) build fix
* [4a47966](https://github.com/microsoft/jacdac-c/commit/4a47966) unmodified airquality4 click lib
* [701f9cb](https://github.com/microsoft/jacdac-c/commit/701f9cb) Add color service
* [8c528c8](https://github.com/microsoft/jacdac-c/commit/8c528c8) mikroe compat fixes
* [deee9d8](https://github.com/microsoft/jacdac-c/commit/deee9d8) disable outdater power service
* [301a15a](https://github.com/microsoft/jacdac-c/commit/301a15a) rename color_init function
* [a65062b](https://github.com/microsoft/jacdac-c/commit/a65062b) Fix warning
* [6a24270](https://github.com/microsoft/jacdac-c/commit/6a24270) Import color click
* [6e788cf](https://github.com/microsoft/jacdac-c/commit/6e788cf) First draft of MikroE click compat layer
* [bf0ec6a](https://github.com/microsoft/jacdac-c/commit/bf0ec6a) Update README.md

### microsoft/jacdac-msr-modules

* [5c11b83](https://github.com/microsoft/jacdac-msr-modules/commit/5c11b83) (HEAD) C# constant generation ([#543](https://github.com/microsoft/jacdac-msr-modules/pull/543))
* [d547890](https://github.com/microsoft/jacdac-msr-modules/commit/d547890) Update qr-url-device-map.csv
* [6e22dd5](https://github.com/microsoft/jacdac-msr-modules/commit/6e22dd5) Update qr-url-device-map.csv
* [2a254b9](https://github.com/microsoft/jacdac-msr-modules/commit/2a254b9) Update qr-url-device-map.csv
* [05ad769](https://github.com/microsoft/jacdac-msr-modules/commit/05ad769) Update qr-url-device-map.csv
* [5d866af](https://github.com/microsoft/jacdac-msr-modules/commit/5d866af) Add slider v1.1 to qr table ([#522](https://github.com/microsoft/jacdac-msr-modules/pull/522))
* [33b747a](https://github.com/microsoft/jacdac-msr-modules/commit/33b747a) Update qr-url-device-map.csv
* [c610279](https://github.com/microsoft/jacdac-msr-modules/commit/c610279) Update qr-url-device-map.csv
* [80899c5](https://github.com/microsoft/jacdac-msr-modules/commit/80899c5) Update qr-url-device-map.csv
* [74e9f7c](https://github.com/microsoft/jacdac-msr-modules/commit/74e9f7c) update resolution ([#497](https://github.com/microsoft/jacdac-msr-modules/pull/497))
* [a0e2e10](https://github.com/microsoft/jacdac-msr-modules/commit/a0e2e10) add JDIoT and Power
* [22c9c19](https://github.com/microsoft/jacdac-msr-modules/commit/22c9c19) Apply automatic changes
* [c22ba99](https://github.com/microsoft/jacdac-msr-modules/commit/c22ba99) Service: HID Configurator ([#408](https://github.com/microsoft/jacdac-msr-modules/pull/408))
* [9595486](https://github.com/microsoft/jacdac-msr-modules/commit/9595486) add servo dual
* [5fffaef](https://github.com/microsoft/jacdac-msr-modules/commit/5fffaef) Add rotary control
* [0e9c446](https://github.com/microsoft/jacdac-msr-modules/commit/0e9c446) Power spec: updates, make stuff optional
* [5f57b0a](https://github.com/microsoft/jacdac-msr-modules/commit/5f57b0a) Update qr-url-device-map.csv
* [22bd192](https://github.com/microsoft/jacdac-msr-modules/commit/22bd192) Add slider to device map ([#490](https://github.com/microsoft/jacdac-msr-modules/pull/490))
* [aa33ed7](https://github.com/microsoft/jacdac-msr-modules/commit/aa33ed7) Update qr-url-device-map.csv
* [94f0c3a](https://github.com/microsoft/jacdac-msr-modules/commit/94f0c3a) udpated csv format
* [0563771](https://github.com/microsoft/jacdac-msr-modules/commit/0563771) Create qr-url-device-map.csv ([#479](https://github.com/microsoft/jacdac-msr-modules/pull/479))
* [740ce7d](https://github.com/microsoft/jacdac-msr-modules/commit/740ce7d) use number for confidence
* [84d0eb8](https://github.com/microsoft/jacdac-msr-modules/commit/84d0eb8) updated event value name
* [1374d58](https://github.com/microsoft/jacdac-msr-modules/commit/1374d58) updated dependable iot
* [4aa7d64](https://github.com/microsoft/jacdac-msr-modules/commit/4aa7d64) Apply automatic changes
* [3be3ccc](https://github.com/microsoft/jacdac-msr-modules/commit/3be3ccc) udpate bytes for template
* [cc9a63c](https://github.com/microsoft/jacdac-msr-modules/commit/cc9a63c) Apply automatic changes
* [e35f46f](https://github.com/microsoft/jacdac-msr-modules/commit/e35f46f) updated service
* [e19761c](https://github.com/microsoft/jacdac-msr-modules/commit/e19761c) hackery
* [db9df35](https://github.com/microsoft/jacdac-msr-modules/commit/db9df35) remove checking for $.global ([#463](https://github.com/microsoft/jacdac-msr-modules/pull/463))
* [956ac9f](https://github.com/microsoft/jacdac-msr-modules/commit/956ac9f) adding (future client) convinience apis on character screen
* [29c251b](https://github.com/microsoft/jacdac-msr-modules/commit/29c251b) patch: build fix
* [970045d](https://github.com/microsoft/jacdac-msr-modules/commit/970045d) add encoding info for string/bytes ([#458](https://github.com/microsoft/jacdac-msr-modules/pull/458))
* [2fd0f99](https://github.com/microsoft/jacdac-msr-modules/commit/2fd0f99) patch: updated service name
* [b3ab568](https://github.com/microsoft/jacdac-msr-modules/commit/b3ab568) Apply automatic changes
* [42ce65c](https://github.com/microsoft/jacdac-msr-modules/commit/42ce65c) added verified telemetry interface ([#410](https://github.com/microsoft/jacdac-msr-modules/pull/410))
* [e8ae74d](https://github.com/microsoft/jacdac-msr-modules/commit/e8ae74d) simplify azure iot service ([#457](https://github.com/microsoft/jacdac-msr-modules/pull/457))
* [2e5ad6e](https://github.com/microsoft/jacdac-msr-modules/commit/2e5ad6e) Apply automatic changes
* [389206e](https://github.com/microsoft/jacdac-msr-modules/commit/389206e) Add orientation information to accelerometer spec ([#448](https://github.com/microsoft/jacdac-msr-modules/pull/448))
* [16f75b4](https://github.com/microsoft/jacdac-msr-modules/commit/16f75b4) mark hid keys as low level
* [ebdf3d4](https://github.com/microsoft/jacdac-msr-modules/commit/ebdf3d4) let -> const
* [2e1b974](https://github.com/microsoft/jacdac-msr-modules/commit/2e1b974) Apply automatic changes
* [1fc0e75](https://github.com/microsoft/jacdac-msr-modules/commit/1fc0e75) fix typo
* [c7700f8](https://github.com/microsoft/jacdac-msr-modules/commit/c7700f8) Apply automatic changes
* [e5a345b](https://github.com/microsoft/jacdac-msr-modules/commit/e5a345b) collect up roles
* [7084430](https://github.com/microsoft/jacdac-msr-modules/commit/7084430) New draft of power service ([#402](https://github.com/microsoft/jacdac-msr-modules/pull/402))
* [3f33123](https://github.com/microsoft/jacdac-msr-modules/commit/3f33123) updated docs on lowlevel, client
* [caa73b4](https://github.com/microsoft/jacdac-msr-modules/commit/caa73b4) client/server flags ([#401](https://github.com/microsoft/jacdac-msr-modules/pull/401))
* [ff536f1](https://github.com/microsoft/jacdac-msr-modules/commit/ff536f1) renamine IT4 -> VM ([#419](https://github.com/microsoft/jacdac-msr-modules/pull/419))
* [79a1677](https://github.com/microsoft/jacdac-msr-modules/commit/79a1677) stronger error checking
* [c17c7e9](https://github.com/microsoft/jacdac-msr-modules/commit/c17c7e9) Event param ([#417](https://github.com/microsoft/jacdac-msr-modules/pull/417))
* [bbeab46](https://github.com/microsoft/jacdac-msr-modules/commit/bbeab46) minor updates ([#411](https://github.com/microsoft/jacdac-msr-modules/pull/411))
* [43b0bcc](https://github.com/microsoft/jacdac-msr-modules/commit/43b0bcc) fix links
* [86b4fa1](https://github.com/microsoft/jacdac-msr-modules/commit/86b4fa1) update jsep
* [2396b79](https://github.com/microsoft/jacdac-msr-modules/commit/2396b79) refactoring to permit expression checking online ([#403](https://github.com/microsoft/jacdac-msr-modules/pull/403))
* [5a9bd06](https://github.com/microsoft/jacdac-msr-modules/commit/5a9bd06) Command support ([#396](https://github.com/microsoft/jacdac-msr-modules/pull/396))
* [cef7318](https://github.com/microsoft/jacdac-msr-modules/commit/cef7318) Merge branch 'main' of https://github.com/microsoft/jacdac
* [0d37424](https://github.com/microsoft/jacdac-msr-modules/commit/0d37424) patch: updated services
* [01978f1](https://github.com/microsoft/jacdac-msr-modules/commit/01978f1) Apply automatic changes
* [1508688](https://github.com/microsoft/jacdac-msr-modules/commit/1508688) added files ([#390](https://github.com/microsoft/jacdac-msr-modules/pull/390))
* [510b0b1](https://github.com/microsoft/jacdac-msr-modules/commit/510b0b1) fix degrees
* [2d38918](https://github.com/microsoft/jacdac-msr-modules/commit/2d38918) Apply automatic changes
* [acd7f49](https://github.com/microsoft/jacdac-msr-modules/commit/acd7f49) refactoring for vm roles ([#385](https://github.com/microsoft/jacdac-msr-modules/pull/385))
* [8bece00](https://github.com/microsoft/jacdac-msr-modules/commit/8bece00) Create codeql-analysis.yml
* [fcb6f86](https://github.com/microsoft/jacdac-msr-modules/commit/fcb6f86) Generate .gts not .g.ts to avoid confusing intellisense ([#384](https://github.com/microsoft/jacdac-msr-modules/pull/384))
* [996bd12](https://github.com/microsoft/jacdac-msr-modules/commit/996bd12) Add some wording on mixins
* [1d649a1](https://github.com/microsoft/jacdac-msr-modules/commit/1d649a1) updated hid keyboard modifier values
* [01866a2](https://github.com/microsoft/jacdac-msr-modules/commit/01866a2) udpated hid mouse constants
* [9dbc569](https://github.com/microsoft/jacdac-msr-modules/commit/9dbc569) Apply automatic changes
* [e635532](https://github.com/microsoft/jacdac-msr-modules/commit/e635532) updated description
* [c7ea868](https://github.com/microsoft/jacdac-msr-modules/commit/c7ea868) updated hid keyboard spec
* [970e7b2](https://github.com/microsoft/jacdac-msr-modules/commit/970e7b2) Add table with service_index values
* [2c416af](https://github.com/microsoft/jacdac-msr-modules/commit/2c416af) Add "padauk" tag to services implemented in jacdac-padauk
* [542c700](https://github.com/microsoft/jacdac-msr-modules/commit/542c700) PR feedback
* [7d3cd51](https://github.com/microsoft/jacdac-msr-modules/commit/7d3cd51) patch: use define syntax
* [06921fc](https://github.com/microsoft/jacdac-msr-modules/commit/06921fc) updated specs
* [5c72d33](https://github.com/microsoft/jacdac-msr-modules/commit/5c72d33) support for consts in spec ([#369](https://github.com/microsoft/jacdac-msr-modules/pull/369))
* [d037c57](https://github.com/microsoft/jacdac-msr-modules/commit/d037c57) tag simple SI-unit services with 8bit ([#370](https://github.com/microsoft/jacdac-msr-modules/pull/370))
* [9296d15](https://github.com/microsoft/jacdac-msr-modules/commit/9296d15) Update SWS delays, fixes [#304](https://github.com/microsoft/jacdac-msr-modules/pull/304)
* [af365ed](https://github.com/microsoft/jacdac-msr-modules/commit/af365ed) early support for generation mpy constants
* [8d1d850](https://github.com/microsoft/jacdac-msr-modules/commit/8d1d850) better bounds on u8 input
* [811d851](https://github.com/microsoft/jacdac-msr-modules/commit/811d851) updated status info
* [70af592](https://github.com/microsoft/jacdac-msr-modules/commit/70af592) keep variants optional

### microsoft/jacdac-stm32x0

* [c7cd9dd](https://github.com/microsoft/jacdac-stm32x0/commit/c7cd9dd) add pwm pin mappings and SPI2 for G03x
* [b0a57e5](https://github.com/microsoft/jacdac-stm32x0/commit/b0a57e5) more explicit OPTR_MODE check
* [e66f911](https://github.com/microsoft/jacdac-stm32x0/commit/e66f911) WIP dspi and init config
* [6b307c8](https://github.com/microsoft/jacdac-stm32x0/commit/6b307c8) initial implementation of RESET_AS_GPIO CFG
* [be2749e](https://github.com/microsoft/jacdac-stm32x0/commit/be2749e) use new jd_process_everything()
* [62412f0](https://github.com/microsoft/jacdac-stm32x0/commit/62412f0) Build click libs

## Version 0.15.0

### microsoft/jacdac-msr-modules

* [43ec43e](https://github.com/microsoft/jacdac-msr-modules/commit/43ec43e) Update submodules to latest
* [e0cd4ac](https://github.com/microsoft/jacdac-msr-modules/commit/e0cd4ac) Merge pull request [#23](https://github.com/microsoft/jacdac-msr-modules/pull/23) from microsoft/slider-1.1
* [e4ad243](https://github.com/microsoft/jacdac-msr-modules/commit/e4ad243) Add slider 1.1 target files
* [817baa1](https://github.com/microsoft/jacdac-msr-modules/commit/817baa1) Merge pull request [#16](https://github.com/microsoft/jacdac-msr-modules/pull/16) from microsoft/g0-button
* [dfdde36](https://github.com/microsoft/jacdac-msr-modules/commit/dfdde36) sync submodule
* [c990cea](https://github.com/microsoft/jacdac-msr-modules/commit/c990cea) add new button version
* [e29080f](https://github.com/microsoft/jacdac-msr-modules/commit/e29080f) Merge branch 'main' of https://github.com/microsoft/jacdac-msr-modules into g0-button
* [154ba03](https://github.com/microsoft/jacdac-msr-modules/commit/154ba03) fix accelerometer xes
* [839f3e4](https://github.com/microsoft/jacdac-msr-modules/commit/839f3e4) Merge pull request [#22](https://github.com/microsoft/jacdac-msr-modules/pull/22) from microsoft/jm-access-switch-1.3
* [35ab805](https://github.com/microsoft/jacdac-msr-modules/commit/35ab805) add files for access switch input 1.3
* [4098c1e](https://github.com/microsoft/jacdac-msr-modules/commit/4098c1e) Merge pull request [#21](https://github.com/microsoft/jacdac-msr-modules/pull/21) from microsoft/jm-rgb-led-ring
* [6acd670](https://github.com/microsoft/jacdac-msr-modules/commit/6acd670) update submodule to include blpwm pinmap
* [558d1af](https://github.com/microsoft/jacdac-msr-modules/commit/558d1af) Merge branch 'main' into jm-rgb-led-ring
* [ac662f9](https://github.com/microsoft/jacdac-msr-modules/commit/ac662f9) Merge pull request [#19](https://github.com/microsoft/jacdac-msr-modules/pull/19) from microsoft/temp-humidity-1.1
* [9f6807a](https://github.com/microsoft/jacdac-msr-modules/commit/9f6807a) Merge pull request [#18](https://github.com/microsoft/jacdac-msr-modules/pull/18) from microsoft/accelerometer-1.0
* [8cd3fef](https://github.com/microsoft/jacdac-msr-modules/commit/8cd3fef) Merge pull request [#20](https://github.com/microsoft/jacdac-msr-modules/pull/20) from microsoft/rotary-1.1
* [84c4b2f](https://github.com/microsoft/jacdac-msr-modules/commit/84c4b2f) Merge pull request [#17](https://github.com/microsoft/jacdac-msr-modules/pull/17) from microsoft/g0-slider-49-1.0
* [7eac70b](https://github.com/microsoft/jacdac-msr-modules/commit/7eac70b) more comments on calibration
* [91d2342](https://github.com/microsoft/jacdac-msr-modules/commit/91d2342) add files for rotary controll 1.1
* [aff2655](https://github.com/microsoft/jacdac-msr-modules/commit/aff2655) add files for new revision of temp + humidity
* [873c055](https://github.com/microsoft/jacdac-msr-modules/commit/873c055) add files for accelerometer revision 1.0
* [31949ce](https://github.com/microsoft/jacdac-msr-modules/commit/31949ce) WIP: new version of rgb led ring
* [f47160c](https://github.com/microsoft/jacdac-msr-modules/commit/f47160c) Fix green LED pinning
* [32864f9](https://github.com/microsoft/jacdac-msr-modules/commit/32864f9) uncomment the LED pindef
* [521a088](https://github.com/microsoft/jacdac-msr-modules/commit/521a088) apparently things work now
* [bc1bf53](https://github.com/microsoft/jacdac-msr-modules/commit/bc1bf53) skeleton but not working
* [842ca43](https://github.com/microsoft/jacdac-msr-modules/commit/842ca43) update submodule!
* [dc4a657](https://github.com/microsoft/jacdac-msr-modules/commit/dc4a657) update button pin map
* [0ed57da](https://github.com/microsoft/jacdac-msr-modules/commit/0ed57da) WIP: add G0 button module
* [0762999](https://github.com/microsoft/jacdac-msr-modules/commit/0762999) Merge pull request [#15](https://github.com/microsoft/jacdac-msr-modules/pull/15) from microsoft/accelerometer
* [e0cbdc4](https://github.com/microsoft/jacdac-msr-modules/commit/e0cbdc4) transform accelerometer data
* [e183828](https://github.com/microsoft/jacdac-msr-modules/commit/e183828) disable dmesg
* [7002be8](https://github.com/microsoft/jacdac-msr-modules/commit/7002be8) add new accelerometer module to drop targets
* [2cf5069](https://github.com/microsoft/jacdac-msr-modules/commit/2cf5069) add accelerometer files
* [23d395f](https://github.com/microsoft/jacdac-msr-modules/commit/23d395f) Merge pull request [#14](https://github.com/microsoft/jacdac-msr-modules/pull/14) from microsoft/RGB_LED_RING
* [32d639b](https://github.com/microsoft/jacdac-msr-modules/commit/32d639b) remove pwr from npx.c
* [1a4e1dd](https://github.com/microsoft/jacdac-msr-modules/commit/1a4e1dd) update submodule
* [481340b](https://github.com/microsoft/jacdac-msr-modules/commit/481340b) update submodule
* [9ac1796](https://github.com/microsoft/jacdac-msr-modules/commit/9ac1796) add G0-based RGB LED ring
* [c903261](https://github.com/microsoft/jacdac-msr-modules/commit/c903261) Update codeql-analysis.yml
* [6b6aca4](https://github.com/microsoft/jacdac-msr-modules/commit/6b6aca4) Update codeql-analysis.yml
* [8e13c55](https://github.com/microsoft/jacdac-msr-modules/commit/8e13c55) Update codeql-analysis.yml
* [b9e6ee3](https://github.com/microsoft/jacdac-msr-modules/commit/b9e6ee3) Create codeql-analysis.yml
* [e8d5166](https://github.com/microsoft/jacdac-msr-modules/commit/e8d5166) Merge pull request [#12](https://github.com/microsoft/jacdac-msr-modules/pull/12) from microsoft/rotary_control
* [fdd3bf8](https://github.com/microsoft/jacdac-msr-modules/commit/fdd3bf8) Merge pull request [#13](https://github.com/microsoft/jacdac-msr-modules/pull/13) from microsoft/xac_release
* [c93c7b0](https://github.com/microsoft/jacdac-msr-modules/commit/c93c7b0) add xac input [release]
* [cdcfb7a](https://github.com/microsoft/jacdac-msr-modules/commit/cdcfb7a) add rotary control boards
* [85536a1](https://github.com/microsoft/jacdac-msr-modules/commit/85536a1) Merge pull request [#11](https://github.com/microsoft/jacdac-msr-modules/pull/11) from microsoft/servo_dual
* [2bc580a](https://github.com/microsoft/jacdac-msr-modules/commit/2bc580a) Merge branch 'main' of https://github.com/microsoft/jacdac-msr-modules into servo_dual
* [6d4e345](https://github.com/microsoft/jacdac-msr-modules/commit/6d4e345) update jacdac-c
* [e414329](https://github.com/microsoft/jacdac-msr-modules/commit/e414329) PR feedback
* [5138bfa](https://github.com/microsoft/jacdac-msr-modules/commit/5138bfa) servo updates
* [4f5ced8](https://github.com/microsoft/jacdac-msr-modules/commit/4f5ced8) update other servo_init calls
* [e9ef592](https://github.com/microsoft/jacdac-msr-modules/commit/e9ef592) update servo init code and submodules
* [78d3f9f](https://github.com/microsoft/jacdac-msr-modules/commit/78d3f9f) sync submodules
* [8ecc6cb](https://github.com/microsoft/jacdac-msr-modules/commit/8ecc6cb) added submodule note
* [9c9c458](https://github.com/microsoft/jacdac-msr-modules/commit/9c9c458) [skip ci] firmware v0.14.1 built

### microsoft/jacdac-c

* [23f448a](https://github.com/microsoft/jacdac-c/commit/23f448a) Protect against possible race
* [51051da](https://github.com/microsoft/jacdac-c/commit/51051da) remove codeql
* [b3d2809](https://github.com/microsoft/jacdac-c/commit/b3d2809) Update codeql-analysis.yml
* [e3d343a](https://github.com/microsoft/jacdac-c/commit/e3d343a) Update codeql-analysis.yml
* [6de80ab](https://github.com/microsoft/jacdac-c/commit/6de80ab) remove autobuild
* [2e0fe2d](https://github.com/microsoft/jacdac-c/commit/2e0fe2d) Create codeql-analysis.yml
* [6adc595](https://github.com/microsoft/jacdac-c/commit/6adc595) Merge pull request [#22](https://github.com/microsoft/jacdac-c/pull/22) from microsoft/servo_dual
* [1d22031](https://github.com/microsoft/jacdac-c/commit/1d22031) PR feedback
* [f952675](https://github.com/microsoft/jacdac-c/commit/f952675) reorder state struct and correct padding
* [47112b9](https://github.com/microsoft/jacdac-c/commit/47112b9) More PR feedback
* [af359fc](https://github.com/microsoft/jacdac-c/commit/af359fc) PR feedback
* [76649a2](https://github.com/microsoft/jacdac-c/commit/76649a2) Merge branch 'main' of https://github.com/microsoft/jacdac-c into servo_dual
* [2340d53](https://github.com/microsoft/jacdac-c/commit/2340d53) Adjust timing
* [f1cc36d](https://github.com/microsoft/jacdac-c/commit/f1cc36d) Increase max start timeout to 200us (see https://github.com/microsoft/jacdac/issues/304)
* [a182afc](https://github.com/microsoft/jacdac-c/commit/a182afc) add LED service
* [9f1b250](https://github.com/microsoft/jacdac-c/commit/9f1b250) status light frame size is 65.536ms
* [37606e7](https://github.com/microsoft/jacdac-c/commit/37606e7) Add support for optional registers
* [39c563e](https://github.com/microsoft/jacdac-c/commit/39c563e) ADC read now 16-bit
* [0f8048f](https://github.com/microsoft/jacdac-c/commit/0f8048f) Use new PIN_PULL_* constants
* [c159f1b](https://github.com/microsoft/jacdac-c/commit/c159f1b) Connected-blink on client announce
* [ddba7c7](https://github.com/microsoft/jacdac-c/commit/ddba7c7) Bring joystick to feature parity with arcadegamepad (now removed)
* [36f22d9](https://github.com/microsoft/jacdac-c/commit/36f22d9) Rename analog_joystick to joystick
* [02c2a26](https://github.com/microsoft/jacdac-c/commit/02c2a26) Use the new format description for announce flags
* [7b8c8b7](https://github.com/microsoft/jacdac-c/commit/7b8c8b7) Implement the new joystick service (w/ buttons)
* [7c045a6](https://github.com/microsoft/jacdac-c/commit/7c045a6) Add NO_PIN and PIN_PULL_* constants
* [bd09847](https://github.com/microsoft/jacdac-c/commit/bd09847) Make identify command optional
* [83899ba](https://github.com/microsoft/jacdac-c/commit/83899ba) rename function prefixes to match service name

### microsoft/jacdac-msr-modules

* [5dc23ec](https://github.com/microsoft/jacdac-msr-modules/commit/5dc23ec) (HEAD) add makecode power extenions
* [e01f39e](https://github.com/microsoft/jacdac-msr-modules/commit/e01f39e) identify implementation ([#363](https://github.com/microsoft/jacdac-msr-modules/pull/363))
* [672eb1f](https://github.com/microsoft/jacdac-msr-modules/commit/672eb1f) patch: use # unit for counters
* [69f915e](https://github.com/microsoft/jacdac-msr-modules/commit/69f915e) re-work joystick to also support gamepad ([#360](https://github.com/microsoft/jacdac-msr-modules/pull/360))
* [6e30903](https://github.com/microsoft/jacdac-msr-modules/commit/6e30903) Propose new LED blinking patterns ([#358](https://github.com/microsoft/jacdac-msr-modules/pull/358))
* [8ef389d](https://github.com/microsoft/jacdac-msr-modules/commit/8ef389d) patch: mention mixins
* [4a62ad0](https://github.com/microsoft/jacdac-msr-modules/commit/4a62ad0) analog button service ([#357](https://github.com/microsoft/jacdac-msr-modules/pull/357))
* [b21f112](https://github.com/microsoft/jacdac-msr-modules/commit/b21f112) Apply automatic changes
* [d937ed7](https://github.com/microsoft/jacdac-msr-modules/commit/d937ed7) don't deprecate idenfity ([#338](https://github.com/microsoft/jacdac-msr-modules/pull/338))
* [5ed8a04](https://github.com/microsoft/jacdac-msr-modules/commit/5ed8a04) threatmodel
* [9543156](https://github.com/microsoft/jacdac-msr-modules/commit/9543156) don't codegen generinc

### microsoft/jacdac-stm32x0

* [47462a0](https://github.com/microsoft/jacdac-stm32x0/commit/47462a0) improve stats extraction from map file
* [242d240](https://github.com/microsoft/jacdac-stm32x0/commit/242d240) add new blpwm pin and timer mappings
* [d6da5a1](https://github.com/microsoft/jacdac-stm32x0/commit/d6da5a1) Support for STM32G030
* [885c578](https://github.com/microsoft/jacdac-stm32x0/commit/885c578) Merge pull request [#32](https://github.com/microsoft/jacdac-stm32x0/pull/32) from microsoft/pa1-g0-blpwm
* [b8e2d5a](https://github.com/microsoft/jacdac-stm32x0/commit/b8e2d5a) add pa1 to bl pin map
* [2981351](https://github.com/microsoft/jacdac-stm32x0/commit/2981351) Merge pull request [#30](https://github.com/microsoft/jacdac-stm32x0/pull/30) from microsoft/RGB_LED_RING
* [562abe6](https://github.com/microsoft/jacdac-stm32x0/commit/562abe6) PR feedback: add comments for 48 MHz
* [84cbc39](https://github.com/microsoft/jacdac-stm32x0/commit/84cbc39) remove PLL_MHZ==64
* [eabba7b](https://github.com/microsoft/jacdac-stm32x0/commit/eabba7b) Support x6 G0 variant, and add PWM/Timer/Clock support
* [af8f394](https://github.com/microsoft/jacdac-stm32x0/commit/af8f394) Delete codeql-analysis.yml
* [d7b4625](https://github.com/microsoft/jacdac-stm32x0/commit/d7b4625) Update codeql-analysis.yml
* [168bf50](https://github.com/microsoft/jacdac-stm32x0/commit/168bf50) Update codeql-analysis.yml
* [0e96d62](https://github.com/microsoft/jacdac-stm32x0/commit/0e96d62) Create codeql-analysis.yml
* [445682d](https://github.com/microsoft/jacdac-stm32x0/commit/445682d) ADC read now 16-bit
* [d64c81d](https://github.com/microsoft/jacdac-stm32x0/commit/d64c81d) Use new PIN_PULL_* constants
* [69469bb](https://github.com/microsoft/jacdac-stm32x0/commit/69469bb) Use the new NO_PIN constants
* [827342b](https://github.com/microsoft/jacdac-stm32x0/commit/827342b) Merge pull request [#27](https://github.com/microsoft/jacdac-stm32x0/pull/27) from microsoft/rgb_ring
* [1b72d78](https://github.com/microsoft/jacdac-stm32x0/commit/1b72d78) clarify "Adding new modules"
* [fc2a7b6](https://github.com/microsoft/jacdac-stm32x0/commit/fc2a7b6) Messages on flash/build OK; fixes [#23](https://github.com/microsoft/jacdac-stm32x0/pull/23)
* [36ced42](https://github.com/microsoft/jacdac-stm32x0/commit/36ced42) minor readme updates ([#22](https://github.com/microsoft/jacdac-stm32x0/pull/22))
* [a047916](https://github.com/microsoft/jacdac-stm32x0/commit/a047916) Merge branch 'master' into rgb_ring
* [7d88f70](https://github.com/microsoft/jacdac-stm32x0/commit/7d88f70) add board.h include to processor files
* [7b7c3e5](https://github.com/microsoft/jacdac-stm32x0/commit/7b7c3e5) add stm32f030 def to dspi

## Version 0.14.1

### microsoft/jacdac-msr-modules

* [f54f69e](https://github.com/microsoft/jacdac-msr-modules/commit/f54f69e) add example of LED service using H-bridge driver
* [550c27b](https://github.com/microsoft/jacdac-msr-modules/commit/550c27b) ADC read now 16-bit
* [4d25d27](https://github.com/microsoft/jacdac-msr-modules/commit/4d25d27) [skip ci] firmware v0.14.0 built

### microsoft/jacdac-c

* [a182afc](https://github.com/microsoft/jacdac-c/commit/a182afc) add LED service
* [9f1b250](https://github.com/microsoft/jacdac-c/commit/9f1b250) status light frame size is 65.536ms
* [37606e7](https://github.com/microsoft/jacdac-c/commit/37606e7) Add support for optional registers
* [39c563e](https://github.com/microsoft/jacdac-c/commit/39c563e) ADC read now 16-bit

### microsoft/jacdac-stm32x0

* [445682d](https://github.com/microsoft/jacdac-stm32x0/commit/445682d) ADC read now 16-bit

## Version 0.14.0

### microsoft/jacdac-msr-modules

* [c16894b](https://github.com/microsoft/jacdac-msr-modules/commit/c16894b) Use new PIN_PULL_* constants
* [1cf37e7](https://github.com/microsoft/jacdac-msr-modules/commit/1cf37e7) Adapt to new joystick APIs
* [3281c53](https://github.com/microsoft/jacdac-msr-modules/commit/3281c53) init functions were renamed to match service names
* [176271b](https://github.com/microsoft/jacdac-msr-modules/commit/176271b) [skip ci] firmware v0.13.0 built

### microsoft/jacdac-c

* [0f8048f](https://github.com/microsoft/jacdac-c/commit/0f8048f) Use new PIN_PULL_* constants
* [c159f1b](https://github.com/microsoft/jacdac-c/commit/c159f1b) Connected-blink on client announce
* [ddba7c7](https://github.com/microsoft/jacdac-c/commit/ddba7c7) Bring joystick to feature parity with arcadegamepad (now removed)
* [36f22d9](https://github.com/microsoft/jacdac-c/commit/36f22d9) Rename analog_joystick to joystick
* [02c2a26](https://github.com/microsoft/jacdac-c/commit/02c2a26) Use the new format description for announce flags
* [7b8c8b7](https://github.com/microsoft/jacdac-c/commit/7b8c8b7) Implement the new joystick service (w/ buttons)
* [7c045a6](https://github.com/microsoft/jacdac-c/commit/7c045a6) Add NO_PIN and PIN_PULL_* constants
* [bd09847](https://github.com/microsoft/jacdac-c/commit/bd09847) Make identify command optional
* [83899ba](https://github.com/microsoft/jacdac-c/commit/83899ba) rename function prefixes to match service name
* [2628d6b](https://github.com/microsoft/jacdac-c/commit/2628d6b) Add support for JD_CONFIG_DEV_SPEC_URL/app_spec_url
* [00912d4](https://github.com/microsoft/jacdac-c/commit/00912d4) Use generated constants

### microsoft/jacdac-msr-modules

* [5dc23ec](https://github.com/microsoft/jacdac-msr-modules/commit/5dc23ec) add makecode power extenions
* [e01f39e](https://github.com/microsoft/jacdac-msr-modules/commit/e01f39e) identify implementation ([#363](https://github.com/microsoft/jacdac-msr-modules/pull/363))
* [672eb1f](https://github.com/microsoft/jacdac-msr-modules/commit/672eb1f) patch: use # unit for counters
* [69f915e](https://github.com/microsoft/jacdac-msr-modules/commit/69f915e) re-work joystick to also support gamepad ([#360](https://github.com/microsoft/jacdac-msr-modules/pull/360))
* [6e30903](https://github.com/microsoft/jacdac-msr-modules/commit/6e30903) Propose new LED blinking patterns ([#358](https://github.com/microsoft/jacdac-msr-modules/pull/358))
* [8ef389d](https://github.com/microsoft/jacdac-msr-modules/commit/8ef389d) patch: mention mixins
* [4a62ad0](https://github.com/microsoft/jacdac-msr-modules/commit/4a62ad0) analog button service ([#357](https://github.com/microsoft/jacdac-msr-modules/pull/357))
* [b21f112](https://github.com/microsoft/jacdac-msr-modules/commit/b21f112) Apply automatic changes
* [d937ed7](https://github.com/microsoft/jacdac-msr-modules/commit/d937ed7) don't deprecate idenfity ([#338](https://github.com/microsoft/jacdac-msr-modules/pull/338))
* [5ed8a04](https://github.com/microsoft/jacdac-msr-modules/commit/5ed8a04) threatmodel
* [9543156](https://github.com/microsoft/jacdac-msr-modules/commit/9543156) don't codegen generinc
* [4dac15a](https://github.com/microsoft/jacdac-msr-modules/commit/4dac15a) Add constants for word0 of ctrl announce
* [0965638](https://github.com/microsoft/jacdac-msr-modules/commit/0965638) support for min_value, max_value registers
* [fcecddd](https://github.com/microsoft/jacdac-msr-modules/commit/fcecddd) detect conflicts between const and ro regs fix led and realtimeclock conflicts

### microsoft/jacdac-stm32x0

* [d64c81d](https://github.com/microsoft/jacdac-stm32x0/commit/d64c81d) Use new PIN_PULL_* constants
* [69469bb](https://github.com/microsoft/jacdac-stm32x0/commit/69469bb) Use the new NO_PIN constants
* [827342b](https://github.com/microsoft/jacdac-stm32x0/commit/827342b) Merge pull request [#27](https://github.com/microsoft/jacdac-stm32x0/pull/27) from microsoft/rgb_ring
* [1b72d78](https://github.com/microsoft/jacdac-stm32x0/commit/1b72d78) clarify "Adding new modules"
* [fc2a7b6](https://github.com/microsoft/jacdac-stm32x0/commit/fc2a7b6) Messages on flash/build OK; fixes [#23](https://github.com/microsoft/jacdac-stm32x0/pull/23)
* [36ced42](https://github.com/microsoft/jacdac-stm32x0/commit/36ced42) minor readme updates ([#22](https://github.com/microsoft/jacdac-stm32x0/pull/22))
* [a047916](https://github.com/microsoft/jacdac-stm32x0/commit/a047916) Merge branch 'master' into rgb_ring
* [7d88f70](https://github.com/microsoft/jacdac-stm32x0/commit/7d88f70) add board.h include to processor files
* [7b7c3e5](https://github.com/microsoft/jacdac-stm32x0/commit/7b7c3e5) add stm32f030 def to dspi
* [0adef8d](https://github.com/microsoft/jacdac-stm32x0/commit/0adef8d) support for including jacdac-c from "/services/"
* [2651bfa](https://github.com/microsoft/jacdac-stm32x0/commit/2651bfa) Use generated constants

## Version 0.13.0

### microsoft/jacdac-msr-modules

* [ead1369](https://github.com/microsoft/jacdac-msr-modules/commit/ead1369) Incorporate new announce flags
* [0b671b2](https://github.com/microsoft/jacdac-msr-modules/commit/0b671b2) update pointer
* [011ebf8](https://github.com/microsoft/jacdac-msr-modules/commit/011ebf8) Use variant support in led pixels
* [062fb71](https://github.com/microsoft/jacdac-msr-modules/commit/062fb71) Build fix
* [6b7c83e](https://github.com/microsoft/jacdac-msr-modules/commit/6b7c83e) update pointers
* [7d0b851](https://github.com/microsoft/jacdac-msr-modules/commit/7d0b851) [skip ci] firmware v0.12.5 built

### microsoft/jacdac-c

* [05803ac](https://github.com/microsoft/jacdac-c/commit/05803ac) Add various device flags to announce packet ([#20](https://github.com/microsoft/jacdac-c/pull/20))
* [191e54f](https://github.com/microsoft/jacdac-c/commit/191e54f) update button implementation ([#19](https://github.com/microsoft/jacdac-c/pull/19))
* [aedda1a](https://github.com/microsoft/jacdac-c/commit/aedda1a) Add variant support to ledpixels
* [72f2b9e](https://github.com/microsoft/jacdac-c/commit/72f2b9e) update pointer

### microsoft/jacdac-msr-modules

* [7266270](https://github.com/microsoft/jacdac-msr-modules/commit/7266270) use 100% default for / units
* [171dc6d](https://github.com/microsoft/jacdac-msr-modules/commit/171dc6d) linting
* [fb4ae7a](https://github.com/microsoft/jacdac-msr-modules/commit/fb4ae7a) emit 1s in generated makecode services
* [3bd1e91](https://github.com/microsoft/jacdac-msr-modules/commit/3bd1e91) Apply automatic changes
* [3f376a4](https://github.com/microsoft/jacdac-msr-modules/commit/3f376a4) added files ([#341](https://github.com/microsoft/jacdac-msr-modules/pull/341))
* [46d153d](https://github.com/microsoft/jacdac-msr-modules/commit/46d153d) updated bitradio spec
* [22e5385](https://github.com/microsoft/jacdac-msr-modules/commit/22e5385) updated sound player spec
* [d6ed83c](https://github.com/microsoft/jacdac-msr-modules/commit/d6ed83c) Apply automatic changes
* [45eeee0](https://github.com/microsoft/jacdac-msr-modules/commit/45eeee0) host renaming
* [76a0418](https://github.com/microsoft/jacdac-msr-modules/commit/76a0418) wording
* [fed83a6](https://github.com/microsoft/jacdac-msr-modules/commit/fed83a6) Apply automatic changes
* [cf0f7f0](https://github.com/microsoft/jacdac-msr-modules/commit/cf0f7f0) support for specifiying a custom specification url ([#274](https://github.com/microsoft/jacdac-msr-modules/pull/274))
* [d8cfc00](https://github.com/microsoft/jacdac-msr-modules/commit/d8cfc00) added makecode logo
* [98e1b9c](https://github.com/microsoft/jacdac-msr-modules/commit/98e1b9c) updated logo
* [8cf6e25](https://github.com/microsoft/jacdac-msr-modules/commit/8cf6e25) adding workspace options for new lines
* [f97bfdb](https://github.com/microsoft/jacdac-msr-modules/commit/f97bfdb) adding bare logo
* [a050bdc](https://github.com/microsoft/jacdac-msr-modules/commit/a050bdc) scale / values to 0..100
* [a896358](https://github.com/microsoft/jacdac-msr-modules/commit/a896358) fix bad handling of exception
* [34b792a](https://github.com/microsoft/jacdac-msr-modules/commit/34b792a) More checks on test ([#334](https://github.com/microsoft/jacdac-msr-modules/pull/334))
* [6e03780](https://github.com/microsoft/jacdac-msr-modules/commit/6e03780) Service test: Servo ([#314](https://github.com/microsoft/jacdac-msr-modules/pull/314))
* [79386a2](https://github.com/microsoft/jacdac-msr-modules/commit/79386a2) Update README.md
* [71ebf18](https://github.com/microsoft/jacdac-msr-modules/commit/71ebf18) proper handling of enum ([#331](https://github.com/microsoft/jacdac-msr-modules/pull/331))
* [95564cf](https://github.com/microsoft/jacdac-msr-modules/commit/95564cf) Apply automatic changes
* [ae82bb1](https://github.com/microsoft/jacdac-msr-modules/commit/ae82bb1) Service test: Compass ([#313](https://github.com/microsoft/jacdac-msr-modules/pull/313))
* [5d5504f](https://github.com/microsoft/jacdac-msr-modules/commit/5d5504f) updated node version
* [f4d86ee](https://github.com/microsoft/jacdac-msr-modules/commit/f4d86ee) Apply automatic changes
* [86dea53](https://github.com/microsoft/jacdac-msr-modules/commit/86dea53) added files ([#326](https://github.com/microsoft/jacdac-msr-modules/pull/326))
* [aba4e37](https://github.com/microsoft/jacdac-msr-modules/commit/aba4e37) get register.field working
* [8b0ab31](https://github.com/microsoft/jacdac-msr-modules/commit/8b0ab31) Apply automatic changes
* [a70a39d](https://github.com/microsoft/jacdac-msr-modules/commit/a70a39d) added files ([#325](https://github.com/microsoft/jacdac-msr-modules/pull/325))
* [7bb323c](https://github.com/microsoft/jacdac-msr-modules/commit/7bb323c) Apply automatic changes
* [de4b2e1](https://github.com/microsoft/jacdac-msr-modules/commit/de4b2e1) thresholds around wrong way in sound sensor
* [0ed978a](https://github.com/microsoft/jacdac-msr-modules/commit/0ed978a) fix problem with tavs
* [756e4d1](https://github.com/microsoft/jacdac-msr-modules/commit/756e4d1) Apply automatic changes
* [b63318f](https://github.com/microsoft/jacdac-msr-modules/commit/b63318f) added files ([#322](https://github.com/microsoft/jacdac-msr-modules/pull/322))
* [a0d08e1](https://github.com/microsoft/jacdac-msr-modules/commit/a0d08e1) more work on tests
* [4e4bef0](https://github.com/microsoft/jacdac-msr-modules/commit/4e4bef0) implementation of closeTo ([#319](https://github.com/microsoft/jacdac-msr-modules/pull/319))
* [27efd95](https://github.com/microsoft/jacdac-msr-modules/commit/27efd95) update button test
* [1467d77](https://github.com/microsoft/jacdac-msr-modules/commit/1467d77) update button spec ([#315](https://github.com/microsoft/jacdac-msr-modules/pull/315))
* [f14bda2](https://github.com/microsoft/jacdac-msr-modules/commit/f14bda2) Apply automatic changes
* [40bb75b](https://github.com/microsoft/jacdac-msr-modules/commit/40bb75b) added files ([#311](https://github.com/microsoft/jacdac-msr-modules/pull/311))
* [ddbc4d2](https://github.com/microsoft/jacdac-msr-modules/commit/ddbc4d2) added files ([#312](https://github.com/microsoft/jacdac-msr-modules/pull/312))
* [2c85b32](https://github.com/microsoft/jacdac-msr-modules/commit/2c85b32) Apply automatic changes
* [3371b90](https://github.com/microsoft/jacdac-msr-modules/commit/3371b90) added files ([#309](https://github.com/microsoft/jacdac-msr-modules/pull/309))
* [c94e6ea](https://github.com/microsoft/jacdac-msr-modules/commit/c94e6ea) Apply automatic changes
* [5c9b0ac](https://github.com/microsoft/jacdac-msr-modules/commit/5c9b0ac) added files ([#308](https://github.com/microsoft/jacdac-msr-modules/pull/308))
* [bfd0e9d](https://github.com/microsoft/jacdac-msr-modules/commit/bfd0e9d) formatting and repharsing some test ui
* [c8c5b72](https://github.com/microsoft/jacdac-msr-modules/commit/c8c5b72) Apply automatic changes
* [8ac3b10](https://github.com/microsoft/jacdac-msr-modules/commit/8ac3b10) Device: Thermometer Humidity ([#307](https://github.com/microsoft/jacdac-msr-modules/pull/307))
* [4d1518a](https://github.com/microsoft/jacdac-msr-modules/commit/4d1518a) check that reading registers have consistent units
* [dd7152b](https://github.com/microsoft/jacdac-msr-modules/commit/dd7152b) Add fixed point number examples
* [606ee97](https://github.com/microsoft/jacdac-msr-modules/commit/606ee97) updated docs on firmware
* [503f727](https://github.com/microsoft/jacdac-msr-modules/commit/503f727) Merge branch 'main' of https://github.com/microsoft/jacdac
* [5c189b1](https://github.com/microsoft/jacdac-msr-modules/commit/5c189b1) refresh specs
* [c219c49](https://github.com/microsoft/jacdac-msr-modules/commit/c219c49) Apply automatic changes
* [41c0d2f](https://github.com/microsoft/jacdac-msr-modules/commit/41c0d2f) migrate firmware repositories to jacdac-msr-modules
* [8690bfb](https://github.com/microsoft/jacdac-msr-modules/commit/8690bfb) update doc
* [c8070d1](https://github.com/microsoft/jacdac-msr-modules/commit/c8070d1) fixing formatting of rover
* [56cb2b2](https://github.com/microsoft/jacdac-msr-modules/commit/56cb2b2) update test doc

### microsoft/jacdac-stm32x0

* [fe65825](https://github.com/microsoft/jacdac-stm32x0/commit/fe65825) Use new flags in bootloader
* [26e3aa9](https://github.com/microsoft/jacdac-stm32x0/commit/26e3aa9) Fix target_wait_us() in BL mode
* [3ee6993](https://github.com/microsoft/jacdac-stm32x0/commit/3ee6993) Improve build instructions
* [4ebf314](https://github.com/microsoft/jacdac-stm32x0/commit/4ebf314) Don't build bootloadedr update in no-bootloader builds
* [5ac94cc](https://github.com/microsoft/jacdac-stm32x0/commit/5ac94cc) Don't print bt when flashing (trips gdb sometimes)
* [0382803](https://github.com/microsoft/jacdac-stm32x0/commit/0382803) Fix standby on G0
* [12c5068](https://github.com/microsoft/jacdac-stm32x0/commit/12c5068) Calibrate bitbang spi timings on G0
* [cce619a](https://github.com/microsoft/jacdac-stm32x0/commit/cce619a) Don't divide in target_wait_us()
* [3c31f2a](https://github.com/microsoft/jacdac-stm32x0/commit/3c31f2a) G0 has separate rising and falling EXTI

## Version 0.12.5

### microsoft/jacdac-msr-modules

* [8c136a3](https://github.com/microsoft/jacdac-msr-modules/commit/8c136a3) update submod
* [b9cabea](https://github.com/microsoft/jacdac-msr-modules/commit/b9cabea) [skip ci] firmware v0.12.4 built

### microsoft/jacdac-stm32x0

* [e36a3c7](https://github.com/microsoft/jacdac-stm32x0/commit/e36a3c7) Indicate bootloader update files in UF2

## Version 0.12.4

### microsoft/jacdac-msr-modules

* [2cfa062](https://github.com/microsoft/jacdac-msr-modules/commit/2cfa062) Update submodule
* [2b1d571](https://github.com/microsoft/jacdac-msr-modules/commit/2b1d571) Fix file name
* [1fe1fe2](https://github.com/microsoft/jacdac-msr-modules/commit/1fe1fe2) [skip ci] firmware v0.12.3 built

### microsoft/jacdac-stm32x0

* [21d02d9](https://github.com/microsoft/jacdac-stm32x0/commit/21d02d9) Save a few us in reception

## Version 0.12.3

### microsoft/jacdac-msr-modules

* [8dffcc0](https://github.com/microsoft/jacdac-msr-modules/commit/8dffcc0) Update submodules
* [a8e425c](https://github.com/microsoft/jacdac-msr-modules/commit/a8e425c) Merge pull request [#7](https://github.com/microsoft/jacdac-msr-modules/pull/7) from microsoft/joystick
* [628470f](https://github.com/microsoft/jacdac-msr-modules/commit/628470f) remove debug
* [25d469a](https://github.com/microsoft/jacdac-msr-modules/commit/25d469a) change app_process to only check if disconnected
* [9a7fe1e](https://github.com/microsoft/jacdac-msr-modules/commit/9a7fe1e) update xac module to use new joystick service
* [d31506d](https://github.com/microsoft/jacdac-msr-modules/commit/d31506d) Merge pull request [#6](https://github.com/microsoft/jacdac-msr-modules/pull/6) from microsoft/app_process
* [b856c83](https://github.com/microsoft/jacdac-msr-modules/commit/b856c83) fix typo: UNKOWN
* [dc86735](https://github.com/microsoft/jacdac-msr-modules/commit/dc86735) uncomment vital variable
* [16fbb84](https://github.com/microsoft/jacdac-msr-modules/commit/16fbb84) update xac code to use new optional app_process callback
* [a6acfee](https://github.com/microsoft/jacdac-msr-modules/commit/a6acfee) Merge pull request [#5](https://github.com/microsoft/jacdac-msr-modules/pull/5) from microsoft/xac
* [6a4be2b](https://github.com/microsoft/jacdac-msr-modules/commit/6a4be2b) Merge branch 'main' into xac
* [d9d8f1a](https://github.com/microsoft/jacdac-msr-modules/commit/d9d8f1a) refine ux of xac unknown mode
* [3ab95f3](https://github.com/microsoft/jacdac-msr-modules/commit/3ab95f3) sync submodule
* [2914f51](https://github.com/microsoft/jacdac-msr-modules/commit/2914f51) update submodule refs
* [208145c](https://github.com/microsoft/jacdac-msr-modules/commit/208145c) add xac module to drop targets
* [b9ba62d](https://github.com/microsoft/jacdac-msr-modules/commit/b9ba62d) add XAC module target
* [3334f9a](https://github.com/microsoft/jacdac-msr-modules/commit/3334f9a) Cleanup changes
* [0a36839](https://github.com/microsoft/jacdac-msr-modules/commit/0a36839) Merge branch 'main' of https://github.com/microsoft/jacdac-msr-modules into main
* [d27e1c4](https://github.com/microsoft/jacdac-msr-modules/commit/d27e1c4) [skip ci] firmware v0.12.2 built
* [fff0025](https://github.com/microsoft/jacdac-msr-modules/commit/fff0025) No longer using yarn

### microsoft/jacdac-c

* [e131ec9](https://github.com/microsoft/jacdac-c/commit/e131ec9) Merge pull request [#18](https://github.com/microsoft/jacdac-c/pull/18) from microsoft/joystick
* [3c1fb93](https://github.com/microsoft/jacdac-c/commit/3c1fb93) Add kx023 accelerometer
* [172c375](https://github.com/microsoft/jacdac-c/commit/172c375) rename joystick.c to analog_joystick.c
* [3f29a88](https://github.com/microsoft/jacdac-c/commit/3f29a88) Add analog joystick implementation
* [1a5641a](https://github.com/microsoft/jacdac-c/commit/1a5641a) add option app_process callback ([#17](https://github.com/microsoft/jacdac-c/pull/17))
* [21fdcfa](https://github.com/microsoft/jacdac-c/commit/21fdcfa) Merge pull request [#16](https://github.com/microsoft/jacdac-c/pull/16) from microsoft/xac
* [bba27d3](https://github.com/microsoft/jacdac-c/commit/bba27d3) Add UNKNOWN state LED animation

### microsoft/jacdac-stm32x0

* [e8da22b](https://github.com/microsoft/jacdac-stm32x0/commit/e8da22b) add optional app_process callback to main
* [88a9704](https://github.com/microsoft/jacdac-stm32x0/commit/88a9704) Merge pull request [#19](https://github.com/microsoft/jacdac-stm32x0/pull/19) from microsoft/xac
* [42bc122](https://github.com/microsoft/jacdac-stm32x0/commit/42bc122) add new pin mappings for pwm and better error message
* [74aa158](https://github.com/microsoft/jacdac-stm32x0/commit/74aa158) Fix random lockup in BL
* [ae49371](https://github.com/microsoft/jacdac-stm32x0/commit/ae49371) Script output formatting

## Version 0.12.2

### microsoft/jacdac-msr-modules

* [bf37060](https://github.com/microsoft/jacdac-msr-modules/commit/bf37060) Further build update
* [abd4ad9](https://github.com/microsoft/jacdac-msr-modules/commit/abd4ad9) Update build script
* [baa4054](https://github.com/microsoft/jacdac-msr-modules/commit/baa4054) Automatic changelog for 0.12.1
* [9a03602](https://github.com/microsoft/jacdac-msr-modules/commit/9a03602) Update submodule
* [4e13322](https://github.com/microsoft/jacdac-msr-modules/commit/4e13322) Adapt to new build system
* [94fb241](https://github.com/microsoft/jacdac-msr-modules/commit/94fb241) Cleanup rgb led period
* [0224967](https://github.com/microsoft/jacdac-msr-modules/commit/0224967) Add starfighter boards

### microsoft/jacdac-c

* [7d0b77d](https://github.com/microsoft/jacdac-c/commit/7d0b77d) Default RGB_LED_PERIOD to 512 (min value)

### microsoft/jacdac-stm32x0

* [4fe4020](https://github.com/microsoft/jacdac-stm32x0/commit/4fe4020) Fix regex
* [318656a](https://github.com/microsoft/jacdac-stm32x0/commit/318656a) Normalize 'v' in tags
* [82a8ef1](https://github.com/microsoft/jacdac-stm32x0/commit/82a8ef1) Fix build order
* [e592ccb](https://github.com/microsoft/jacdac-stm32x0/commit/e592ccb) Fix typo
* [c1fa364](https://github.com/microsoft/jacdac-stm32x0/commit/c1fa364) Add release scripts
* [302b0a7](https://github.com/microsoft/jacdac-stm32x0/commit/302b0a7) Better version description
* [2577ffd](https://github.com/microsoft/jacdac-stm32x0/commit/2577ffd) Support PWM on PB_8 on G0

