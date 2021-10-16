/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:54:52 by matrodri          #+#    #+#             */
/*   Updated: 2021/09/27 20:14:50 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_hexlen(unsigned long n)
{
	int	size;

	size = 1;
	while (n >= 16)
	{
		size++;
		n = n / 16;
	}
	return (size);
}
