#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*map;

	if (!s)
		return (NULL);
	map = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (map == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		map[i] = f(i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
