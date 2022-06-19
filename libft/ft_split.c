/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 17:41:31 by loflavel          #+#    #+#             */
/*   Updated: 2021/08/15 17:18:13 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns an array of strings
* that were obtained by splitting ’s’ using the character ’c’
* as a delimiter. The array must be ended by a NULL pointer.
* RETURN VALUE: The array of new strings resulting from the split
* NULL if the allocation fails.
* #1. The string to be split.
* #2. The delimiter character.*/

#include "libft.h"

static int	ft_count_strings(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static int	ft_string_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != 0 && s[len] != c)
		len++;
	return (len);
}

static char	*ft_create_string(const char *s, size_t n)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = malloc((n + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	while (i < n)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	string;

	i = 0;
	if (s == 0)
		return (NULL);
	string = ft_count_strings(s, c);
	array = malloc((string + 1) * sizeof(char *));
	if (!array)
		return (0);
	while (i < string)
	{
		while (*s == c && *s != 0)
			s++;
		array[i] = ft_create_string(s, ft_string_len(s, c));
		s = s + ft_string_len(s, c);
		i++;
	}
	array[i] = 0;
	return (array);
}
