/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:47:42 by tvillann          #+#    #+#             */
/*   Updated: 2023/07/27 08:05:19 by tvillann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include <stdio.h>

long	ft_atol(const char *nptr)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-')
		sign *= -1;
	i += (nptr[i] == '+' || nptr[i] == '-');
	if (ft_isdigit(nptr[i]) == 0)
		return (LONG_MAX);
	while (ft_isdigit(nptr[i]))
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	if (nptr[i] && ft_isascii(nptr[i]))
		return (LONG_MAX);
	res *= sign;
	return (res);
}
