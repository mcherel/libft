/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:37:57 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/02 17:37:02 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void * ft_memcpy( void * dest, const void * src, size_t size )
{
	size_t i;

	i = 0;
	while (size > i)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return(dest);
}
