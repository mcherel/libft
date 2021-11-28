/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 14:16:11 by mcherel-          #+#    #+#             */
/*   Updated: 2021/11/28 16:55:50 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void * ft_memmove( void * dest, const void * src, size_t size )
{
	size_t i;

	if(dest > src)//si dest depasse la src on copie par la fin
	{
		i = size;
		while(i > 0)
		{
			i--;
			*((char *)dest + i) = *((char *)src + i);
		}
	}
	else
	{
		i = 0;
		while (i < size)
		{
			*((char *)dest + i) = *((char *)src + i);
			i++;
		}
	}			

	return (dest);
}
#include <string.h>
#include <stdio.h>

int main(void) {
	char a[]="ABCDEFGH";

  	char b[]="ABCDEFGH";

    	ft_memmove(a+3,a,5);
      	puts(a);

        memmove(b+3,b,5);
	puts(b);

    return (0);


}
