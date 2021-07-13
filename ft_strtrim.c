#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			len;

	while (*s1 && ft_strchr(set, *s1) != NULL)
		++s1;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, *(s1 + len - 1)) != NULL)
		--len;
	return (ft_substr(s1, 0, len));
}
