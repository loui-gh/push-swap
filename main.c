/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 23:00:41 by Loui :)           #+#    #+#             */
/*   Updated: 2022/04/15 23:10:35 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_node	*create_stack_a(char **argv, t_node *head)
{
	int		i;
	int		j;
	t_node	*tmp;

	i = 1;
	while (argv[i])
	{
		j = ft_atoi_long(argv[i]);
		tmp = ft_newnode(j);
		ft_addnode_back(&head, tmp);
		i++;
	}
	return (head);
}

void	ft_error_checker(int argc, char **argv)
{
	if (argc <= 2)
		exit (EXIT_FAILURE);
	check_digits(argv);
	check_int_max(argv);
	duplicates(argv);
}

int	main(int argc, char **argv)
{
	t_vars	*ptr;

	ft_error_checker(argc, argv);
	ptr = malloc(sizeof(t_vars));
	ptr->stack_a = NULL;
	ptr->stack_b = NULL;
	ptr->stack_a = create_stack_a(argv, ptr->stack_a);
	if (check_if_sorted(ptr->stack_a) == 0)
		close_free(ptr);
	else if (check_if_sorted(ptr->stack_a) != 0)
	{
		if (argc - 1 <= 5)
		{
			sort_small_stack(argc, ptr);
			if (check_if_sorted(ptr->stack_a) == 0)
				close_free(ptr);
		}
		else if (argc - 1 > 5)
		{
			create_index(argc, argv, ptr->stack_a);
			big_stack(ptr);
		}
	}
	return (0);
}
