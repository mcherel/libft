/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:37:57 by mcherel-          #+#    #+#             */
/*   Updated: 2021/11/28 13:18:17 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
void * ft_memcpy( void * destination, const void * source, size_t size )
{
	char *dest;
	const char *src;
	size_t i;

	dest = (char *)destination;
	src = (char *)source;
	i = 0;
	while (size > i)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return(dest);
}

#include <stdio.h>
#include <string.h>

int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    int * copy = NULL;
    int * copy1 = NULL;
    int length = sizeof( int ) * 5;
       
    /* Memory allocation and copy */
    copy = (int *) malloc( length );
    copy1 = (int *) malloc( length );
    memcpy( copy, array, length );
    ft_memcpy( copy1, array, length );
        
    /* Display the copied values */
    for( length=0; length<5; length++ ) {
        printf( "%d : %d\n", copy[length], copy1[length] );
    }
        
    free( copy );
    free( copy1 );
 	

    return EXIT_SUCCESS;
}


