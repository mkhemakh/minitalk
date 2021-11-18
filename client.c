/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <mkhemakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:09:41 by mkhemakh          #+#    #+#             */
/*   Updated: 2021/08/29 14:22:04 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	error(char *str)
{
	if (str)
		free(str);
	ft_putstr_fd("unexpected error.\n", 2);
	exit(EXIT_FAILURE);
}

int	lastsend(int pid, char *str)
{
	static int	i = 0;

	if (i++ != 8)
	{
		if (kill(pid, SIGUSR1) == -1)
			error(str);
		return (0);
	}
	return (1);
}

int	bit_sender(int pid, char *str)
{
	static char	*msg = 0;
	static int	s_pid = 0;
	static int	bits = -1;

	if (str)
		msg = ft_strdup(str);
	if (!msg)
		error(0);
	if (pid)
		s_pid = pid;
	if (msg[++bits / 8])
	{
		if (msg[bits / 8] & (128 >> (bits % 8)))
		{
			if (kill(s_pid, SIGUSR2) == -1)
				error(msg);
		}
		else if (kill(s_pid, SIGUSR1) == -1)
			error(msg);
		return (0);
	}
	if (!lastsend(s_pid, msg))
		return (0);
	free(msg);
	return (1);
}

void	handler_sigusr(int signum)
{
	int	end;

	end = 0;
	if (signum == SIGUSR1)
		end = bit_sender(0, 0);
	else if (signum == SIGUSR2)
	{
		ft_putstr_fd("server ended unexpectdly.\n", 2);
		exit(EXIT_FAILURE);
	}
	if (end)
	{
		ft_putstr_fd("operation successful.\n", 1);
		exit(EXIT_SUCCESS);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3 || ft_atoi(argv[1]) == 0)
	{
		ft_putstr_fd("invalid arguments.\n", 2);
		ft_putstr_fd("Usage: ./client <PID> <STR>.\n", 2);
		exit(EXIT_FAILURE);
	}
	signal(SIGUSR1, handler_sigusr);
	signal(SIGUSR2, handler_sigusr);
	bit_sender(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
}
