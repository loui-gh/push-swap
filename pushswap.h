/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:10:43 by Loui :)           #+#    #+#             */
/*   Updated: 2022/04/15 23:12:52 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>//DELETE
# include <limits.h>
# include <unistd.h>
# include "./libft/libft.h"

# define INT_MAX   __INT_MAX__

typedef struct s_node
{
	int				index;
	int				value;
	struct s_node	*next;
}	t_node;

typedef struct s_vars
{
	t_node	*stack_a;
	t_node	*stack_b;
}	t_vars;

void	ft_putstr(char *s);
int		ft_atoi_long(const char *str);
int		atoi_mod(const char *str);
int		ft_minnie(t_node **head);
t_node	*ft_addnode_front(t_node **head, t_node *new);
t_node	*ft_newnode(int value);
int		ft_nr_nodes(t_node *lst);
t_node	*ft_lastnode(t_node *head);
void	ft_addnode_back(t_node **head, t_node *new);
void	ft_delete_head(t_node **head);
int		ft_sizeof_stack(t_node *lst);
void	ft_first_to_back(t_node **lst, t_node *new);
void	pa(t_vars *ptr);
void	pb(t_vars *ptr);
void	sa(t_node *head);
void	sb(t_node *head);
void	ss(t_vars *ptr);
void	ra(t_node **head);
void	rb(t_node **head);
void	rr(t_vars *ptr);
void	rra(t_node **head);
void	rrb(t_node **head);
void	check_digits(char **argv);
void	check_int_max(char **argv);
void	duplicates(char **argv);
void	two(t_vars *ptr);
void	three(t_vars *ptr);
void	four(t_vars *ptr);
void	five(t_vars *ptr);
void	sort_small_stack(int argc, t_vars *ptr);
void	big_stack(t_vars *ptr);
int		check_if_sorted(t_node *head);
void	create_index(int argc, char **argv, t_node *head);
void	ft_destroy_stack(t_node *stack);
void	close_free(t_vars *ptr);
#endif