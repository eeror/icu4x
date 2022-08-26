#ifndef ICU4XCustomTimeZone_H
#define ICU4XCustomTimeZone_H
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include "diplomat_runtime.h"

#ifdef __cplusplus
namespace capi {
#endif

typedef struct ICU4XCustomTimeZone ICU4XCustomTimeZone;
#ifdef __cplusplus
} // namespace capi
#endif
#include "diplomat_result_box_ICU4XCustomTimeZone_ICU4XError.h"
#include "diplomat_result_void_ICU4XError.h"
#include "diplomat_result_int32_t_void.h"
#include "diplomat_result_bool_void.h"
#include "diplomat_result_void_void.h"
#include "ICU4XIsoDateTime.h"
#include "ICU4XMetaZoneCalculator.h"
#ifdef __cplusplus
namespace capi {
extern "C" {
#endif

diplomat_result_box_ICU4XCustomTimeZone_ICU4XError ICU4XCustomTimeZone_create_from_str(const char* s_data, size_t s_len);

diplomat_result_void_ICU4XError ICU4XCustomTimeZone_try_set_gmt_offset_seconds(ICU4XCustomTimeZone* self, int32_t offset_seconds);

void ICU4XCustomTimeZone_clear_gmt_offset(ICU4XCustomTimeZone* self);

diplomat_result_int32_t_void ICU4XCustomTimeZone_gmt_offset_seconds(const ICU4XCustomTimeZone* self);

diplomat_result_bool_void ICU4XCustomTimeZone_is_gmt_offset_positive(const ICU4XCustomTimeZone* self);

diplomat_result_bool_void ICU4XCustomTimeZone_is_gmt_offset_zero(const ICU4XCustomTimeZone* self);

diplomat_result_bool_void ICU4XCustomTimeZone_gmt_offset_has_minutes(const ICU4XCustomTimeZone* self);

diplomat_result_bool_void ICU4XCustomTimeZone_gmt_offset_has_seconds(const ICU4XCustomTimeZone* self);

diplomat_result_void_ICU4XError ICU4XCustomTimeZone_try_set_time_zone_id(ICU4XCustomTimeZone* self, const char* id_data, size_t id_len);

void ICU4XCustomTimeZone_clear_time_zone_id(ICU4XCustomTimeZone* self);

diplomat_result_void_void ICU4XCustomTimeZone_time_zone_id(const ICU4XCustomTimeZone* self, DiplomatWriteable* write);

diplomat_result_void_ICU4XError ICU4XCustomTimeZone_try_set_meta_zone_id(ICU4XCustomTimeZone* self, const char* id_data, size_t id_len);

void ICU4XCustomTimeZone_clear_meta_zone_id(ICU4XCustomTimeZone* self);

diplomat_result_void_void ICU4XCustomTimeZone_meta_zone_id(const ICU4XCustomTimeZone* self, DiplomatWriteable* write);

diplomat_result_void_ICU4XError ICU4XCustomTimeZone_try_set_zone_variant(ICU4XCustomTimeZone* self, const char* id_data, size_t id_len);

void ICU4XCustomTimeZone_clear_zone_variant(ICU4XCustomTimeZone* self);

diplomat_result_void_void ICU4XCustomTimeZone_zone_variant(const ICU4XCustomTimeZone* self, DiplomatWriteable* write);

void ICU4XCustomTimeZone_set_standard_time(ICU4XCustomTimeZone* self);

void ICU4XCustomTimeZone_set_daylight_time(ICU4XCustomTimeZone* self);

diplomat_result_bool_void ICU4XCustomTimeZone_is_standard_time(const ICU4XCustomTimeZone* self);

diplomat_result_bool_void ICU4XCustomTimeZone_is_daylight_time(const ICU4XCustomTimeZone* self);

void ICU4XCustomTimeZone_maybe_set_meta_zone(ICU4XCustomTimeZone* self, const ICU4XIsoDateTime* local_datetime, const ICU4XMetaZoneCalculator* metazone_calculator);
void ICU4XCustomTimeZone_destroy(ICU4XCustomTimeZone* self);

#ifdef __cplusplus
} // extern "C"
} // namespace capi
#endif
#endif