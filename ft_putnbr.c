/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:39:07 by ctremino          #+#    #+#             */
/*   Updated: 2024/04/01 13:39:43 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *i)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", i);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', i);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, i);
	}
	ft_putchar(n % 10 + '0', i);
}

/*int main()
{
	int number = -12345;
	ft_putnbr(number);
	return (0);
}*/
