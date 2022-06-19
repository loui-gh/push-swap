/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:48:13 by loflavel          #+#    #+#             */
/*   Updated: 2021/08/10 18:09:09 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: searches for the first occurrence
* of the character c (an unsigned char)
* in the string pointed to by the argument str.
* RETURN VALUE: a pointer to the first occurrence
* of the character c in the string s*/

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	char	*ptr;

	ptr = (char *)string;
	c = (char)c;
	while (*ptr != '\0')
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	if (*ptr == c)
		return (ptr);
	return (NULL);
}
