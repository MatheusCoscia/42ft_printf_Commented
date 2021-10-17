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

#include "../include/ft_printf.h"

/*
** CONVERTER CARACTERES DO TIPO INT PARA CARACTERES DO TIPO CHAR E ESCREVE-LOS
*/

/*	descobrir quantos caracteres existem em 'n' */
static int	ft_intlen(long int n)
{
	int	size;

/*	caso 'n' não possua caracteres retorne 0, porém caso 'n' possua caracteres defina size como 1 */
	if (n > 0)
		size = 0;
	else
		size = 1;
/*	realiza a contagem de caracteres */
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

int	ft_putnbr(long int n)
{

	if (n == -2147483648)
		ft_putstr("-2147483648");
/*	caso 'n' seja negativo iremos retorna-lo como positivo e escrever o sinal de negativo */
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * -1);
	}
/*	converter nosso caractere de int para char e escreve-lo */
	else if (n >= 0 && n <= 9)
		ft_putchar(n + 48);
/*	caso 'n' possua mais de um caractere */
	else
	{
/*	retornar o primeiro caractere atraves da recursão */
		ft_putnbr(n / 10);
/*	retornar os caracteres adajacentes ate que todos tenham sido escritos */
		ft_putchar(n % 10 + 48);
	}
/*	retorne a quantidade de caracteres presentes em 'n'*/
	return (ft_intlen(n));
}
