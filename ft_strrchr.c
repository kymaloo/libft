/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:28:21 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/17 18:28:23 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
    int i;

    i = 0;
	while (str[i])
		i++;
    while (i >= 0)
    {
        if (str[i] == c)
            return ((char *)&str[i]);
        i--;
    }
	if (i == -1)
		return ((char *)&str[i]);
	return (0);
}
/*
int	main(void)
{
	printf("%s\n", strrchr("test", '\0'));
	printf("%s", ft_strrchr("test", '\0'));
}
*/