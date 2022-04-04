#include "jdprofile.h"
#include "tinyhw.h"

#include "jd_client.h"
#include "jacscript/jacscript.h"

FIRMWARE_IDENTIFIER(0x30085c3f, "JM-Lora E5 88 v4.0");

#define PROG_SIZE (8 * 1024)
#define PROG_START (0x08000000 + (JD_FLASH_SIZE - BL_SIZE - PROG_SIZE))

static const jacscriptmgr_cfg_t jacs_cfg = {
    .program_base = (void *)PROG_START,
    .max_program_size = PROG_SIZE,
};

void app_client_event_handler(int event_id, void *arg0, void *arg1) {
    // jd_device_t *dev = arg0;
    // jd_device_service_t *serv = arg0;
    // jd_packet_t *pkt = arg1;
    // jd_register_query_t *reg = arg1;

    jacs_ctx_t *jacs_ctx = jacscriptmgr_get_ctx();
    jacs_client_event_handler(jacs_ctx, event_id, arg0, arg1);
}

void app_init_services() {
    char shortbuf[5];
    jd_device_short_id(shortbuf, jd_device_id());
    DMESG("self-device: %s", shortbuf);

    spiflash_init();
    jd_role_manager_init();
    jacscriptmgr_init(&jacs_cfg);
    // lorawan_init();
}
