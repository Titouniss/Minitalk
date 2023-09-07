/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:45:06 by tvillann          #+#    #+#             */
/*   Updated: 2023/07/26 11:45:06 by tvillann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include <limits.h>

int	ft_put_ptr(void *ptr)
{
	int					i;
	int					length;
	unsigned long long	value;
	char				buffer[16];

	i = 0;
	length = 0;
	value = (unsigned long long)ptr;
	if (!ptr)
		return (write(1, "(nil)", 5));
	length += write(1, "0x", 2);
	while (value > 0)
	{
		buffer[i] = "0123456789abcdef"[value % 16];
		value /= 16;
		i++;
	}
	while (i-- > 0)
	{
		write(1, &buffer[i], 1);
		length ++;
	}
	return (length);
}
