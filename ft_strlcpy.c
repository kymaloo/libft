/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:24:21 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/25 13:26:17 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dest, const char	*src, size_t size)
{
	size_t	index;
	char	*src1;

	index = 0;
	src1 = (char *)src;
	if (!dest && !src)
		return (dest[index]);
	while (src1[index])
		index++;
	if (size == 0)
		return (index);
	index = 0;
	while (src1[index] && index < size - 1)
	{
		dest[index] = src1[index];
		index++;
	}
	dest[index] = '\0';
	while (src1[index])
		index++;
	return (index);
}
/*
int	main(void)
{
	char	src[] = "TestUltimeAHHHHHH";
	char	dest[] = "OuaiMaisCestPasToiQuiDecide";
    char	src1[] = "TestUltimeAHHHHHH";
	char	dest1[] = "OuaiMaisCestPasToiQuiDecide";

	printf("Avant %s\n %s\n", src, dest);
	strlcpy(dest, src, 3);
	printf("Apres %s\n %s\n", src, dest);

	printf("Avant %s\n %s\n", src1, dest1);
	ft_strlcpy(dest1, src1, 3);
	printf("Apres %s\n %s\n", src1, dest1);
}
*/