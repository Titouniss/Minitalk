/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:57:49 by tvillann          #+#    #+#             */
/*   Updated: 2023/07/27 10:49:24 by tvillann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ddest;
	unsigned char	*ssrc;

	ddest = (unsigned char *)dest;
	ssrc = (unsigned char *)src;
	if (ddest == NULL && ssrc == NULL)
		return (NULL);
	while (n > 0)
	{
		*ddest = *ssrc;
		ddest++;
		ssrc++;
		n--;
	}
	return (dest);
}
