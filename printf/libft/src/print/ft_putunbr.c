/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:27:59 by titounis          #+#    #+#             */
/*   Updated: 2022/12/18 03:22:38 by tvillann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include <limits.h>

int	ft_putunbr(unsigned int nb)
{
	int	i;

	i = 1;
	if (nb >= 10)
		i += ft_putnbr(nb / 10);
	ft_putchar(48 + nb % 10);
	return (i);
}
