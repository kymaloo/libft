/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:28:10 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/19 12:39:54 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t n)
{
    char    *src1;
    size_t  i;
    size_t  j;

    src1 = (char *)src;
    while(dest[j])
        j++;
    while(src1[i])
    {
        dest[j] = src1[i];
        i++;
        j++;
    }
    return (dest);
}