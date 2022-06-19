/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 07:20:46 by loflavel          #+#    #+#             */
/*   Updated: 2021/09/07 14:21:24 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: concatenate string; c
** only concatenate if dst_len < n - 1 because we don't want the buffer (N)
* to overflow. 
* Both strings are NUL-terminated, and the concatenated string
* needs to be as well
* 
* take the full size of the buffer (not just the length) and guarantee 
* to NUL-terminate the result (as long as size is larger than 0 or, 
* in the case of strlcat(), as long as there is at least one byte free 
* in dst). Note that a byte for the NUL should be included in size. 
* Also note that strlcpy() and strlcat() only operate on true ''C'' strings. 
* This means that for strlcpy() src must be NUL-terminated and for strlcat() 
* both src and dst must be NUL-terminated. 
* 
* Note, however, that if strlcat() traverses size characters without 
* finding a NUL, the length of the string is considered to be size and the 
* destination string will not be NUL-terminated (since there was no space 
* for the NUL). This keeps strlcat() from running off the end of a string. 
* In practice this should not happen (as it means that either size is incorrect 
* or that dst is not a proper ''C'' string). 
*
* N has to be 2 > dst_lent for concatenation to take place
*
* RETURN VALUE: the initial length of dst plus 
* the length of src AS A NUMBER */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	offset;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = 0;
	offset = dst_len;
	if (n < dst_len || n == 0)
		return (src_len + n);
	while (dst_len < n - 1 && *(src + j) != '\0')
	{
		*(dst + offset) = *(src + j);
		offset++;
		j++;
		if (offset == n - 1)
			break ;
	}
	*(dst + offset) = '\0';
	return (dst_len + src_len);
}
