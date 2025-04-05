#include "../includes/libft.h"

t_list	*ft_lstnew(int data)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (new_list == NULL)
		return (NULL);
	new_list->data = data;
	new_list->index = -1;
	new_list->next = NULL;
	return (new_list);
}
