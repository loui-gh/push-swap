/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 10:02:05 by loflavel          #+#    #+#             */
/*   Updated: 2021/07/22 04:17:07 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: copies n bytes from memory area src
* to memory area dest. The memory areas must not overlap.
* RET: a pointer to dest.The memory areas must not overlap.
* DIFF btwn strcpy & memcpy: strcpy stops when 
* it encounters a NUL ('\0') character, memcpy does not*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*ptr_dst;
	const char	*ptr_src;

	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	ptr_dst = (char *)dst;
	ptr_src = (const char *)src;
	while (n--)
		ptr_dst[n] = ptr_src[n];
	return (dst);
}
