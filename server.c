/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <mkhemakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:45:02 by mkhemakh          #+#    #+#             */
/*   Updated: 2021/08/31 15:55:47 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	error(int pid, char *str)
{
	if (str)
		free(str);
	ft_putstr_fd("server: unexpected error.\n", 2);
	kill(pid, SIGUSR2);
	exit(EXIT_FAILURE);
}

char	*print_string(char *str)
{
	ft_putstr_fd(str, 1);
	free(str);
	return (NULL);
}

void	handler_sigusr(int signum, siginfo_t *info, void *context)
{
	static char	c = 255;
	static int	bits = 0;
	static int	pid = 0;
	static char	*msg = 0;

	(void)context;
	if (info->si_pid)
		pid = info->si_pid;
	if (signum == SIGUSR1)
		c ^= 128 >> bits;
	else if (signum == SIGUSR2)
		c |= 128 >> bits;
	if (++bits == 8)
	{
		if (c)
			msg = ft_straddc(msg, c);
		else
			msg = print_string(msg);
		bits = 0;
		c = 255;
	}
	if (kill(pid, SIGUSR1) == -1)
		error(pid, msg);
}

int	main(void)
{
	struct sigaction	sig;
	sigset_t			b_mask;

	sigemptyset(&b_mask);
	sigaddset(&b_mask, SIGINT);
	sigaddset(&b_mask, SIGQUIT);
	sig.sa_handler = 0;
	sig.sa_flags = SA_SIGINFO;
	sig.sa_mask = b_mask;
	sig.sa_sigaction = handler_sigusr;
	sigaction(SIGUSR1, &sig, NULL);
	sigaction(SIGUSR2, &sig, NULL);
	ft_putstr_fd("PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd("\n", 1);
	while (1)
		pause();
}
