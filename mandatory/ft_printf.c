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

static int	ft_after_percent(char c, va_list args, int count)
{
/*	escreva um caractere */
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
/*	escreva uma string */
	if (c == 's')
		count += ft_putstr(va_arg(args, char *));
/*	escreva o endereço do ponteiro, lembrando de atribuir +2 ao contador por conta do 0x do hexadecimal */
	if (c == 'p')
	{
		count += 2;
		count += ft_convert_hex(va_arg(args, unsigned long int), 0);
	}
/*	escreva caracteres do tipo char com sinal */
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
/*	escreva caracteres do tipo char sem sinal */
	if (c == 'u')
		count += ft_putnbr(va_arg(args, unsigned int));
/*	converta uma string para hexadecimal */
	if (c == 'x')
		count += ft_convert_hex(va_arg(args, unsigned int), 1);
/*	converta uma string para hexadecimal */
	if (c == 'X')
		count += ft_convert_hex(va_arg(args, unsigned int), 2);
/*	escreva "%" */
	if (c == '%')
	{
		count++;
		write(1, "%", 1);
	}
/*	retorna a quantidade de caracteres convertidos */
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
/*	"armazena" nossos argumentos */
	va_list	args;

	i = 0;
	count = 0;
/*	integra nossos argumentos */
	va_start(args, s);
/*	enquanto existir conteudo em nosso ponteiro 's' */
	while (s[i])
	{
/*	devemos buscar pelo caractere "%", responsavel por informar as flags do printf */
		if (s[i] == '%')
		{
			i++;
/*	ao localizar o caractere "%", iremos utilizar a funcao para definir o que fazer */
			count = ft_after_percent(s[i], args, count);
		}
/*	caso não seja encontrado, iremos escrever caractere por caractere o conteúdo de nosso ponteiro 's' */
		else
		{
			count++;
			write(1, &s[i], 1);
		}
		i++;
	}
/*	encerra nossa operação, definindo um resultado */
	va_end(args);
/*	retorna a quantidade de caracteres escritos */
	return (count);
}
