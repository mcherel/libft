/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:15:53 by mcherel-          #+#    #+#             */
/*   Updated: 2021/11/29 17:25:45 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;

	while (str1[i] == str2[i] && i < n && str1[i] != '\0' && str2[i] != '\0')
	      i++;
		
	return (str1[i] - str2[i]);
}
#include <stdio.h>
#include <string.h>

int main () {
	
   	printf("%d : %d\n", strncmp("abcdef", "ABCDEF", 20), ft_strncmp("abcdef", "ABCDEF", 20));
	printf("%d : %d\n", strncmp("Hello", "HEllo", 0), ft_strncmp("Hello", "HEllo", 0));
	printf("%d : %d\n", strncmp("Hello", "HEllo", 6), ft_strncmp("Hello", "HEllo", 6));
	printf("%d : %d\n", strncmp("tralala", "tralalalala", 10), ft_strncmp("tralala", "tralalalala", 10));
	printf("%d : %d\n", strncmp("totototo", "toto", 10), ft_strncmp("totototo", "toto", 10));
	printf("%d : %d\n", strncmp("vvv", "", 77), ft_strncmp("vvv", "", 77));


   
   return(0);
}
