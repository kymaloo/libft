/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:02:31 by trgaspar          #+#    #+#             */
/*   Updated: 2023/10/18 12:03:03 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;
    char *ptr;

    i = 0;
    ptr = s;
    while (i < n)
    {
        ptr[i] = '\0';
        i++;
    }
}
/*
int main(void)
{
    char    ptr[] = "Test";
    char    ptr1[] = "Test";

    printf("Avant : %s\n", ptr);
    bzero(ptr, 2);
    printf("Apres : %s\n", ptr);

    printf("Avant : %s\n", ptr1);
    ft_bzero(ptr1, 2);
    printf("Apres : %s\n", ptr1);
}
*/