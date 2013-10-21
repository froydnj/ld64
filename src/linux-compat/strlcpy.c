#if !defined(__MACH__)
#include <string.h>
#include "strlcpycat.h"

size_t
strlcpy(char* dst, const char* src, size_t size)
{
  dst[size - 1] = '\0';
  strncpy(dst, src, size - 1);
  return strlen(dst);
}
#endif
