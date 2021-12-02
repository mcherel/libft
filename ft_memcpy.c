/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:37:57 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/02 14:39:53 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

void * ft_memcpy( void * dest, const void * src, size_t size )
{
	size_t i;

	i = 0;
	while (size > i)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return(dest);
}

#include <stdio.h>
#include <string.h>

int main() {

    int array [] = { 57, 85, 29, 63, 21 };
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


