/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 12:00:58 by loflavel          #+#    #+#             */
/*   Updated: 2021/08/10 12:15:20 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: Allocates (with malloc(3)) and returns a copy of ’s1’
* with the characters specified in ’set’ removed from the beginning
* and the end of the string. --need to search forwards and backwards
** 
** #1. The string to be trimmed.
** #2. The reference set of characters to trim.
** 
** RETURN VALUE: The trimmed string. NULL if the allocation fails.
** E.G. 112233xxx set = 123, s1 = xxx - I am a bucket set = ket; ret: I am a buc
**
** It's good practice to allocate perfect size for malloc.
* For that use strdup*/

#include "libft.h"

static int	ft_char_equals_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (ft_char_equals_set(s1[start], set) == 0)
		start++;
	if (start == ft_strlen(s1))
	{
		new = ft_strdup("");
		if (!new)
			return (0);
		else
			return (new);
	}
	while (ft_char_equals_set(s1[end - 1], set) == 0)
		end--;
	new = ft_substr(s1, start, end - start);
	return (new);
}
