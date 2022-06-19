/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:41:32 by loflavel          #+#    #+#             */
/*   Updated: 2021/08/10 17:57:23 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: searches for the LAST occurrence of the character c
* (an unsigned char) in the string pointed to by the argument str.
** RETURNS: last occurance + rest of string OR NULL if c not found in string
** *NOTE* c − is the character to be located. It is passed as its int promotion,
** but it is internally converted back to char
*/

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	char	*ptr;

	ptr = (char *)string + ft_strlen(string);
	c = (char)c;
	while (ptr >= string)
	{
		if (*ptr == c)
			return (ptr);
		ptr--;
	}
	return (0);
}
