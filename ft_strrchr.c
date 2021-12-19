/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:46:16 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/19 13:42:20 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* return a pointer to the byte or 
 a null pointer if searchedChar does not occur in the string */
#include "libft.h"

char	*ft_strrchr( const char *string, int searchedChar )
{
	char	*last;

	last = NULL;
	while (*string != '\0')
	{
		if (*string == searchedChar)
			last = ((char *)string);
		string++;
	}
	if (searchedChar == '\0')
		return ((char *)string);
	return (last);
}
