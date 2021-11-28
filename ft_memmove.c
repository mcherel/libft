/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 14:16:11 by mcherel-          #+#    #+#             */
/*   Updated: 2021/11/28 16:42:32 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void * ft_memmove( void * dest, const void * src, size_t size )
{
	size_t i;

	if(dest > src)//si dest depasse la src on copie par la fin
	{
		i = size;
		while(i > 0)
		{
			i--;
			*((char *)dest + i) = *((char *)src + i);
		}
	}
	else
	{
		i = 0;
		while (i < size)
		{
			*((char *)dest + i) = *((char *)src + i);
			i++;
		}
	}			

	return (dest);
}
#include <stdio.h>
#include <string.h>

#define ELEMENT_COUNT 10

int main() {
/*
    // On crée une zone de mémoire de 10 entiers et contenant
    // que neuf valeurs. La dixième est non utilisée (0).
    int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };

    // On affiche le contenu de la collection
    for( int i=0; i<ELEMENT_COUNT; i++ ) {
        printf( "%d ", data[i] );
    }
    puts( "" );  // Un retour à la ligne

    // On décale les éléménts dans la collection ...
    void * source = (void *) data;
    void * destination = (void *) ( data + 1 );
    size_t size = ELEMENT_COUNT * sizeof( int );
    memmove( destination, source, size );

    // ... pour y insérer une nouvelle valeur en tête
    data[0] = 10;

    // On affiche le contenu de la collection
    for( int i=0; i<ELEMENT_COUNT; i++ ) {
        printf( "%d ", data[i] );
    }
    puts( "" );  // Un retour à la ligne*/
	char a[]="ABCDEFGH";

  	char b[]="ABCDEFGH";

    	ft_memmove(a+3,a,5);
      	puts(a);

        memmove(b+3,b,5);
	puts(b);

    return EXIT_SUCCESS;


}
