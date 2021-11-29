/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:01:23 by mcherel-          #+#    #+#             */
/*   Updated: 2021/11/29 13:36:48 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
char * ft_strchr( const char * string, int searchedChar )//retourne ptr 1ere occ
{	
	while (*string != '\0' && *string != (char)searchedChar)
		string++;
	if (*string == (char)searchedChar)
		return ((char *)string);
	return (NULL);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
   char *ptr;
   char *ptr1;
    /*
	 Retourner un pointeur sur la première occurence
	  d'espace
	*/
   ptr = strchr("Apprendre à programmer en C/C++1", 'C');
   ptr1 = ft_strchr("Apprendre à programmer en C/C++2", 'C');

 
	//Afficher la chaîne à partir de premier espace trouvé
   printf("%s\n",ptr);
   printf("%s\n",ptr1);
 
    return 0;
}
