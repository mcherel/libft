/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:33:05 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/10 17:15:31 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* allocates sufficient memory for a copy of the string s1, does the copy, 
 * and returns a pointer to it
 * The pointer may subsequently be used as an argument to the function free*/
#include "libft.h"
char * ft_strdup(const char *s1)
{
	char * strc;

	strc = (char *) malloc((strlen(s1) + 1) * sizeof(char));
	if (!strc)
		return (0);
	ft_strlcpy(strc, s1, strlen(s1) + 1);
	return (strc);
}

