/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:00:23 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/02 16:10:05 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha (char c)
{

	int result = 0;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z'))
			result = 1;

	return result;
}
