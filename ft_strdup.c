#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = (char *)malloc(ft_strlen(s1) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
	return (ptr);
}
