/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:06:55 by loflavel          #+#    #+#             */
/*   Updated: 2022/04/10 18:53:17 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* what it does: compares at most the first n bytes of str1 and str2
** RETURN: an integer less than, equal to, or greater than zero if s1
** (or the first n bytes thereof) is found, respectively, 
** to be less than, to match, or be greater than s2 */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	if (ft_strlen(s1) != ft_strlen(s2))
		return(-1);
	while (s1[i] != '\0' && s2[i] != '\0' && i < (n - 1))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
