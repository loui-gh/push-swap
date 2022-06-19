/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:53:41 by loflavel          #+#    #+#             */
/*   Updated: 2021/07/21 13:47:25 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: converts the letter c to lower case,
* if possible RET VAL: the converted letter, or c 
* if the conversion was not possible *NOTE* 
* If c is not an unsigned char value, or EOF,
* the behavior of these functions is undefined */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 90 && c >= 65)
		c = c + 32;
	return (c);
}
