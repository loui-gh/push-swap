/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:10:08 by Loui :)           #+#    #+#             */
/*   Updated: 2022/04/15 21:38:10 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	two(t_vars *ptr)
{
	int	i;
	int	j;

	i = ptr->stack_a->value;
	j = ptr->stack_a->next->value;
	if (i > j)
		sa(ptr->stack_a);
}

void	three(t_vars *ptr)
{
	int	array[3];

	array[0] = ptr->stack_a->value;
	array[1] = ptr->stack_a->next->value;
	array[2] = ptr->stack_a->next->next->value;
	if (array[0] > array[1] && array[0] > array[2] && array[1] > array[2])
	{
		sa(ptr->stack_a);
		rra(&ptr->stack_a);
	}
	else if (array[0] > array[1] && array[0] > array[2] && array[1] < array[2])
		ra(&ptr->stack_a);
	else if (array[0] < array[1] && array[0] > array[2])
		rra(&ptr->stack_a);
	else if (array[0] > array[1] && array[0] < array[2])
		sa(ptr->stack_a);
	else if (array[0] < array[1] && array[0] < array[2] && array[2] < array[1])
	{
		sa(ptr->stack_a);
		ra(&ptr->stack_a);
	}
}

void	four(t_vars *ptr)
{
	int	index;

	index = ft_minnie(&ptr->stack_a);
	if (index == 0)
		pb(ptr);
	else if (index == 1)
	{
		sa(ptr->stack_a);
		pb(ptr);
	}
	else if (index == 2)
	{
		rra(&ptr->stack_a);
		rra(&ptr->stack_a);
		pb(ptr);
	}
	else if (index == 3)
	{
		rra(&ptr->stack_a);
		pb(ptr);
	}
	three(ptr);
	pa(ptr);
}

static void	five_normi_helper(t_vars *ptr)
{
	rra(&ptr->stack_a);
	rra(&ptr->stack_a);
	pb(ptr);
}

void	five(t_vars *ptr)
{
	int	index;

	index = ft_minnie(&ptr->stack_a);
	if (index == 0)
		pb(ptr);
	else if (index == 1)
	{
		ra(&ptr->stack_a);
		pb(ptr);
	}
	else if (index == 2)
	{
		ra(&ptr->stack_a);
		ra(&ptr->stack_a);
		pb(ptr);
	}
	else if (index == 3)
		five_normi_helper(ptr);
	else if (index == 4)
	{
		rra(&ptr->stack_a);
		pb(ptr);
	}
	four(ptr);
	pa(ptr);
}
