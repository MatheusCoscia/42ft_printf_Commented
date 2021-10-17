/* ************************************************************ */
/*                                                              */
/*             ╓▀▀▀▀▀▀▄                 :::      ::::::::       */
/*            █▀      ▐               :+:      :+:    :+:       */
/*            █   ▀   ▓█            +:+ +:+         +:+         */
/*            █      █▓▓▓▓█       +#+  +:+       +#+            */
/*    ▄▄ ▄▄▄███████─▄▀█▀▀       +#+#+#+#+#+   +#+               */
/*    █ ███████████▄██ ██             #+#    #+#                */
/*    █  █▀▀   ██████████▌           ###   ########.fr          */
/*    █  ▀▄▄    ▀████████▌                                      */
/*     ▀█   ▀ ▄▄▄████████▌      42cursus | MCoscia | matrodri   */
/*        ▀▀  ▄▄▄▄▄▄▄▄▄█▀       quack quack |  vila pescopata   */
/*                                                              */
/* ************************************************************ */

/*
**	CONVERTE CARACTERES DE BASE 16 EM CHAR
*/

#include "../include/ft_printf.h"

static char	ft_hex_to_char(unsigned long long int n, int pxx)
{
	if (n < 10)
/*	converter para char */
		return (n + 48);
	if (n >= 10)
	{
/*	caso %p ou %x */
		if (pxx == 0 || pxx == 1)
/*	converter para letra minuscula */
			return (n + 87);
/*	caso %X */
		else
/*	converter para letra maiuscula */
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
/*	seleciona os caracteres que serao convertidos */
		div = n % 16;
		str[size--] = ft_hex_to_char(div, pxx);
/*	busca os proximos caracteres que serao convertidos */
		n = n / 16;
	}
	return (str);
}
