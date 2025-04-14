/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugolongin <hlongin@student.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 01:00:14 by hugolongin        #+#    #+#             */
/*   Updated: 2025/04/15 01:39:35 by hugolongin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>

int     ft_string(va_list *args);
int ft_char(va_list *args);
int handle_hexamaj(va_list *args);
int handle_hexamin(va_list *args);
int ft_int(va_list *args);
int ft_pointer(va_list *args);
int ft_unsigned(va_list *args);
int	ft_hexalen(unsigned int n);

#endif