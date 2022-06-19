/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:01:19 by Loui :)           #+#    #+#             */
/*   Updated: 2022/04/15 20:37:23 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	check_digits(char **argv)
{
	char	*c;
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		c = argv[i];
		while (c[j] != '\0')
		{
			if (c[j] == '-')
				j++;
			if (ft_isdigit(c[j]) == 0)
			{
				ft_putstr("Error: list may only contain digits\n");
				exit (EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}

void	check_int_max(char **argv)
{
	int		i;
	long	j;

	i = 1;
	while (argv[i])
	{
		j = ft_atoi_long(argv[i]);
		if (j > INT_MAX || j < INT_MIN)
		{
			ft_putstr("Error: number cannot be greater than int max\n");
			exit (EXIT_FAILURE);
		}
		i++;
	}
}

int	compare(char *s1, char *s2, int flag)
{
	size_t	test;
	size_t	c;

	c = ft_strlen(s2);
	test = ft_strncmp(s1, s2, c);
	if (test == 0)
		flag++;
	if (flag >= 2)
	{
		printf("Error: duplicate found!\n");
		free(s1);
		exit (EXIT_FAILURE);
	}
	return (flag);
}

void	duplicates(char **argv)
{
	int		i;
	int		j;
	int		flag;
	char	*string;
	size_t	c;

	i = 1;
	while (argv[i])
	{
		c = ft_strlen(argv[i]);
		string = malloc (c + 1);
		ft_strlcpy(string, argv[i], c + 1);
		j = 1;
		flag = 0;
		while (argv[j])
		{
			flag = compare(string, argv[j], flag);
			j++;
		}
		free(string);
		i++;
	}
}
