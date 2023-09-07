/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:51:05 by tvillann          #+#    #+#             */
/*   Updated: 2023/07/27 10:48:50 by tvillann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <limits.h>

int	ft_printf(const char *format, ...)
{
	size_t	i;
	int		count_char;
	va_list	args;

	i = 0;
	count_char = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			i += ft_format(&args, &format[i], &count_char);
			continue ;
		}
		count_char++;
		write(1, &format[i], 1);
		i++;
	}
	va_end (args);
	return (count_char);
}
