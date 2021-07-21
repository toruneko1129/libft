/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawakit <hkawakit@student.42tokyo.j>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 19:23:12 by hkawakit          #+#    #+#             */
/*   Updated: 2021/07/21 16:20:57 by hkawakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//SIGSEGV
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	**begin;
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	begin = lst;
	last = ft_lstlast(*lst);
	last = new;
	lst = begin;
}
