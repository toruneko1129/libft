/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawakit <hkawakit@student.42tokyo.j>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 19:56:29 by hkawakit          #+#    #+#             */
/*   Updated: 2021/07/24 12:42:06 by hkawakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*nxt;
	t_list	**last;

	if (f == NULL)
		return (NULL);
	res = NULL;
	last = &res;
	while (lst != NULL)
	{
		nxt = ft_lstnew((*f)(lst->content));
		if (nxt == NULL)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(last, nxt);
		last = &((*last)->next);
		lst = lst->next;
	}
	return (res);
}
