/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:05:41 by mcherel-          #+#    #+#             */
/*   Updated: 2021/11/30 13:16:50 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"//inclure ficher .h et bzero


void * calloc( size_t elementCount, size_t elementSize )
{
	void *tab;

	tab = malloc(sizeof(elementSize) * elementCount);

	return (tab);
}
