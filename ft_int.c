/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlongin <hlongin@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 00:17:27 by hugolongin        #+#    #+#             */
/*   Updated: 2025/04/22 17:19:03 by hlongin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_intlen(int nb)
{
    int     count;

    count = 0;
    if (nb == 0)
        return (1);
    if (nb < 0)
    {
        nb = nb * -1;
        count++;
    }
    while (nb > 0)
    {
        count++;
        nb = nb / 10;
    }
    return (count);
}

int ft_int(va_list *args)
{
    int     nb;

    nb = va_arg(*args, int);
    ft_putnbr_fd(nb, 1);
    return (ft_intlen(nb));
}
