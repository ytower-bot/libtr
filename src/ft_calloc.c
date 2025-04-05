#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	ptr = (void *)malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	if (size == 0)
		return (ptr);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
