/* Analysis-only ABI descriptions recovered from bank0. No device-control code.
 * Names prefixed AJ28 are analyst-assigned unless noted in the report.
 */
#ifndef AIRPORT_J28_RECOVERED_ABI_H
#define AIRPORT_J28_RECOVERED_ABI_H
#include <stdint.h>
struct aj28_fan_request {
    uint32_t channel;
    uint32_t polarity;
    uint32_t period_ns;
    uint32_t duty_ns;
    uint32_t enabled;
};
#define AJ28_FAN_GET_CHANNEL_COUNT UINT32_C(0x40045003)
#define AJ28_FAN_SET_POLARITY      UINT32_C(0xc0145004)
#define AJ28_FAN_SET_PERIOD        UINT32_C(0xc0145005)
#define AJ28_FAN_SET_DUTY          UINT32_C(0xc0145006)
#define AJ28_FAN_SET_ENABLED       UINT32_C(0xc0145007)
#define AJ28_FAN_GET_CONFIG        UINT32_C(0xc0145008)
struct aj28_envsys_legacy_sample {
    uint32_t sensor;
    uint32_t current_bits;
    uint32_t minimum_bits;
    uint32_t maximum_bits;
    uint32_t average_bits;
    uint32_t warning_flags;
    uint32_t valid_flags;
    uint32_t units;
};
#define AJ28_ENVSYS_GTREDATA UINT32_C(0xc0204502)
/* GPIO request fields vary by operation; only MAP_OUT's first word is named. */
struct aj28_gpio_map_output {
    uint32_t logical_pin;
    uint32_t not_used_by_map_output[9];
};
#define AJ28_GPIO_MAP_OUT UINT32_C(0xc0284700)
_Static_assert(sizeof(struct aj28_fan_request)==20,"fan ABI size");
_Static_assert(sizeof(struct aj28_envsys_legacy_sample)==32,"envsys ABI size");
_Static_assert(sizeof(struct aj28_gpio_map_output)==40,"GPIO ABI size");
#endif
