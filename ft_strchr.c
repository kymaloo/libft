/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:08:46 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/25 16:16:33 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c_c;
	int		i;

	c_c = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c_c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c_c)
		return ((char *)&s[i]);
	return (0);
}
/*
int	main(void)
{
	printf("%s\n", strchr("test", 't'));
	printf("%s", ft_strchr("test", 't'));
}
*/