/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:59:09 by Loui :)           #+#    #+#             */
/*   Updated: 2022/04/15 23:07:02 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_bits(t_node **stack_a)
{
	int		max_num;
	int		max_bits;

	max_bits = 0;
	max_num = ft_sizeof_stack(*stack_a) - 1;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	ft_normi_bigstack(int i, t_vars *ptr)
{
	int	j;
	int	size;

	size = ft_sizeof_stack(ptr->stack_a);
	j = 0;
	while (j < size)
	{
		if ((ptr->stack_a->index >> i & 1) == 1)
			ra(&ptr->stack_a);
		else
			pb(ptr);
		j += 1;
	}
}

void	big_stack(t_vars *ptr)
{
	int	i;
	int	bits;
	int	size;

	bits = ft_bits(&ptr->stack_a);
	i = 0;
	while (i < bits)
	{
		ft_normi_bigstack(i, ptr);
		size = ft_sizeof_stack(ptr->stack_b);
		while (size != 0)
		{
			pa(ptr);
			size--;
		}
		if (check_if_sorted(ptr->stack_a) == 0)
			close_free(ptr);
	i++;
	}
}
