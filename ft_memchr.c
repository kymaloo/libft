/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:56:03 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/18 17:56:05 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    char    *ptr;
	size_t	i;

	i = 0;
    ptr = (char *)str;
    while (i < n)
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%s\n", (char *)memchr("test", 's', 5));
	printf("%s", (char *)ft_memchr("test", 's', 5));
}
*/