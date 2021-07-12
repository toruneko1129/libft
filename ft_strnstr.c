#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlelen;

	needlelen = ft_strlen(needle);
	if (!needlelen)
		return ((char *)haystack);
	while (*haystack && len-- >= needlelen)
	{
		if (!ft_strncmp(haystack, needle, needlelen))
			return ((char *)haystack);
		++haystack;
	}
	return (NULL);
}
