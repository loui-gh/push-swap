/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:50:17 by Loui :)           #+#    #+#             */
/*   Updated: 2022/04/15 19:29:02 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_delete_head(t_node **head)
{
	t_node	*tmp;

	tmp = *head;
	*head = tmp->next;
	free(tmp);
}

void	ft_addnode_back(t_node **head, t_node *new)
{
	t_node	*last;

	if (head)
	{
		if (*head)
		{
			last = ft_lastnode(*head);
			last->next = new;
		}
		else
			*head = new;
	}
}

int	ft_sizeof_stack(t_node *lst)
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

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	ft_minnie(t_node **head)
{
	int		index;
	int		min;
	t_node	*tmp;
	int		i;

	min = (*head)->value;
	i = 0;
	index = 0;
	tmp = NULL;
	tmp = *head;
	while (tmp->next != NULL)
	{
		if (min > tmp->next->value)
		{
			min = tmp->next->value;
			index = i + 1;
		}
		i++;
		tmp = tmp->next;
	}
	return (index);
}
