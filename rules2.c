/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:58:31 by Loui :)           #+#    #+#             */
/*   Updated: 2022/04/12 16:01:56 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rra(t_node **head)
{
	t_node	*second_last;
	t_node	*last;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			second_last = last;
			last = last->next;
		}
		second_last->next = NULL;
		last->next = *head;
		*head = last;
	}
	write(1, "rra\n", 4);
}

void	rrb(t_node **head)
{
	t_node	*second_last;
	t_node	*last;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			second_last = last;
			last = last->next;
		}
		second_last->next = NULL;
		last->next = *head;
		*head = last;
	}
	write(1, "rrb\n", 4);
}

void	rrr(t_vars *ptr)
{
	rra(&ptr->stack_a);
	rrb(&ptr->stack_b);
	ft_putstr("You need to fix this error now\n");
}
