/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 06:33:49 by loflavel          #+#    #+#             */
/*   Updated: 2021/08/10 18:17:47 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* what it does: The memmove() function copies n bytes
* from memory area src to memory area dest. 
* The memory areas may overlap: copying takes place AS THOUGH - not actually!! 
* the bytes in src are first copied into a temporary array 
* that does not overlap src or dest, and the bytes are then
* copied from the temporary array to dest.
* RETURN VALUE; returns a pointer to dest
* diff btwn memmove, strncpy, memcpy:
* ***strncpy*** copies a 0-terminated C-string, i.e. it takes into account the 
* symbol 0 and after it does not copy. If necessary, finishes with zeros
* to the transmitted number of characters(num).
* ***memcpy*** copies the specified number of bytes.
* ***memmove copies a specified number of bytes as though it occurs through
* the intermediate buffer, so source and destination can overlap */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*m_dst;
	unsigned char	*m_src;

	m_dst = (unsigned char *) dst;
	m_src = (unsigned char *) src;
	if ((size_t)(m_dst - m_src) < n)
	{
		while (n--)
			*(m_dst + n) = *(m_src + n);
	}
	else
	{
		while (n--)
			*m_dst++ = *m_src++;
	}
	return (dst);
}
