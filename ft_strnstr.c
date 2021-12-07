/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:45:12 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/07 17:34:33 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*locates the	first occurrence of the	null-terminated string little in the	
 * string big, where not more than	len characters are searched.*/
#include "libft.h" 
char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;

	i = 0;
	if ( *little == '\0' || len == 0 
			|| (ft_strncmp(big, little, len) == 0 
				 && ft_strlen(big) == ft_strlen(little)))
		return ((char *)big);
	while (big[i] != '\0' && big[i])
	{
		if (ft_strncmp(&big[i], little, len) == 0 
				&& little[len-1] == '\0')
			return ((char *)&big[i]);
		else if (ft_strncmp(&big[i], little, ft_strlen(little)) == 0
				&& len > ft_strlen(little)) 
			return ((char *)&big[i]);
		else
			i++;
	}
	return (NULL);
}
