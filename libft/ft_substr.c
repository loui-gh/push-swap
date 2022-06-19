/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:24:20 by loflavel          #+#    #+#             */
/*   Updated: 2021/12/15 23:50:14 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a ptr? to substring
* of the string ’s’. The substring begins at index
* ’start’ and is of maximum size ’len’.
* #1. The string from which to create the substring
* #2. The start index of the substring in the string
* #3. The maximum length of the substring. 
** RETURN VALUE: The substring. NULL if the allocation fails*/
//buf = 1234\n5678\n2EOF buf = 00000
//nextline
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (0);
	while (i < len && s[i + start] != '\0')
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
