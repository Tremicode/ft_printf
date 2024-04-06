/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:38:42 by ctremino          #+#    #+#             */
/*   Updated: 2024/04/04 13:53:10 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define HEXA "0123456789ABCDEF"
# define HEXA_MIN "0123456789abcdef"

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *i);
void	ft_putnbr(int n, int *i);
void	ft_putnbr_unsig(unsigned int n, int *i);
void	ft_putnbr_hex_print(unsigned int n, int *i);
void	ft_putnbrma_hex_print(unsigned int n, int *len);
void	ft_ptr_print(void *ptr, int *i);
void	ft_putstr(char *str, int *len);

#endif