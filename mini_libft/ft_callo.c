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
** ALOCAR BYTES NULOS EM NOSSA MEMORIA
*/

#include "../include/ft_printf.h"

/*	substitui os 'n' primeiros caracteres por caracteres 'c' em nossa string */
static void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) b)[i] = c;
		i++;
	}
	return (b);
}

/*	substitui caracteres por caracteres nulos '\0' em nossa string */
static void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

void	*ft_callo(size_t memb, size_t size)
{
	 int	*i;

/*	alocar o tamanho 'memb' * 'size' bytes de memoria para nossa variavel 'i' */
	i = malloc(memb * size);
	if (i == 0)
		return (0);
/*	utilizar a funcao bzero para preencher 'i' com caracteres nulos */
	ft_bzero(i, (memb * size));
	return (i);
}
