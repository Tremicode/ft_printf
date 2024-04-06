/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrma_hex_print.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:39:12 by ctremino          #+#    #+#             */
/*   Updated: 2024/04/04 10:51:41 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrma_hex_print(unsigned int n, int *i)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_putnbrma_hex_print(n / 16, i);
		ft_putchar(hexa[n % 16], i);
	}
	else
	{
		ft_putchar(hexa[n % 16], i);
	}
}
