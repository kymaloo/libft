/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:14:23 by trgaspar          #+#    #+#             */
/*   Updated: 2023/11/07 18:28:52 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*nwlst;

	nwlst = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (tmp == NULL)
			ft_lstdelone(tmp, del);
		ft_lstadd_back(&nwlst, tmp);
		lst = lst->next;
	}
	return (nwlst);
}
