/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 07:02:31 by loflavel          #+#    #+#             */
/*   Updated: 2021/09/06 20:08:12 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: Analagous to strmap ft, which maps keys to values. 
* STRMAPI.c Applies the function ’f’ to each character of the string ’s’
* to create a new string (with malloc(3))
* resulting from successive applications of ’f’.
* WHAT DOES F DO? --anything you want! It just needs to happen to every character
* 
* RETURN VALUE: The string created from the successive applications of ’f’.
* NULL if the allocation fails. 
* 
* #1. The string on which to iterate.
* #2. The function to apply to each character */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstring;
	unsigned int	i;

	i = 0;
	if (s == 0 || f == 0)
		return (0);
	newstring = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!newstring)
		return (NULL);
	while (s[i] != '\0')
	{
		newstring[i] = (f(i, s[i]));
		i++;
	}
	newstring[i] = 0;
	return (newstring);
}
