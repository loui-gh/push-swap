/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:01:10 by loflavel          #+#    #+#             */
/*   Updated: 2021/09/07 14:16:20 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*DESCRIPTION: Takes as a parameter an element and frees the
memory of the element’s content using the function
’del’ given as a parameter and free the element.
The memory of ’next’ must not be freed.
#1. The element to free.
#2. The address of the function used to delete the content.
**USE FREE** The free() function frees the memory space pointed to by ptr, 
which must have been returned by a previous call to malloc(), 
calloc() or realloc(). */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(del)(lst->content);
	free (lst);
}
