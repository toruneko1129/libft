/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawakit <hkawakit@student.42tokyo.j>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:35:46 by hkawakit          #+#    #+#             */
/*   Updated: 2021/07/19 15:36:53 by hkawakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dstptr;
	const unsigned char	*srcptr;

	if (!n || dst == src)
		return (dst);
	dstptr = (unsigned char *)dst;
	srcptr = (const unsigned char *)src;
	while (n--)
		*dstptr++ = *srcptr++;
	return (dst);
}
