#include "jdprofile.h"
#include "tinyhw.h"

#include "jd_client.h"
#include "devicescript/devicescript.h"

FIRMWARE_IDENTIFIER(0x3d1fe52f, "JM-DeviceScript Star-Brain v3.3");

#define PROG_SIZE JD_FLASH_SETTINGS_SIZE
#define PROG_START (0x08000000 + (JD_FLASH_SIZE - BL_SIZE - PROG_SIZE))

static const devicescriptmgr_cfg_t devs_cfg = {
    .program_base = (void *)PROG_START,
    .max_program_size = PROG_SIZE,
};

void app_init_services() {
    extcloud_init();

    jd_role_manager_init();
    devicescriptmgr_init(&devs_cfg);

    devscloud_init(&extcloud);
    tsagg_init(&extcloud);
}
