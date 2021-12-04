/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:32:03 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/04 17:39:42 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_isalnum( int c )
{
	if(ft_isalpha(c) || ft_isdigit(c))
		return (1);
	
	return (0);
}
