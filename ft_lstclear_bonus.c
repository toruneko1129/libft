#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	ptr = *lst;
	while (ptr != NULL)
	{
		ft_lstdelone(ptr, del);
		ptr = ptr->next;
	}
	*lst = NULL;
}
