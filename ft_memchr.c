/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:44:48 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/10 11:57:02 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char * str;

    str = (unsigned char *)s;
    while(n-- && n != 0)
    {
        if(*str == (unsigned char)c)
            return (str);
        str++;
    }
    return (NULL);
}
