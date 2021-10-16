/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:55:21 by matrodri          #+#    #+#             */
/*   Updated: 2021/09/27 21:49:21 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_convert_hex(unsigned long long int n, int pxx)
{
	int			size;
	static char	*str;

	size = ft_hexlen(n);
	str = ft_callo(sizeof(char), (size + 1));
	if (n == 0)
		str[size - 1] = '0';
	ft_atoh(str, size - 1, n, pxx);
	if (pxx == 0)
	{
		if (str[size - 1] == '0' && size - 1 == 0)
			ft_printf("%s", "0x0");
		else
			ft_printf("0x%s", str);
	}
	else
		ft_printf("%s", str);
	free(str);
	str = NULL;
	return (size);
}
