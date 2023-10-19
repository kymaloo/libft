/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:14:28 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/19 12:21:28 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t	i;
    char    *s11;
    char    *s22;

    s11 = (char *)s1;
    s22 = (char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((*s11 == *s22) && (*s11 && *s22) && (i < n - 1))
	{
		i++;
		s11++;
		s22++;
	}
	return (*s11 - *s22);
}
/*
int	main(void)
{
	int	stop;
	char	array[] = "hhhhkk";
	char	array1[] = "hhhh";
	char	array2[] = "hhhhkk";
	char	array3[] = "hhhh";

	stop = 5;

	printf("%d\n", memcmp(array, array1, stop));
	printf("%d", ft_memcmp(array2, array3, stop));
}
*/