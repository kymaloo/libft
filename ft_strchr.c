/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:08:46 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/17 12:04:31 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int i)
{
	while (*str)
	{
		if (*str == i)
			return ((char *)str);
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%s\n", strchr("test", 't'));
	printf("%s", ft_strchr("test", 't'));
}
*/