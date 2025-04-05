#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	k;

	k = n;
	if (k < 0)
	{
		ft_putchar_fd('-', fd);
		k = -k;
	}
	if (k > 9)
	{
		ft_putnbr_fd((k / 10), fd);
		ft_putchar_fd((k % 10) + '0', fd);
	}
	else
		ft_putchar_fd(k + '0', fd);
}
