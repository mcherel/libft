/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:40:51 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/04 19:37:56 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La fonction atoi() convertit le début de la chaîne 
  pointée par nptr en entier de type int */
#include "libft.h"
int ft_isspace(char c);

int ft_atoi(const char *nptr)
{
	int i;
	int nbr;
	int sign;
	
	i = 0;
	nbr = 0;
	sign = 1;
	if (!nptr)             
		return (0);
	while (ft_isspace(nptr[i]) && (nptr[i] != '\0'))
		i++;
	if(nptr[i] == '-')
		sign = -1;
	if(!ft_isdigit(nptr[i]))	
		i++;
	while ((nptr[i] != '\0') && ft_isdigit(nptr[i]))
	{
		nbr = nbr * 10 + (nptr[i] - 48);
		i++;	
	}	
	return (sign * nbr);
}

int ft_isspace(char c)
{
	if((c == ' ')
		|| (c == '\t')
		|| (c == '\n')
		|| (c == '\f')
		|| (c == '\v')
		|| (c == '\r'))
		return (1);
return(0);
}

