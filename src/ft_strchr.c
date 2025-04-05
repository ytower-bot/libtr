#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	p;

	i = 0;
	p = c;
	if (p == '\0')
	{
		i = ft_strlen(s);
		return ((char *)&s[i++]);
	}
	while (s[i])
	{
		if (s[i] == p)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
