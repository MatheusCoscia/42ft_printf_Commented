/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:55:29 by matrodri          #+#    #+#             */
/*   Updated: 2021/09/28 16:58:02 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static char	ft_hex_to_char(unsigned long long int n, int pxx)
{
	if (n < 10)
		return (n + 48);
	if (n >= 10)
	{
		if (pxx == 0 || pxx == 1)
			return (n + 87);
		else
			return (n + 55);
	}
	return (0);
}

char	*ft_atoh(char *str, int size, unsigned long int n, int pxx)
{
	unsigned long int	div;

	div = 0;
	while (n != 0)
	{
		div = n % 16;
		str[size--] = ft_hex_to_char(div, pxx);
		n = n / 16;
	}
	return (str);
}
