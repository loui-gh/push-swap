/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 07:00:29 by loflavel          #+#    #+#             */
/*   Updated: 2021/07/22 11:49:13 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: allocates the requested memory and 
* returns a pointer to it. The difference in malloc 
* and calloc is that calloc sets allocated memory to zero
* RETURN VALUE: It returns a void pointer, 
* which points to the base address of the allocated memory */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	final_size;
	int		i;

	final_size = count * size;
	ptr = malloc(final_size);
	if (!ptr)
		return (0);
	i = 0;
	while (final_size)
	{
		ptr[i] = 0;
		i++;
		final_size--;
	}
	return (ptr);
}
