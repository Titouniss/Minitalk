/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:02:37 by tvillann          #+#    #+#             */
/*   Updated: 2023/09/05 13:02:37 by tvillann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	g_getsignal = 0;

void	send_bit(int server_pid, int bit)
{
	if (bit == 1)
	{
		if (kill(server_pid, SIGUSR1) == -1)
			exit(EXIT_FAILURE);
	}
	else
	{
		if (kill(server_pid, SIGUSR2) == -1)
			exit(EXIT_FAILURE);
	}
	usleep(1000);
}

void	send_string(int server_pid, const char *message)
{
	size_t	i;
	int		bit;
	int		j;
	char	character;

	i = 0;
	while (message[i] != '\0')
	{
		character = message[i];
		j = 7;
		while (j >= 0)
		{
			bit = (character >> j) & 1;
			send_bit(server_pid, bit);
			j--;
			while (!g_getsignal)
				usleep(1000);
			g_getsignal = 0;
		}
		i++;
	}
}

int	error_handler(int argc, char *argv[])
{
	if (argc != 3)
	{
		ft_printf("Usage: %s <PID of server> <message>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if (argv[2] == NULL)
	{
		ft_printf("Please insert a string\n");
		exit(EXIT_FAILURE);
	}
	if (ft_isnumber(argv[1]) == 0)
	{
		ft_printf("Please inser a valid PID\n");
		exit(EXIT_FAILURE);
	}
	else
		return (EXIT_SUCCESS);
}

void	signal_handler(int signum)
{
	if (signum == SIGUSR2)
		ft_printf("the signal is here !\n");
	else
		g_getsignal = 1;
}

int	main(int argc, char *argv[])
{
	int					server_pid;
	const char			*message;
	const char			*newline;
	struct sigaction	act;

	error_handler(argc, argv);
	server_pid = ft_atoi(argv[1]);
	message = argv[2];
	newline = "\n";
	sigemptyset(&act.sa_mask);
	act.sa_flags = 0;
	act.sa_handler = &signal_handler;
	sigaction(SIGUSR2, &act, 0);
	sigaction(SIGUSR1, &act, 0);
	send_string(server_pid, message);
	send_string(server_pid, newline);
	return (0);
}
