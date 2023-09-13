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

void	bit_handler(int signal, siginfo_t *pid, void *unused)
{
	static int		bit;
	static int		i;

	(void)unused;
	if (signal == SIGUSR1)
		i |= (1 << (7 - bit));
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
	kill(pid->si_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	signal;

	signal.sa_sigaction = &bit_handler;
	signal.sa_flags = SA_SIGINFO;
	sigemptyset(&signal.sa_mask);
	ft_printf("Server PID: %d\n", getpid());
	sigaction(SIGUSR1, &signal, NULL);
	sigaction(SIGUSR2, &signal, NULL);
	while (1)
		continue ;
	return (0);
}
