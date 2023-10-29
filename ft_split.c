/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:05:59 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/29 12:12:01 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(char const *str, char c)
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

char	*ft_free_all(char **tab, int i)
{
	while (tab[i] && i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	**tab;
	int		nb_word;

	i = 0;
	if (!s)
		return (NULL);
	if (!*s)
	{
		tab = malloc(1 * sizeof(char *));
		*tab = 0;
		return (tab);
	}
	nb_word = ft_count_word(s, c);
	tab = malloc(sizeof(char *) * (nb_word + 1));
	if (!tab)
		return (NULL);
	while (i < nb_word)
	{
		while (*s && *s == c)
			s++;
		if (ft_strchr(s, c))
			len = ft_strchr(s, c) - s;
		else
			len = ft_strlen(s);
		tab[i] = ft_substr(s, 0, len);
		if (!tab[i])
			ft_free_all(tab, i);
		s += len;
		i++;
	}
	return (tab);
}

/*
int	main(void)
{
	char	s[] = "test pas test bleu ahhhhh";
	char	c = "t";
	
	
}
*/