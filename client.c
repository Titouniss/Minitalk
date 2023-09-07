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

void send_string() {
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        ft_printf("Usage: %s <PID of server> <message>\n", argv[0]);
        exit(1);
    }
    int server_pid = ft_atoi(argv[1]);
    const char *message = argv[2];
    send_string();
    return 0;
}