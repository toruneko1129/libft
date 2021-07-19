/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawakit <hkawakit@student.42tokyo.j>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:39:46 by hkawakit          #+#    #+#             */
/*   Updated: 2021/07/19 15:41:35 by hkawakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dstptr;
	const unsigned char	*srcptr;
	size_t				size;

	if (!len || dst == src)
		return (dst);
	dstptr = (unsigned char *)dst;
	srcptr = (unsigned char *)src;
	if (dstptr <= srcptr)
	{
		while (len--)
			*dstptr++ = *srcptr++;
		return (dst);
	}
	size = len;
	while (size--)
	{
		++dstptr;
		++srcptr;
	}
	while (len--)
		*(--dstptr) = *(--srcptr);
	return (dst);
}
