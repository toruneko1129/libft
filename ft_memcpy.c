#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *restrict	dstptr;
	unsigned char *restrict	srcptr;

	dstptr = (unsigned char *restrict)dst;
	srcptr = (unsigned char *restrict)src;
	while (n--)
		*dstptr++ = (unsigned char)(*srcptr++);
	return (dst);
}
