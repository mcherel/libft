/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:32:03 by mcherel-          #+#    #+#             */
/*   Updated: 2021/11/27 17:14:27 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum( int c )
{
	if((c >= 'a' && c <= 'z') 
	 || (c >= 'A' && c <= 'Z') 
	 || (c >= '0' && c <= '9'))
		return (1);
	
	return (0);
}

#include <stdio.h>
#include <ctype.h>

int main (void)
{
	printf("%d : %d\n", isalnum(48), ft_isalnum(48));
	printf("%d : %d\n", isalnum('0'), ft_isalnum('0'));
	printf("%d : %d\n", isalnum('M'), ft_isalnum('M'));
	printf("%d : %d\n", isalnum('@'), ft_isalnum('@'));
	printf("%d : %d\n", isalnum('r'), ft_isalnum('r'));
	printf("%d : %d\n", isalnum('|'), ft_isalnum('|'));

	return (0);
}
