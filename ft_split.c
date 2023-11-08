/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:05:59 by trgaspar          #+#    #+#             */
/*   Updated: 2023/11/08 18:56:13 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != c && *str)
			i++;
		while (*str != c && *str)
			str++;
	}
	return (i);
}

static char	**ft_free_all(char **tab, int i)
{
	while (tab[--i] && i >= 0)
		free(tab[i]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i_len_nbword[3];
	char	**tab;

	if (!s)
		return (NULL);
	i_len_nbword[0] = 0;
	i_len_nbword[2] = ft_count_word(s, c);
	tab = malloc(sizeof(char *) * (i_len_nbword[2] + 1));
	if (!tab)
		return (NULL);
	while (i_len_nbword[0] < i_len_nbword[2])
	{
		while (*s && *s == c)
			s++;
		if (ft_strchr(s, c))
			i_len_nbword[1] = ft_strchr(s, c) - s;
		else
			i_len_nbword[1] = ft_strlen(s);
		tab[i_len_nbword[0]] = ft_substr(s, 0, i_len_nbword[1]);
		if (!tab[i_len_nbword[0]++])
			return (ft_free_all(tab, i_len_nbword[0] - 1));
		s += i_len_nbword[1];
	}
	tab[i_len_nbword[0]] = 0;
	return (tab);
}
