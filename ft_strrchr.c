/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:46:16 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/02 18:17:23 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 char * ft_strrchr( const char * string, int searchedChar )//retourne ptr dern oc
 {
	char * last;

	last = NULL;
	 
	 while (*string != '\0')
	 {
	 	if (*string == (char)searchedChar)
			last = ((char *)string);
	 	string++;
	 }

         return (last);
 }
