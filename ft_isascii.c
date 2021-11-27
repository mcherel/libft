/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:57:47 by mcherel-          #+#    #+#             */
/*   Updated: 2021/11/27 16:43:53 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("%d : %d\n", isascii(0), ft_isascii(0));
	printf("%d : %d\n", isascii('M'), ft_isascii('M'));
	printf("%d : %d\n", isascii('@'), ft_isascii('@'));
	printf("%d : %d\n", isascii('r'), ft_isascii('r'));
	printf("%d : %d\n", isascii('|'), ft_isascii('|'));
	printf("%d : %d\n", isascii(48), ft_isascii(48));
	printf("%d : %d\n", isascii(127), ft_isascii(127));
	printf("%d : %d\n", isascii(155), ft_isascii(155));
	printf("%d : %d\n", isascii(-1), ft_isascii(-1));
	return (0);
}
