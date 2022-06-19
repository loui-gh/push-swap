/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 10:53:40 by loflavel          #+#    #+#             */
/*   Updated: 2021/07/24 13:45:12 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*memcmp: int memcmp(const void *str1, const void *str2, size_t n)
* What it does: compares the first n bytes (each interpreted as 
* unsigned char) of the memory areas s1 and s2
* RETURN VALUE: < 0 if str1 < str2
* = 0 if match
* > 0 if str1 > str2 
* Tutorialspoint: https://www.tutorialspoint.com/ansi_c/c_memcmp.htm */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;

	ptr_s1 = (const unsigned char *)s1;
	ptr_s2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}
