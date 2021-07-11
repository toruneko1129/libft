#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 1;
	while (len < size)
	{
		*dst++ = *src++;
		++len;
	}
	if (size)
		*dst = '\0';
	while (*src++ != '\0')
		++len;
	return (len - 1);
}
