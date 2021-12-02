/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:02:46 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/02 18:01:18 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower( int c )
{
	if (c >= 'A' && c <= 'Z')
                        c = c + 32;
	return (c);
}
