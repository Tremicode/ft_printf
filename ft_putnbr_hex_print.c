/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_print.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:38:58 by ctremino          #+#    #+#             */
/*   Updated: 2024/04/01 14:21:53 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex_print(unsigned int n, int *i)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (n >= 16)
	{
		ft_putnbr_hex_print(n / 16, i);
		ft_putchar(hexa[n % 16], i);
	}
	else
	{
		ft_putchar(hexa[n % 16], i);
	}
}
