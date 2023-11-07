/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:19:20 by trgaspar          #+#    #+#             */
/*   Updated: 2023/11/07 18:36:36 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_strupper(void *content)
{
	char *str = ft_strdup(content);
	int i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}
void delete(void *content)
{
	if (content)
		free(content);
}
int	main(void)
{
	t_list	*kase1;
	t_list	*kase2;
	t_list	*kase3;
	
	kase1 = ft_lstnew(ft_strdup("lol"));
	kase2 = ft_lstnew(ft_strdup("mdr"));
	kase3 = ft_lstnew(ft_strdup("xd"));
	ft_lstadd_back(&kase1, kase2);
	ft_lstadd_back(&kase1, kase3);
	printf("%s\n", (char *)(kase1->content));
	t_list *map = ft_lstmap(kase1, &ft_strupper, &free);
	printf("%s\n", (char *)(map->content));
	ft_lstclear(&kase1, &delete);
	ft_lstclear(&map, &delete);
}