#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*nxt;

	nxt = lst->next;
	lst->next = NULL;
	(*del)(lst->content);
	free(&lst->content);
	lst->next = nxt;
}
