/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 06:33:28 by loflavel          #+#    #+#             */
/*   Updated: 2021/07/26 04:28:49 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* What it does: sets the first n bytes of the area 
** starting at s to zero (bytes containing aq\0aq)
** RETURN VALUE: None */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		*ptr++ = 0;
		i++;
	}
}
