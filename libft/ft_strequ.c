/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sterqu_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:58:49 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/23 17:00:32 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;
	int	cmps1;
	int	cmps2;

	i = 0;
	cmps1 = 0;
	cmps2 = 0;
	while (s1[i])
	{
		cmps1 += (int)s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		cmps2 += (int)s2[i];
		i++;
	}
	if ((cmps1 - cmps2) == 0)
		return (1);
	else
		return (0);
}
