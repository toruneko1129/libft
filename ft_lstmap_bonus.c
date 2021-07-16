#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*nxt;

	res = NULL;
	while (lst != NULL)
	{
		nxt = ft_lstnew((*f)(lst->content));
		if (nxt == NULL)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, nxt);
		lst = lst->next;
	}
	return (res);
}
