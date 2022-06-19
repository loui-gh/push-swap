/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:23:13 by loflavel          #+#    #+#             */
/*   Updated: 2021/09/07 14:15:29 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*DESCRIPTION: Returns the last element of the list.
#1. The beginning of the list. */
t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	int		n;
	t_list	*tmp;

	i = 0;
	n = ft_lstsize(lst);
	tmp = lst;
	while (i < n)
	{
		i++;
		tmp = tmp->next;
	}
	return (tmp);
}
