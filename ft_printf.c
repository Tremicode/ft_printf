/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:38:31 by ctremino          #+#    #+#             */
/*   Updated: 2024/04/06 17:56:16 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list args, const char *str, int *i)
{
	if (*str == '%')
		ft_putchar('%', i);
	if (*str == 'c')
		ft_putchar(va_arg(args, int), i);
	if (*str == 's')
		ft_putstr(va_arg(args, char *), i);
	if (*str == 'p')
		ft_ptr_print(va_arg(args, void *), i);
	if (*str == 'i' || *str == 'd')
		ft_putnbr(va_arg(args, int), i);
	if (*str == 'u')
		ft_putnbr_unsig(va_arg(args, unsigned int), i);
	if (*str == 'x')
		ft_putnbr_hex_print(va_arg(args, unsigned int), i);
	if (*str == 'X')
		ft_putnbrma_hex_print(va_arg(args, unsigned int), i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_format(args, str + i + 1, &len);
			i++;
		}
		else
			ft_putchar(str[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}
int	main(void)
{
	// Ejemplo de uso de ft_printf con diferentes tipos de datos
	ft_printf("Ejemplo de ft_printf:\n");
	ft_printf("Entero: %d\n", 123);
	ft_printf("Cadena: %s\n", "Hola, mundo!");
	ft_printf("Carácter: %c\n", 'A');
	ft_printf("Hexadecimal (minúsculas): %x\n", 255);
	ft_printf("Hexadecimal (mayúsculas): %X\n", 255);
	ft_printf("Puntero: %p\n", (void *)0x12345678);
	ft_printf("Unsigned Int: %u\n", 429);
	ft_printf("Esto es el símbolo del porcentaje: %%\n"
	);
	// Ejemplo de uso de printf original para comparación
	printf("\nEjemplo de printf original:\n");
	printf("Entero: %d\n", 123);
	printf("Cadena: %s\n", "Hola, mundo!");
	printf("Carácter: %c\n", 'A');
	printf("Hexadecimal (minúsculas): %x\n", 255);
	printf("Hexadecimal (mayúsculas): %X\n", 255);
	printf("Puntero: %p\n", (void *)0x12345678);
	printf("Unsigned Int: %u\n", 429);
	printf("Esto es el símbolo del porcentaje: %%\n");
	return (0);
}

/*Tienes que implementar las siguientes conversiones:
• %c Imprime un solo carácter.
• %s Imprime una string (como se define por defecto en C).
• %p El puntero void * dado como argumento se imprime en formato hexadecimal.
• %d Imprime un número decimal (base 10).
• %i Imprime un entero en base 10.
• %u Imprime un número decimal (base 10) sin signo.
• %x Imprime un número hexadecimal (base 16) en minúsculas.
• %X Imprime un número hexadecimal (base 16) en mayúsculas.
• % % para imprimir el símbolo del porcentaje.*/
