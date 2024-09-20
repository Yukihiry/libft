#include "libft.h"
#include <stdio.h>

void ft_bzero(void *s, size_t len)
{
	size_t i;
	unsigned char *p = (unsigned char *)s; 

	i = 0;
	while (i < len)
	{
		p[i] = 0;
		i++;
	}
}