#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int (*f)(int data), void (*del)(int data))
{
	t_list	*new;
	t_list	*start;

	if (!lst || !f || !del)
		return (0);
	new = ft_lstnew(f(lst->data));
	if (!new)
		return (0);
	start = new;
	lst = lst->next;
	while (lst)
	{
		new->next = ft_lstnew(f(lst->data));
		if (!new->next)
		{
			ft_lstclear(&start, del);
			return (0);
		}
		new = new->next;
		lst = lst->next;
	}
	new->next = NULL;
	return (start);
}
