/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:38:47 by ctremino          #+#    #+#             */
/*   Updated: 2024/04/04 14:18:41 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_prefix(int *i)
{
	ft_putstr("0x", i);
}

void	ft_ptr_print(void *ptr, int *i)
{
	unsigned long	n;
	const char		*base = "0123456789abcdef";
	int				len;
	unsigned long	temp;

	n = (unsigned long)ptr;
	ft_print_prefix(i);
	if (n == 0)
	{
		ft_putchar('0', i);
		return ;
	}
	len = 0;
	temp = n;
	while (temp != 0)
	{
		len++;
		temp /= 16;
	}
	while (len > 0)
	{
		ft_putchar(base[(n >> (4 * (len - 1))) & 0xF], i);
		len--;
	}
}
