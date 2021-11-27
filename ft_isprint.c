/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:43:10 by mcherel-          #+#    #+#             */
/*   Updated: 2021/11/27 17:54:44 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint( int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

#include <ctype.h>
#include <stdio.h>

int main (void)
{

	printf ("%d : %d\n", isprint(32), ft_isprint(32));
	printf ("%d : %d\n", isprint(0), ft_isprint(0));
	printf ("%d : %d\n", isprint('A'), ft_isprint('A'));
	printf ("%d : %d\n", isprint('@'), ft_isprint('@'));
	printf ("%d : %d\n", isprint(127), ft_isprint(127));
	printf ("%d : %d\n", isprint(155), ft_isprint(155));
	printf ("%d : %d\n", isprint('0'), ft_isprint('0'));
	printf ("%d : %d\n", isprint(-1), ft_isprint(-1));
	return (0);
}
