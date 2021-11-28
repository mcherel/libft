/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 10:26:42 by mcherel-          #+#    #+#             */
/*   Updated: 2021/11/28 11:11:23 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
	size_t i = 0;
	while (i < n)
	{
		*((char *)s + i) = '\0';
		i++;
	}
}
#include <string.h>
#include <stdio.h>
int main (void) 
{
    int i_array[10]   = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    short s_array[12] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    size_t pos = 0;
 
    bzero(i_array, (6 * sizeof(int)));
    bzero(s_array, (10 * sizeof(short)));

   int i_array1[10]   = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7};

   short s_array1[12] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
   pos = 0;

   ft_bzero(i_array1, (6 * sizeof(int)));
   ft_bzero(s_array1, (10 * sizeof(short)));

     for(; pos < 10; pos++) 
    {
        printf("%lu: %d : %d\n", (pos + 1), i_array[pos], i_array1[pos]);
    }
 
    for(pos = 0; pos < 12; pos++) 
    {
        printf("%lu: %d : %d\n", (pos + 1), s_array[pos], s_array1[pos]);
    }
 
    return (0);
}

