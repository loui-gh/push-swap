/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:16:21 by loflavel          #+#    #+#             */
/*   Updated: 2021/07/22 10:35:22 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: checks if c is a digit
* RETURN: nonzero if the character c falls
* into the tested class, and a zero value if not
*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
