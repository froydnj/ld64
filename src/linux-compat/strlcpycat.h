#if !defined(__MACH__)
#include <string.h>

#if defined(__cplusplus)
extern "C" {
#endif

size_t strlcpy(char *dst, const char *src, size_t sz);
size_t strlcat(char *dst, const char *src, size_t sz);

#if defined(__cplusplus)
}
#endif

#endif
