/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:56:25 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/17 19:56:31 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((*s1 == *s2) && (*s1 && *s2) && (i < n - 1))
	{
		i++;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
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