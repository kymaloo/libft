/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:05:49 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/18 13:07:09 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void   *src, size_t n)
{
    char    *dest1;
    char    *src1;

    dest1 = (char *)dest;
    src1 = (char *)src;
    
    if (src1 < dest1)
	{
		while (n != 0)
        {
            dest1[n] = src1[n];
            n--;
        }
	}
    else
    {
        ft_memcpy(dest1, src1, n);
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

	printf("Avant %s\n", src);
	memmove(dest, src, 5);
	printf("Apres %s\n", src);

	printf("Avant %s\n", src1);
	ft_memmove(dest1, src1, 5);
	printf("Apres %s\n", src1);
}
*/