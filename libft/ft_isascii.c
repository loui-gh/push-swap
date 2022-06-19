/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:04:05 by loflavel          #+#    #+#             */
/*   Updated: 2021/07/21 17:34:33 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: checks whether c is a 7-bit unsigned char
* value that fits into the ASCII character set
* RETURN VALUE: nonzero if the character c 
* falls into the tested class, and a zero value if not*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
