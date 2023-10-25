/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:24:08 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/25 13:53:19 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (!d && !s)
		return (d);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
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