/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 07:14:34 by loflavel          #+#    #+#             */
/*   Updated: 2021/08/13 13:24:34 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: fills the first n bytes of the memory area
* pointed to by str with the constant byte c 
* RETURN VALUE: a pointer to the memory area str*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)(str))[i] = (unsigned char)c;
		i++;
	}
	return ((void *)str);
}
