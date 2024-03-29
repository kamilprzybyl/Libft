#include "../inc/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int					i;
	unsigned char		*temp1;
	unsigned char		*temp2;

	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	i = 0;
	while (i < (int)n)
	{	
		if (temp2[i] == '\0')
			return (temp1[i] - temp2[i]);
		if (temp1[i] != temp2[i])
			return (temp1[i] - temp2[i]);
		i++;
	}
	return (0);
}
