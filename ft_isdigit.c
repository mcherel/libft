/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:27:59 by mcherel-          #+#    #+#             */
/*   Updated: 2021/11/26 18:46:30 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit( int c )
{
	if (c >= '0' && c <= '9')
		return 1;

	return 0;
}

#include <stdio.h>
#include <ctype.h>
int main (void)
{
	printf("%d : %d\n", isdigit(48), ft_isdigit(48));
	printf("%d : %d\n", isdigit('0'), ft_isdigit('0'));
	printf("%d : %d\n", isdigit('5'), ft_isdigit('5'));
	printf("%d : %d\n", isdigit(53), ft_isdigit(53));
	printf("%d : %d\n", isdigit('a'), ft_isdigit('a'));

}
