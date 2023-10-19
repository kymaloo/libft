/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:24:08 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/17 19:24:12 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void   *src, size_t n)
{
    size_t	i;
    char    *dest1;
    char    *src1;

    i = 0;
    dest1 = (char *)dest;
    src1 = (char *)src;
    if (!dest && !src)
    {
        return (dest);
    }
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Lalolilolu";
	char	dest[] = "BleuRougeVert";
    char	src1[] = "Lalolilolu";
	char	dest1[] = "BleuRougeVert";

	printf("Avant %s\n", dest);
	memcpy(dest, src, 5);
	printf("Apres %s\n", dest);

	printf("Avant %s\n", dest1);
	ft_memcpy(dest1, src1, 5);
	printf("Apres %s\n", dest1);
}
*/