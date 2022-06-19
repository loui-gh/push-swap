/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:19:02 by loflavel          #+#    #+#             */
/*   Updated: 2022/04/07 20:45:45 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION: Adds the element ’new’ at the end of the list.
#1. The address of a pointer to the first link of a list.
#2. The address of a pointer to the element to be added to the list.*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	
	last = ft_lstlast(*lst);
	
	last->next = new;
}
