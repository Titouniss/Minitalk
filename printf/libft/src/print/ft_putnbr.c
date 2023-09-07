/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:12:55 by tvillann          #+#    #+#             */
/*   Updated: 2022/12/18 03:23:36 by tvillann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include <limits.h>

int	ft_putnbr(int nb)
{
	int	i;

	i = 1;
	if (nb >= INT_MAX)
		return (write(1, "2147483647", 10));
	if (nb < 0)
	{
		if (nb <= INT_MIN)
			return (write(1, "-2147483648", 11));
		nb = nb * (-1);
		ft_putchar('-');
		i++;
	}
	if (nb >= 10)
		i += ft_putnbr(nb / 10);
	ft_putchar(48 + nb % 10);
	return (i);
}
