#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = 1;
	while (*dst)
	{
		++dst;
		++len;
	}
	while (*src && len < dstsize)
	{
		*dst++ = *src++;
		++len;
	}
	if (dstsize)
		*dst = '\0';
	while (*src++ != '\0')
		++len;
	return (len - 1);
}
