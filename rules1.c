/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:57:47 by Loui :)           #+#    #+#             */
/*   Updated: 2022/04/12 16:01:41 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

/*sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements*/

void	sa(t_node *head)
{
	int	node1;
	int	node2;

	if (ft_nr_nodes(head) < 2)
		return ;
	node1 = head->value;
	node2 = head->next->value;
	head->value = node2;
	head->next->value = node1;
	write(1, "sa\n", 3);
}

void	sb(t_node *head)
{
	int	node1;
	int	node2;

	if (ft_nr_nodes(head) < 2)
		return ;
	node1 = head->value;
	node2 = head->next->value;
	head->value = node2;
	head->next->value = node1;
	write(1, "sb\n", 3);
}

void	ss(t_vars *ptr)
{
	sa(ptr->stack_a);
	sb(ptr->stack_b);
	ft_putstr("You need to fix this error now\n");
}

/*pb (push b): Take the first element at the top of a 
and put it at the top of b. Do nothing if a is empty.*/
void	pb(t_vars *ptr)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (ptr->stack_a == NULL)
		return ;
	tmp1 = ptr->stack_a;
	tmp2 = ptr->stack_a->next;
	tmp1->next = ptr->stack_b;
	ptr->stack_b = tmp1;
	ptr->stack_a = tmp2;
	write(1, "pb\n", 3);
}

/*pa (push a): Take the first element at the top of b
and put it at the top of a. Do nothing if b is empty*/

void	pa(t_vars *ptr)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (ptr->stack_b == NULL)
		return ;
	tmp1 = ptr->stack_b;
	tmp2 = ptr->stack_b->next;
	tmp1->next = ptr->stack_a;
	ptr->stack_a = tmp1;
	ptr->stack_b = tmp2;
	write(1, "pa\n", 3);
}
