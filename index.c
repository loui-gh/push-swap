/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 19:16:49 by Loui :)           #+#    #+#             */
/*   Updated: 2022/04/15 22:59:04 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	swap(int *xp, int *yp)
{
	int	temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int	*create_int_array(char **argv, t_node *stack)
{
	int	i;
	int	j;
	int	*values;

	i = 1;
	j = 0;
	values = ft_calloc(ft_sizeof_stack(stack), sizeof(int));
	while (argv[i])
	{
		values[j] = ft_atoi(argv[i]);
		i++;
		j++;
	}
	return (values);
}

void	bubblesort(int *arr, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j + 1], &arr[j]);
			}
			j++;
		}
		i++;
	}
}

void	create_index(int argc, char **argv, t_node *head)
{
	int		*values;
	int		i;
	t_node	*ptr;

	values = create_int_array(argv, head);
	bubblesort(values, argc - 1);
	i = 0;
	while (i < (argc -1))
	{
		ptr = head;
		while (ptr != NULL)
		{
			if (ptr->value == values[i])
			{
				ptr->index = i;
				break ;
			}
			ptr = ptr->next;
		}
		i++;
	}
	free(values);
}
