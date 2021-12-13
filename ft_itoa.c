/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:51:26 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/13 15:40:38 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
static int ft_getlen(int nb);
static char *ft_getstr(char *str, unsigned long nb, int len);

char *ft_itoa(int n)
{
	char * result;
	int len;
	unsigned long nb;

	
	//if(n == NULL || n > INT_MAXI || n < (int)INT_MINI)
	//  return (NULL);
	len = ft_getlen(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if(!result)
		return (NULL);
//	printf("LEN : %i\n",len);
	result[len--] = '\0';
	if (n  == '0')
	 result[0] = '0';	
	if (n < 0)
	{
		nb = (unsigned long) n * -1;
		*result = '-';			
	}
	else
		nb = (unsigned long) n;
	
   	result = ft_getstr(result, nb, len);
	return (result);
}

static int ft_getlen(int nb)
{
	int i;
//	unsigned int nomb;

//	if (nb < 0)
//		nomb = nb * -1;
//	else
//		nomb = nb;
	i = 0;
	if (nb <= 0)
		i++;
	while(nb != 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

static char *ft_getstr(char *str, unsigned long nb, int len)
{
	
	
//	if (nb < 0)
//		*result = '-'
	while (nb > 0)
	{
		str[len--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}
