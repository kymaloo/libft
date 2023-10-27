/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:05:59 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/27 11:02:39 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *str, char c)
{
	int	i;
	int	nb_word;

	i = 0;
	nb_word = 0;

	while (*str)
	{
		if (*str != c && nb_word == 0)
		{
			nb_word = 1;
			i++;
		}
		else if
			nb_word = 0;
		str++;
	}
	return (i);
}

char	*ft_fake_strdup(char *str, int	start, int	finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (finsih - star + 1));
	while (start < finish)
	{
		word[i] == str[start];
		i++;
		start++;	
	}
	word[i] == '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;
	
	tab = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!tab || !c)
		return (NULL);
	i = 0;
	j = 0;
}