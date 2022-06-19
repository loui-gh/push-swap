/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 06:44:47 by loflavel          #+#    #+#             */
/*   Updated: 2021/12/02 12:37:35 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* DESCRIPTION
* scans the initial n bytes of the memory area pointed
* to by s for the first instance of c. Both c and the bytes 
* of the memory area pointed to by s are interpreted as unsigned char
* RETURN VALUE: return a pointer to the matching byte 
* or NULL if the character does not occur in the given memory area*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)(s))[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

#include <stdio.h>
int main ()
{
	char *string = "awesome";
	char c = 'm';

	size_t n = 12;

	char *ret = ft_memchr(string, c, n);

	printf("%s", ret);

	return (0);
}