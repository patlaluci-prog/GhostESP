// Presentation only. Never use this result for dispatch, storage or protocols.
#ifndef GHOSTESP_CZ_UI_H
#define GHOSTESP_CZ_UI_H
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif
const char *ghost_cz_ui(const char *text);
size_t ghost_cz_copy(char *dst, size_t capacity, const char *text);
size_t ghost_cz_date(char *dst, size_t capacity, int weekday, int month, int day);
#ifdef __cplusplus
}
#endif
#endif
