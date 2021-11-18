/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:13:39 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/02 17:13:54 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_nbrdigit(long long int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	int				beg;
	char			*s;
	long long int	nn;

	nn = n;
	beg = 0;
	i = ft_nbrdigit(nn);
	s = ft_strnew(i);
	if (!s)
		return (NULL);
	s[i] = '\0';
	i--;
	if (nn < 0)
	{
		s[0] = '-';
		nn *= -1;
		beg = 1;
	}
	while (i-- >= beg)
	{
		s[i] = nn % 10 + '0';
		nn /= 10;
	}
	return (s);
}
