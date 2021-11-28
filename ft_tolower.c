/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:02:46 by mcherel-          #+#    #+#             */
/*   Updated: 2021/11/28 17:45:32 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower( int c )
{
	if (c >= 'A' && c <= 'Z')
                        c = c + 32;
	return (c);
}

#include <stdio.h>
#include <ctype.h>
int main (void)
{
	
	printf("%c : %c\n",ft_tolower('A'), tolower('A'));//a
	printf("%c : %c\n",ft_tolower('@'), tolower('@'));//@
	printf("%c : %c\n",ft_tolower('!'), tolower('!'));//!
	printf("%c : %c\n",ft_tolower('s'), tolower('s'));//s
	printf("%c : %c\n",ft_tolower(80), tolower(80));//p

	return (0);
}
