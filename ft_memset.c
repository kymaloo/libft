/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:23:05 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/17 13:20:17 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	str[] = "asasasasasasasasas";
	char	str1[] = "asasasasasasasasas";

	printf("Avant %s\n", str);
	memset(str, '*', 5);
	printf("Apres %s\n", str);

	printf("Avant %s\n", str1);
	ft_memset(str1, '*', 5);
	printf("Apres %s\n", str1);
}
*/
