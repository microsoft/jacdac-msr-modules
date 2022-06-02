#include "jdprofile.h"
#include "tinyhw.h"

#include "jd_client.h"
#include "jacscript/jacscript.h"

FIRMWARE_IDENTIFIER(0x3d1fe52f, "JM-Jacscript Star-Brain v3.3");

#define PROG_SIZE JD_FLASH_SETTINGS_SIZE
#define PROG_START (0x08000000 + (JD_FLASH_SIZE - BL_SIZE - PROG_SIZE))

static const jacscriptmgr_cfg_t jacs_cfg = {
    .program_base = (void *)PROG_START,
    .max_program_size = PROG_SIZE,
};

void app_init_services() {
    extcloud_init();

    jd_role_manager_init();
    jacscriptmgr_init(&jacs_cfg);

    jacscloud_init(&extcloud);
    tsagg_init(&extcloud);
}
