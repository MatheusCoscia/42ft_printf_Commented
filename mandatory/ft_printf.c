/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 17:43:04 by matrodri          #+#    #+#             */
/*   Updated: 2021/09/28 16:47:40 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_after_percent(char c, va_list args, int count)
{
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	if (c == 'p')
	{
		count += 2;
		count += ft_convert_hex(va_arg(args, unsigned long int), 0);
	}
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	if (c == 'u')
		count += ft_putnbr(va_arg(args, unsigned int));
	if (c == 'x')
		count += ft_convert_hex(va_arg(args, unsigned int), 1);
	if (c == 'X')
		count += ft_convert_hex(va_arg(args, unsigned int), 2);
	if (c == '%')
	{
		count++;
		write(1, "%", 1);
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count = ft_after_percent(s[i], args, count);
		}
		else
		{
			count++;
			write(1, &s[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}
