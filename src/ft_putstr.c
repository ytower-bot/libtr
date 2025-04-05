#include "libft.h"

int	ft_putstr(char *str, int fd)
{
	if (str == NULL)
		return (ft_putstr_fd("(null)", fd));
	return (ft_putstr_fd(str, fd));
}
