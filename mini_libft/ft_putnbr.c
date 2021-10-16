/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:13:27 by matrodri          #+#    #+#             */
/*   Updated: 2021/09/28 16:56:48 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_intlen(long int n)
{
	int	size;

	if (n > 0)
		size = 0;
	else
		size = 1;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

int	ft_putnbr(long int n)
{
	long int	size;

	size = n;
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * -1);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar(n + 48);
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
	return (ft_intlen(size));
}
