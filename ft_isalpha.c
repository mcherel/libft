/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:00:23 by mcherel-          #+#    #+#             */
/*   Updated: 2021/11/26 16:52:37 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha (char c)
{

	int result = 0;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z'))
			result = 1;

	return result;
}
/*
#include <stdio.h>
void ft_message(char *str)
{
	int i = 0;
	char *message;
	while(str[i] != '\0')
	{
		if (ft_isalpha(str[i]))
		{
			message = "Your entery is correct"; 
		}
		else
		{
			message = "WRONG ENTERY";
			printf("%s", message);
			return;

		}
		i++;
	} printf("%s",message);
}
//#include <ctype.h> 

//#include <stdio.h>
int main (void)
{
	ft_message("h3llo");
	return (0);
}*/
//#include "../ft_tests.h"
#include <ctype.h>
#include <stdio.h>

/*int	main(void)
{
	int		c;

	c = -1000;
	while (c <= 1000)
	{
		if (isalpha(c) != ft_isalpha(c))
		{
			printf("KO: ft_isalpha\n");
			printf("%s\n", (char *)&c);
			printf("%d : %d\n", isalpha(c), ft_isalpha(c));
		}
		c++;
	}
	printf("OK: ft_isalpha\n");
}*/
int main (void)
{
	printf("1 %d : %d\n", isalpha('1'), ft_isalpha('1'));
	printf("2 %d : %d\n", isalpha('a'), ft_isalpha('a'));
	printf("3 %d : %d\n", isalpha('Z'), ft_isalpha('Z'));
	printf("4 %d : %d\n", isalpha('@'), ft_isalpha('@'));
	printf("5 %d : %d\n", isalpha('M'), ft_isalpha('M'));
	printf("6 %d : %d\n", isalpha(24), ft_isalpha(24));
	printf("7 %d : %d\n", isalpha(), ft_isalpha(24));
	return (0);
}
