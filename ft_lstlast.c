/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:20:45 by mcherel-          #+#    #+#             */
/*   Updated: 2021/12/20 12:29:26 by mcherel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	int	i;

	i = 0;
	while (i < ft_lstsize(lst))
	{
		++i;
		lst = lst->next;
	}	
	return (lst);
}
/*retuns the last listelement*/
