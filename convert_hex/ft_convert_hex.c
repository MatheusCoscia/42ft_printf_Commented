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
**	CONVERTE CARACTERES PARA CARACTERES DE BASE 16
*/

#include "../include/ft_printf.h"

int	ft_convert_hex(unsigned long long int n, int pxx)
{
	int			size;
	static char	*str;

/*	contar a quantidade de caracteres de nosso hexadecimal */
	size = ft_hexlen(n);
/*	realizar uma alocacao limpa para nossa string */
	str = ft_callo(sizeof(char), (size + 1));
	if (n == 0)
		str[size - 1] = '0';
/*	converte nosso hexadecimal em char para poder escreve-lo */
	ft_itoh(str, size - 1, n, pxx);
/*	caso nosso argumento seja %p */
	if (pxx == 0)
	{
/*	caso nao exista conteudo em nossa string escreva "0x0" */
		if (str[size - 1] == '0' && size - 1 == 0)
			ft_printf("%s", "0x0");
/*	caso exista conteudo em nossa string, escreveremos "0x" e em seguida nossa string */
		else
			ft_printf("0x%s", str);
	}
/*	caso nosso argumento seja %x ou %X, escreveremos nossa string */
	else
		ft_printf("%s", str);
	free(str);
	str = NULL;
	return (size);
}
