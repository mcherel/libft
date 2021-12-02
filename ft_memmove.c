/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 14:16:11 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/02 17:46:49 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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
