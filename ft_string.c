/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolongin <hlongin@student.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 00:04:29 by hugolongin        #+#    #+#             */
/*   Updated: 2025/04/15 01:28:45 by hugolongin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include "../libft/libft.h"

int     ft_string(va_list *args)
{
    char    *str;

    str = va_arg(*args, char *);
    if (!str)
    {
        ft_putstr_fd("(null)", 1);
        return (6);
    }
    ft_putstr_fd(str, 1);
    return (ft_strlen(str));
}