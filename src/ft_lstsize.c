#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		len;

	current = lst;
	len = 0;
	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
