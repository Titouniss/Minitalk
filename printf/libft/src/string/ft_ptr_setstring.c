/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_setstring.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:49:52 by tvillann          #+#    #+#             */
/*   Updated: 2023/07/27 08:05:19 by tvillann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_ptr_setstring(const char *s)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i])
		i++;
	ptr = (char *)malloc(1 + i * sizeof(char));
	if (!ptr)
		return ("NULL");
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
