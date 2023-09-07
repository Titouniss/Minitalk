/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:03:03 by titounis          #+#    #+#             */
/*   Updated: 2022/12/18 03:23:54 by tvillann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_format(va_list *args, const char *format, int *countChar)
{
	if (*format == 'c')
		*countChar += ft_putchar(va_arg(*args, int));
	else if (*format == 's')
		*countChar += ft_putstr(va_arg(*args, char *));
	else if (*format == 'd' || *format == 'i')
		*countChar += ft_putnbr(va_arg(*args, int));
	else if (*format == 'u')
		*countChar += ft_putunbr(va_arg(*args, unsigned int));
	else if (*format == 'p')
		*countChar += ft_put_ptr(va_arg(*args, void *));
	else if (*format == 'x')
		*countChar += ft_putnbr_base(va_arg(*args, int), "0123456789abcdef");
	else if (*format == 'X')
		*countChar += ft_putnbr_base(va_arg(*args, int), "0123456789ABCDEF");
	else if (*format == '%')
		*countChar += ft_putchar('%');
	else
		return (0);
	return (1);
}
