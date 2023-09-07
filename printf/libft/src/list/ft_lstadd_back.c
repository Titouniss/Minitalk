/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:40:58 by tvillann          #+#    #+#             */
/*   Updated: 2023/07/27 08:10:53 by tvillann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (lst != NULL && new != NULL)
	{
		if (last == NULL)
			*lst = new;
		else
		{
			while (last -> next != NULL)
				last = last -> next;
			last -> next = new;
		}
	}
}
