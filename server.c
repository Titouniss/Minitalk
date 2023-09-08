/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:02:34 by tvillann          #+#    #+#             */
/*   Updated: 2023/09/05 13:02:34 by tvillann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void bit_handler(int signal)
{
    static int bit;
    static int i;

    if (signal == SIGUSR1)
        i |= (1 << (7 - bit));
    bit++;

    if (bit == 8)
    {
        ft_printf("%c", i);
        bit = 0;
        i = 0;
    }
}

int main(int argc, char **argv) {
    (void)argv;
    ft_printf("Server PID: %d\n", getpid());
    while (argc == 1)
	{
		signal(SIGUSR1, bit_handler);
		signal(SIGUSR2, bit_handler);
		pause ();
	}
    return 0;
}