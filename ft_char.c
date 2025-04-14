/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolongin <hlongin@student.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 00:22:58 by hugolongin        #+#    #+#             */
/*   Updated: 2025/04/15 01:34:45 by hugolongin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include "../libft/libft.h"

int ft_char(va_list *args)
{
    char c;

    c = (char)va_arg(*args, int);
    ft_putchar_fd(c, 1);
    return (1);
}