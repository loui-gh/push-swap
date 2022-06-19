/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 06:47:15 by loflavel          #+#    #+#             */
/*   Updated: 2021/11/12 21:33:10 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: what it does: computes the length of the string str up to, 
* but not including the terminating null character
* RETURN VALUE: the length of string (int) */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
