/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawakit <hkawakit@student.42tokyo.j>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:39:46 by hkawakit          #+#    #+#             */
/*   Updated: 2021/07/21 14:01:39 by hkawakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dstptr;
	const unsigned char	*srcptr;

	if (!len || dst == src)
		return (dst);
	dstptr = (unsigned char *)dst;
	srcptr = (unsigned char *)src;
	if (dstptr < srcptr)
	{
		while (len--)
			*dstptr++ = *srcptr++;
	}
	else
	{
		dstptr += len;
		srcptr += len;
		while (len--)
			*(--dstptr) = *(--srcptr);
	}
	return (dst);
}
