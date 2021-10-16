/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 17:49:02 by matrodri          #+#    #+#             */
/*   Updated: 2021/09/28 16:57:37 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/*
** PRINTF
*/
int		ft_printf(const char *s, ...);

/*
** CONVERT_HEX
*/
char	*ft_atoh(char *str, int size, unsigned long int n, int pxx);
int		ft_convert_hex(unsigned long long int n, int pxx);
int		ft_hexlen(unsigned long n);

/*
** MINI_LIBFT
*/
void	*ft_callo(size_t memb, size_t size);
int		ft_putchar(char c);
int		ft_putnbr(long int n);
int		ft_putstr(char *s);

#endif
