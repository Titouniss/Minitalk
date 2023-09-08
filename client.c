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

void send_string(int server_pid, const char *message) {
    for (size_t i = 0; i < ft_strlen(message); i++) {
        char character = message[i];
        for (int j = 7; j >= 0; j--) {
            int bit = (character >> j) & 1;
            if (bit == 1) {
                if (kill(server_pid, SIGUSR1) == -1) {
                    exit(1);
                }
            } else {
                if (kill(server_pid, SIGUSR2) == -1) {
                    exit(1);
                }
            }
            usleep(100000); // Wait a short while between bits
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        ft_printf("Usage: %s <PID of server> <message>\n", argv[0]);
        exit(1);
    }
    int server_pid = ft_atoi(argv[1]);
    const char *message = argv[2];
    usleep(1000);
    send_string(server_pid, message);
    return 0;
}