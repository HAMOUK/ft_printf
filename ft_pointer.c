/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolongin <hlongin@student.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 00:21:52 by hugolongin        #+#    #+#             */
/*   Updated: 2025/04/15 01:36:30 by hugolongin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include "../libft/libft.h"


int	ft_ptrlen(unsigned long n)
{
	int	len;

	len = 1;
	while (n >= 16)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

void	ft_put_ptr(unsigned long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_put_ptr(n / 16);
	ft_putchar_fd(base[n % 16], 1);
}

int ft_pointer(va_list *args)
{
    void *ptr;
    unsigned long addr;
    int len;

    ptr = va_arg(*args, void *);
    addr = (unsigned long)ptr;
    write(1, "0x", 2);
    len = 2;
    if (addr == 0)
    {
        ft_putchar_fd('0', 1);
        len += 1;
    }
    else
    {
        ft_put_ptr(addr);
        len += ft_ptrlen(addr);
    }
    return (len);
}