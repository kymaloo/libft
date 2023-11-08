/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:52:38 by trgaspar          #+#    #+#             */
/*   Updated: 2023/11/08 18:54:46 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i_j[2];
	int		k;
	size_t	t;

	i_j[0] = 0;
	i_j[1] = 0;
	if ((!big || !little) && len == 0)
		return (0);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i_j[0]] != '\0' && len-- > 0)
	{
		if (big[i_j[0]++] == little[i_j[1]])
		{
			k = i_j[0] - 1;
			t = len + 2;
			while (little[i_j[1]] != 0 && --t > 0)
				if (little[i_j[1]++] != big[k++])
					k = 0;
			if (k && little[i_j[1]] == 0)
				return ((char *)&big[i_j[0] - 1]);
			i_j[1] = 0;
		}
	}
	return (NULL);
}
