/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:18:21 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/15 10:50:46 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char **ft_split(char const *s, char c)
{
	char **tab;
	int n;

	if (!s)
		return (NULL);
	n = 0;
	while (*s && *s++ == c)
	{	
		if (!(n != 0 && *s != s[n-1]))
			n++;
	}
	tab = (char **)ft_calloc(n + 1, sizeof(char*));
	while (*s++ && n-- > 0)
	{  
		*tab++ = ft_strchr(s++, c);//pas bon
	}
	return (tab);
}
