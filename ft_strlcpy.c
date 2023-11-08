/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:24:21 by trgaspar          #+#    #+#             */
/*   Updated: 2023/11/07 23:22:40 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char	*src, size_t size)
{
	size_t	index;
	char	*src1;

	index = 0;
	src1 = (char *)src;
	if (!dst && !src)
		return (dst[index]);
	while (src1[index])
		index++;
	if (size == 0)
		return (index);
	index = 0;
	while (src1[index] && index < size - 1)
	{
		dst[index] = src1[index];
		index++;
	}
	dst[index] = '\0';
	while (src1[index])
		index++;
	return (index);
}
