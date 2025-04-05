/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfaustin <yfaustin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:18:14 by yfaustin          #+#    #+#             */
/*   Updated: 2025/01/15 22:13:31 by yfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

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

char	*ft_strndup(const char *s, size_t len)
{
	char	*str_dup;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	str_dup = malloc((s_len + 1) * sizeof(char));
	if (str_dup == NULL)
		return (NULL);
	i = 0;
	while (i < s_len && i < len)
	{
		str_dup[i] = s[i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}

char	*gnl_join(const char *s1, const char *s2)
{
	char	*str;
	size_t	len_s1;
	size_t	len;
	size_t	i;

	len_s1 = ft_strlen(s1);
	len = len_s1 + ft_strlen(s2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[len_s1 + i] = s2[i];
		i++;
	}
	str[len_s1 + i] = '\0';
	return (str);
}
