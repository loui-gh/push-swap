/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:19:36 by Loui :)           #+#    #+#             */
/*   Updated: 2022/04/15 19:25:31 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_first_to_back(t_node **lst, t_node *new)
{
	t_node	*ptr;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		ptr = *lst;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
}

t_node	*ft_addnode_front(t_node **head, t_node *new)
{
	new->next = *head;
	*head = new;
	return (new);
}

t_node	*ft_newnode(int value)
{
	t_node	*new;

	new = malloc (sizeof(t_node));
	new->value = value;
	new->next = NULL;
	return (new);
}
/*DESCRIPTION: Counts the number of elements in a list.
RETURN VALUE: Length of the list.
#1. The beginning of the list.*/

int	ft_nr_nodes(t_node *lst)
{
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = lst;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

/*DESCRIPTION: Returns the last element of the list.
#1. The beginning of the list. */

t_node	*ft_lastnode(t_node *head)
{
	while (head)
	{
		if (!head->next)
			return (head);
		head = head->next;
	}
	return (head);
}
