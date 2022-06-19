/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 11:40:17 by loflavel          #+#    #+#             */
/*   Updated: 2021/08/10 17:37:54 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*from C03*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		remainder;
	char	digit;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n > 9)
	{
		remainder = n % 10;
		ft_putnbr_fd(n / 10, fd);
		digit = remainder + '0';
		write(fd, &digit, 1);
	}
	else
	{
		digit = n + '0';
		write(fd, &digit, 1);
	}
}
