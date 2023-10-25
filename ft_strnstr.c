/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:52:38 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/25 13:30:59 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	int		k;
	size_t	t;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] != '\0' && len-- > 0)
	{
		if (big[i++] == little[j])
		{
			k = i - 1;
			t = len + 2;
			while (little[j] != 0 && --t > 0)
				if (little[j++] != big[k++])
					k = 0;
			if (k && little[j] == 0)
				return ((char *)&big[i - 1]);
			j = 0;
		}
	}
	return (NULL);
}
/*
int	main(void)
{
    printf("%s", strnstr("Hisashi Buri Dana Mugiwara", "Buri", 2));
	//printf("%s", ft_strnstr("Hisashi Buri Dana Mugiwara", "Buri", 2));
}
*/