/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawakit <hkawakit@student.42tokyo.j>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 18:05:55 by hkawakit          #+#    #+#             */
/*   Updated: 2021/07/21 14:50:56 by hkawakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getsize(char const *s, char c)
{
	size_t	size;

	size = 0;
	while (*s && *s == c)
		++s;
	while (*s)
	{
		++size;
		while (*s && *s != c)
			++s;
		while (*s && *s == c)
			++s;
	}
	return (size);
}

static int	ft_getstrarr(char const *s, char c, char **res)
{
	int		i;
	size_t	len;

	i = 0;
	while (*s && *s == c)
		++s;
	while (*s)
	{
		len = 0;
		while (*(s + len) && *(s + len) != c)
			++len;
		res[i] = ft_substr(s, 0, len);
		if (res[i] == NULL)
			return (i);
		++i;
		s += len;
		while (*s && *s == c)
			++s;
	}
	res[i] = NULL;
	return (-1);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	int			status;

	if (s == NULL)
		return (NULL);
	res = (char **)malloc((ft_getsize(s, c) + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	status = ft_getstrarr(s, c, res);
	if (status >= 0)
	{
		while (status--)
			free(res[status]);
		free(res);
		return (NULL);
	}
	return (res);
}
