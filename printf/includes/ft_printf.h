/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:19:31 by tvillann          #+#    #+#             */
/*   Updated: 2023/07/28 11:50:27 by tvillann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/include/libft.h"

int		ft_printf(const char *form, ...);
size_t	ft_format(va_list *args, const char *format, int *countChar);
int		ft_put_ptr(void *ptr);

#endif
