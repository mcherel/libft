/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:55:38 by mcherel-          #+#    #+#             */
/*   Updated: 2021/11/28 18:00:31 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper( int c )
{
	if (c >= 'a' && c <= 'z')
                        c = c - 32;
	return (c);
}

#include <stdio.h>
#include <ctype.h>
int main (void)
{
	
	printf("%c : %c\n",ft_toupper('A'), toupper('A'));//A
	printf("%c : %c\n",ft_toupper('@'), toupper('@'));//@
	printf("%c : %c\n",ft_toupper('!'), toupper('!'));//!
	printf("%c : %c\n",ft_toupper('s'), toupper('s'));//S
	printf("%c : %c\n",ft_toupper(80), toupper(80));//P

	return (0);
}
