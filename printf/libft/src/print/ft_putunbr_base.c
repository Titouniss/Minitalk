/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:28:34 by tvillann          #+#    #+#             */
/*   Updated: 2023/07/27 08:05:19 by tvillann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_putunbr_base(unsigned long long int n, const char *base)
{
	unsigned long long int	base_len;
	int						nbr_len;

	nbr_len = 0;
	base_len = ft_strlen(base);
	if (n >= base_len)
	{
		ft_putunbr_base(n / base_len, base);
		ft_putunbr_base(n % base_len, base);
	}
	else
		write(1, &base[n], 1);
	nbr_len += ft_unbrlen_base(n, base_len);
	return (nbr_len);
}
