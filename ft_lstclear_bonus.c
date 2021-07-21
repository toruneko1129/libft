/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawakit <hkawakit@student.42tokyo.j>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 19:47:08 by hkawakit          #+#    #+#             */
/*   Updated: 2021/07/22 02:08:42 by hkawakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (lst == NULL)
		return ;
	ptr = *lst;
	while (ptr != NULL)
	{
		*lst = ptr->next;
		ft_lstdelone(ptr, del);
		ptr = *lst;
	}
}
