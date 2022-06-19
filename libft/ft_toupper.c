/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:03:25 by loflavel          #+#    #+#             */
/*   Updated: 2021/07/21 13:45:30 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: converts the letter c to upper case, 
* if possible. RETURN VALUE: the converted letter,
* or c if the conversion was not possible
* *NOTE* If c is not an unsigned char value, 
* or EOF, the behavior of these functions is undefined */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
