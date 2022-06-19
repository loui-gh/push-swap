/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:09:55 by loflavel          #+#    #+#             */
/*   Updated: 2022/04/08 11:42:54 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*DESCRIPTION: Adds the element ’new’ at the beginning of the list.
#1. The address of a pointer to the first link of a list.
#2. The address of a pointer to the element to be added to the list.*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

	// if (lst)
	// {
	// 	if (*lst)
	// 		new->next = *lst;
	// 	*lst = new;
	// }