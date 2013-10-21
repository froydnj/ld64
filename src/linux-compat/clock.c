#if !defined(__MACH__)
#include <stdint.h>
#include <time.h>

uint64_t
mach_absolute_time()
{
  return clock();
}
#endif /* !__MACH__ */
