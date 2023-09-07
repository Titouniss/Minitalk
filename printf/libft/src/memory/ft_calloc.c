/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 07:57:23 by tvillann          #+#    #+#             */
/*   Updated: 2023/07/27 10:49:17 by tvillann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*memory;
	unsigned int	total;

	if (nmemb == 0 || size == 0)
		return (ft_calloc(1, 1));
	total = nmemb * size;
	if (nmemb != 0 && total / nmemb != size)
		return (0);
	memory = malloc(total);
	if (memory == 0)
		return (0);
	ft_memset((unsigned char *)memory, 0, nmemb * size);
	return (memory);
}
