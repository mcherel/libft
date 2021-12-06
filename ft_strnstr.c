/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:45:12 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/06 17:29:55 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*locates the	first occurrence of the	null-terminated string little in the	
 * string big, where not more than	len characters are searched.*/
#include "libft.h" 
char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!little)
		return ((char *)big);
	while (big[i] != '\0' && big[i] != little[j])
	{
			i++;
		if (ft_strncmp(&big[i], &little[j], len) && little[j + len - 1] == '\0')
			return ((char *)&little[j]);
		else
			j++;
	}
	return (NULL);
}
