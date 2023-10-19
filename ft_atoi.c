/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:00:48 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/19 14:12:00 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int atoi(const char *str)
{
    int nb;
    
    while ((9 <= *str && *str <= 13) || *str == ' ')
	{
		str++;
	}
    while ((0 <= *str && *str <= 9))
    {
        nb = (nb * 10) + (*str - 48);
    }
    return (nb);
}



