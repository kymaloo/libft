/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:14:23 by trgaspar          #+#    #+#             */
/*   Updated: 2023/11/06 17:21:47 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	size_t	*tab;

	if (!lst || !f)
		return (NULL);
	tab = malloc(sizeof(lst));
	if (!tab)
		return (NULL);
	while (lst->next != NULL)
	{
		
	}
	return (tab);
}