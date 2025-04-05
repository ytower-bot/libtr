#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str_dup;
	size_t	len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	str_dup = malloc((len + 1) * sizeof(char));
	if (str_dup == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str_dup[i] = s[i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
