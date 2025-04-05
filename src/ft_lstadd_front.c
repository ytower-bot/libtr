#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *n)
{
	if (!n)
		return ;
	if (*lst == NULL)
	{
		*lst = n;
		return ;
	}
	n->next = *lst;
	*lst = n;
}
