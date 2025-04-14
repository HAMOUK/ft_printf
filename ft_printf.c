/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolongin <hlongin@student.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 00:04:15 by hugolongin        #+#    #+#             */
/*   Updated: 2025/04/15 01:37:19 by hugolongin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "printf.h"
#include "../libft/libft.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == 'c')
				count += ft_char(&args);
			else if (format[i] == 's')
				count += ft_string(&args);
			else if (format[i] == 'd' || format[i] == 'i')
				count += ft_int(&args);
			else if (format[i] == 'u')
				count += ft_unsigned(&args);
			else if (format[i] == 'x')
				count += handle_hexamin(&args);
			else if (format[i] == 'X')
				count += handle_hexamaj(&args);
			else if (format[i] == 'p')
				count += ft_pointer(&args);
			else if (format[i] == '%')
			{
                ft_putchar_fd('%', 1);
                count++;
            }
			else
			{
                ft_putchar_fd(format[i], 1);
                count++;
            }
		}
		else
		{
            ft_putchar_fd(format[i], 1);
            count++;
        }
		i++;
	}
	va_end(args);
	return (count);
}
#include <stdio.h>
#include "printf.h"

int	main(void)
{
	int		nb = -42;
	char	c = 'A';
	char	*str = "Hello, 42!";
	unsigned int u = 424242;
	unsigned int hex = 0x1A3F;
	void	*ptr = &nb;

	ft_printf("---- FT_PRINTF TESTS ----\n");

	ft_printf("1. Char: [%c]\n", c);
	ft_printf("2. String: [%s]\n", str);
	ft_printf("3. Decimal (int): [%d]\n", nb);
	ft_printf("4. Decimal (int): [%i]\n", nb);
	ft_printf("5. Unsigned: [%u]\n", u);
	ft_printf("6. Hexa lowercase: [%x]\n", hex);
	ft_printf("7. Hexa uppercase: [%X]\n", hex);
	ft_printf("8. Pointer: [%p]\n", ptr);
	ft_printf("9. Percent sign: [%%]\n");

	ft_printf("--------------------------\n");

	// Compare with printf
	printf("\n---- SYSTEM PRINTF ----\n");
	printf("1. Char: [%c]\n", c);
	printf("2. String: [%s]\n", str);
	printf("3. Decimal (int): [%d]\n", nb);
	printf("4. Decimal (int): [%i]\n", nb);
	printf("5. Unsigned: [%u]\n", u);
	printf("6. Hexa lowercase: [%x]\n", hex);
	printf("7. Hexa uppercase: [%X]\n", hex);
	printf("8. Pointer: [%p]\n", ptr);
	printf("9. Percent sign: [%%]\n");

	return (0);
}