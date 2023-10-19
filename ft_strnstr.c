/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:52:38 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/19 13:59:43 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char * src, const char * search, size_t n)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (n == 0)
        return (0);
    if (*search == '\0')
		return (src);
    while(ft_strncmp(src, search, n) != 0)
    {
        
    }
    return (src);
}

int	main(void)
{
    printf("%s", strnstr("Hisashi Buri Dana Mugiwara", "Buri", 2));
	//printf("%s", ft_strnstr("Hisashi Buri Dana Mugiwara", "Buri", 2));
}