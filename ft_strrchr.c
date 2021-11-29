/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:46:16 by mcherel-          #+#    #+#             */
/*   Updated: 2021/11/29 15:54:20 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
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
    ptr = strrchr("Apprendre à programmer en C/C++1", 'p');
    ptr1 = ft_strrchr("Apprendre à programmer en C/C++2", 'p');
 
 
         //Afficher la chaîne à partir de premier espace trouvé
    printf("%s\n",ptr);
    printf("%s\n",ptr1);

 return (0);
 }
