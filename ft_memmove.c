#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstptr;
	unsigned char	*srcptr;
	size_t			size;

	if (!len || dst == src)
		return (dst);
	dstptr = (unsigned char *)dst;
	srcptr = (unsigned char *)src;
	if (dstptr <= srcptr)
	{
		while (len--)
			*dstptr++ = *srcptr++;
		return (dst);
	}
	size = len;
	while (size--)
	{
		++dstptr;
		++srcptr;
	}
	while (len--)
	{
		*(--dstptr) = *(--srcptr);
	}
	return (dst);
}
