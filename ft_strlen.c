#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*ptr = s;

	while (*ptr)
		++ptr;
	return (ptr - s);
}
