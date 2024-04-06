/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsig.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:39:02 by ctremino          #+#    #+#             */
/*   Updated: 2024/04/04 10:43:38 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsig(unsigned int n, int *i)
{
	if (n > 9)
	{
		ft_putnbr_unsig(n / 10, i);
		ft_putchar((n % 10) + '0', i);
	}
	else
	{
		ft_putchar(n + '0', i);
	}
}
