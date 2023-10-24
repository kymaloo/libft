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

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
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