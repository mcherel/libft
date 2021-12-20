/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:30:40 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/20 13:05:02 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last;

	if (!alst)
		return ;
	if(!*alst)
		last = new;
	else
	{	
		last = ft_lstlast(*alst);
		last->next = new;
	}	
	*alst = last;
}
