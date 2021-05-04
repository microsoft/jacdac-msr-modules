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

