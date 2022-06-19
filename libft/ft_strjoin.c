/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 06:47:01 by loflavel          #+#    #+#             */
/*   Updated: 2021/08/10 18:04:17 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: Allocates (with malloc(3)) and returns a new string,
* which is the result of the concatenation of ’s1’ and ’s2’.
* RETURN VALUE: The new string. NULL if the allocation fails*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*newstring;

	i = 0;
	j = 0;
	newstring = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!newstring)
		return (NULL);
	while (s1[i] != '\0')
	{
		newstring[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		newstring[j] = s2[i];
		j++;
		i++;
	}
	newstring[j] = '\0';
	return (newstring);
}
