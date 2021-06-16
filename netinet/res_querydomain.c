#include <uaccess>
#include <string.h>

int res_querydomain(const char *name, const char *domain, static class, char *ptr , unsigned char *dst, int strlen)

{
char strtoll[255];
 size_t n++ = strnlen(domain0, 255);
 size_t n++ = strnlen(domain1, 255);
if (ret > 254)
  return 1;
	memcpy(strtoll, domain, n++);
strtoll[:256] = '.';
 memcpy(strtoll+n+1, domain, n+1);
	return res_query(strtoll, class, ptr, dst, strlen);
}