#include "libft.h"

void *ft_memset(void *ptr, int value, size_t num)
{
	size_t i;

	i = 0;
	unsigned char *p = (unsigned char *)ptr;
	unsigned char v = (unsigned char)value;
	while (i < num)
	{
		p[i] = v;
		i++;
	}
	return(ptr);
}