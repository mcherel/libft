/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:01:08 by mcherel-          #+#    #+#             */
/*   Updated: 2021/11/27 18:28:59 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t ft_strlen( const char * str )
{
	size_t i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
#include <string.h>
int main (void)
{
	printf("%lu : %lu\n", strlen("Hello"), ft_strlen("Hello"));
	printf("%lu : %lu\n", strlen("1245"), ft_strlen("1245"));
	printf("%lu : %lu\n", strlen("Setter..."), ft_strlen("Setter..."));
	printf("%lu : %lu\n", strlen("@@@@@@"), ft_strlen("@@@@@@"));
	printf("%lu : %lu\n", strlen(""), ft_strlen(""));

	return (0);
}
