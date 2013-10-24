#if !defined(__MACH__)
#include <sys/types.h>
#include <string.h>
#include "strlcpycat.h"

size_t
strlcat(char *dst, const char *src, size_t sz)
{
  char *d = dst;
  const char *s = src;
  size_t n = sz;
  size_t dlen;

  /* Find the end of dst and adjust bytes left but don't go past end */
  while (n-- != 0 && *d != '\0')
    d++;
  dlen = d - dst;
  n = sz - dlen;

  if (n == 0)
    return dlen + strlen(s);

  while (*s != '\0') {
    if (n != 1) {
      *d++ = *s;
      n--;
    }
    s++;
  }
  *d = '\0';

  return dlen + (s - src);
}
#endif
