#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(int data))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->data);
		lst = lst->next;
	}
}
