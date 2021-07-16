#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		size;

	size = ft_lstsize(lst);
	while (--size > 0)
		lst = lst->next;
	return (lst);
}
