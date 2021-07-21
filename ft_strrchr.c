/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawakit <hkawakit@student.42tokyo.j>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:04:42 by hkawakit          #+#    #+#             */
/*   Updated: 2021/07/21 12:57:02 by hkawakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (!c)
		return ((char *)s + len);
	s += len;
	while (len--)
	{
		if (*(--s) == (char)c)
			return ((char *)s);
	}
	return (NULL);
}
