/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:20:35 by loflavel          #+#    #+#             */
/*   Updated: 2021/09/07 14:13:35 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
/*DESCRIPTION: Deletes and frees the given element and every
successor of that element, using the function ’del’ and free(3). 
Finally, the pointer to the list must be set to NULL.
#1. The adress of a pointer to an element.
#2. The adress of the function used to delete the content of the element.*/
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
