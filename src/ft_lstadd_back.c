#include "../includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *n)
{
	t_list	*last;

	if (!n)
		return ;
	if (*lst == NULL)
	{
		*lst = n;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = n;
}
