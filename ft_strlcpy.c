/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:05:46 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/08 11:26:20 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srcl;
	size_t dstl;
	size_t i;

	srcl = ft_strlen(src);
	dstl = ft_strlen(dst);
	i = 0;
   	
	while (src[i] != '\0' && 1 < dstsize)
			{
				dst[i] = src[i];
				i++;
			}
	//while (src[i] 1= '\0' && 
	dst[i] = '\0';
	//if (dstsize == 0)
	//	return (0);
		
	return (srcl);
}
