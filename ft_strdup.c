#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	src = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (src + 1));
	while (i < j)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}