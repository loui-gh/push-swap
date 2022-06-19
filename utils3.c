/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 23:02:17 by Loui :)           #+#    #+#             */
/*   Updated: 2022/04/15 23:13:18 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	check_if_sorted(t_node *head)
{
	t_node	*tmp;
	int		i;

	tmp = head;
	i = 0;
	while (i < ft_sizeof_stack(head) -1)
	{
		if (tmp->value > tmp->next->value)
			return (1);
		tmp = tmp->next;
		i++;
	}
	return (0);
}

void	ft_destroy_stack(t_node *stack)
{
	t_node	*tmp;

	while (stack != NULL)
	{
		tmp = stack;
		stack = tmp->next;
		free(tmp);
	}
}

t_node	*create_temp_stack(char **argv, t_node *head)
{
	int		i;
	int		j;
	t_node	*tmp;

	i = 1;
	while (argv[i])
	{
		j = ft_atoi(argv[i]);
		tmp = ft_newnode(j);
		ft_addnode_front(&head, tmp);
		i++;
	}
	free (tmp);
	return (head);
}

void	sort_small_stack(int argc, t_vars *ptr)
{
	argc--;
	if (argc == 2)
		two(ptr);
	if (argc == 3)
		three(ptr);
	if (argc == 4)
		four(ptr);
	if (argc == 5)
		five(ptr);
}

void	close_free(t_vars *ptr)
{
	ft_destroy_stack(ptr->stack_a);
	free(ptr);
	exit (EXIT_SUCCESS);
}
