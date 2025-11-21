#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(main);

void main(void) {
    LOG_INF("Zigbee coordinator stub build OK");
    while (1) {
        k_sleep(K_MSEC(1000));
    }
}
