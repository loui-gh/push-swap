/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:32:37 by loflavel          #+#    #+#             */
/*   Updated: 2021/08/10 10:53:07 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: locates the first occurrence of the 
* null-terminated (s2)needle in the (s1) haystack, 
* where not more than n characters are searched. 
* Characters that appear after a `\0' character are not searched
*
* RETURN VALUES If needle is an empty string, haystack is returned;
* if needle occurs nowhere in first n characters of haystack , 
* NULL is returned;	otherwise a pointer to the first character of the
* first occurrence of needle */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < n)
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (0);
}
