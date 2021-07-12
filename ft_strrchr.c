#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	if (!c)
		return ((char *)s + len);
	s += len;
	while (len--)
	{
		--s;
		if (*s == (char)c)
			return ((char *)s);
	}
	return (NULL);
}
