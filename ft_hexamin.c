/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexamin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolongin <hlongin@student.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 00:04:26 by hugolongin        #+#    #+#             */
/*   Updated: 2025/04/15 01:38:40 by hugolongin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include "../libft/libft.h"

void    ft_hexamin(unsigned int n)
{
    char    *base = "0123456789abcdef";

    if (n >= 16)
        ft_hexamin(n / 16);
    ft_putchar_fd(base[n % 16], 1);
}
int handle_hexamin(va_list *args)
{
    unsigned int n;

    n = va_arg(*args, unsigned int);
    ft_hexamin(n);
    return (ft_hexalen(n));
}