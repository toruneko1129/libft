#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dstptr;
	const unsigned char	*srcptr;

	if (!n || dst == src)
		return (dst);
	dstptr = (unsigned char *)dst;
	srcptr = (const unsigned char *)src;
	while (n--)
		*dstptr++ = *srcptr++;
	return (dst);
}
