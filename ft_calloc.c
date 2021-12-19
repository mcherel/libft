/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:05:41 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/19 12:23:36 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*allocates memory for an array of elementCount elements of 
 * size elementSize each and returns a pointer to the allocated memory. 
 * The memory is set to zero.*/

#include "libft.h"

void	*ft_calloc( size_t elementCount, size_t elementSize )
{
	void	*tab;

	tab = malloc(elementSize * elementCount);
	if (tab == NULL)
		return (tab);
	ft_bzero(tab, elementSize * elementCount);
	return (tab);
}
