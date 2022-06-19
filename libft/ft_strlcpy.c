/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 06:48:42 by loflavel          #+#    #+#             */
/*   Updated: 2021/08/10 18:06:01 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: copies up to size - 1 characters
* from the NUL-terminated string src to dst, NUL-terminating the result
* RETURN VALUE: the total length of src */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t N)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (N > 0)
	{
		while (--N && *src != '\0')
		{
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	return (src_len);
}
