/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:04:32 by Loui :)           #+#    #+#             */
/*   Updated: 2022/04/12 16:02:06 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

/*The first element becomes the last one.*/

void	ra(t_node **head)
{
	t_node	*last;
	t_node	*new_head;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	else
	{
		new_head = (*head)->next;
		last = ft_lastnode(*head);
		last->next = *head;
		last->next->next = NULL;
		*head = new_head;
	}
	write(1, "ra\n", 3);
}

void	rb(t_node **head)
{
	t_node	*last;
	t_node	*new_head;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	else
	{
		new_head = (*head)->next;
		last = ft_lastnode(*head);
		last->next = *head;
		last->next->next = NULL;
		*head = new_head;
	}
	write(1, "rb\n", 3);
}

void	rr(t_vars *ptr)
{
	ra(&ptr->stack_a);
	rb(&ptr->stack_b);
	ft_putstr("You need to fix this error now\n");
}
