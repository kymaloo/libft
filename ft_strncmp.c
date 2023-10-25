/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:56:25 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/25 16:41:25 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_cast;
	unsigned char	*s2_cast;

	s1_cast = (unsigned char *)s1;
	s2_cast = (unsigned char *)s2;
	i = 0;
	while (s1_cast[i] == s2_cast[i] && s1_cast[i] && s2_cast[i] && i < n)
		i++;
	if (n == i)
		return (0);
	return (s1_cast[i] - s2_cast[i]);
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

	printf("%d\n", ft_strncmp(array, array1, stop));
	printf("%d", strncmp(array2, array3, stop));
}
*/