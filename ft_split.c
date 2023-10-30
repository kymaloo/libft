/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:05:59 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/30 22:46:05 by trgaspar         ###   ########.fr       */
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
	int jsp[3];
	//int		i;
	//int		len;
	char	**tab;
	//int		nb_word;

	jsp[0] = 0;
	if (!s)
		return (NULL);
	jsp[2] = ft_count_word(s, c);
	tab = malloc(sizeof(char *) * (jsp[2] + 1));
	if (!tab)
		return (NULL);
	while (jsp[0] < jsp[2])
	{
		while (*s && *s == c)
			s++;
		if (ft_strchr(s, c))
			jsp[1] = ft_strchr(s, c) - s;
		else
			jsp[1] = ft_strlen(s);
		tab[jsp[0]] = ft_substr(s, 0, jsp[1]);
		if (!tab[jsp[0]++])
			return (ft_free_all(tab, jsp[0] - 1));
		s += jsp[1];
	}
	tab[jsp[0]] = '\0';
	return (tab);
}

/*
int	main(void)
{
	int	i = 0;
	char	**tab = ft_split("fffd  fd d  d  dfdfdfdfd  df dfdf d ", ' ');
	while (*(tab + i))
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
*/