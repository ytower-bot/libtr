#include "libft.h"

static int	get_len(unsigned long n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		i++;
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}

char	*ft_lxtoa(unsigned long n)
{
	int			len;
	char		*str;
	const char	*digits;

	digits = "0123456789abcdef";
	len = get_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = 0;
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		if (n > 0)
			str[--len] = digits[n % 16];
		else
			str[--len] = digits[n % 16 * -1];
		n /= 16;
	}
	return (str);
}
