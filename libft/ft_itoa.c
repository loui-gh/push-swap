/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:20:24 by loflavel          #+#    #+#             */
/*   Updated: 2021/08/10 19:29:14 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_string_len(long n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 1)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_make_string(char *str, long nbr, int str_len)
{
	int	n_is_neg;

	n_is_neg = 0;
	if (nbr != 0)
		str = malloc(sizeof(char) * (str_len + 1));
	else
		return (str = ft_strdup("0"));
	if (!str)
		return (0);
	if (nbr < 0)
	{
		n_is_neg++;
		nbr = -nbr;
	}
	str[str_len] = '\0';
	while (--str_len)
	{
		str[str_len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (n_is_neg == 1)
		str[0] = '-';
	else
		str[0] = (nbr % 10) + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		str_len;
	char	*str;
	long	nbr;

	nbr = n;
	str_len = ft_string_len(nbr);
	str = 0;
	str = ft_make_string(str, nbr, str_len);
	if (!str)
		return (0);
	return (str);
}
