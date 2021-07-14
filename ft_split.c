#include "libft.h"

static int	ft_getsize(char const *ptr, char c)
{
	int		size;

	size = 0;
	while (*ptr)
	{
		++size;
		while (*ptr && *ptr != c)
			++ptr;
		while (*ptr && *ptr == c)
			++ptr;
	}
	return (size);
}

static int	ft_getstrarr(char const *ptr, char c, char ***res)
{
	int		i;
	size_t	len;

	i = 0;
	while (*ptr)
	{
		len = 0;
		while (*(ptr + len) && *(ptr + len) != c)
			++len;
		(*res)[i] = ft_substr(ptr, 0, len);
		if ((*res)[i] == NULL)
			return (i);
		++i;
		ptr += len;
		while (*ptr && *ptr == c)
			++ptr;
	}
	(*res)[i] = NULL;
	return (-1);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	const char	set[1] = {c};
	char		*ptr;
	int			status;

	ptr = ft_strtrim(s, set);
	if (ptr == NULL)
		return (NULL);
	res = (char **)malloc((ft_getsize(ptr, c) + 1) * sizeof(char *));
	if (res == NULL)
	{
		free(ptr);
		return (NULL);
	}
	status = ft_getstrarr(ptr, c, &res);
	if (~status)
	{
		while (status--)
			free(res[status]);
		free(res);
		return (NULL);
	}
	free(ptr);
	return (res);
}