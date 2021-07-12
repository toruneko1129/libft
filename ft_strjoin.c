#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)ft_calloc((len + 1), sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcat(ptr, s1, len + 1);
	ft_strlcat(ptr, s2, len + 1);
	return (ptr);
}
