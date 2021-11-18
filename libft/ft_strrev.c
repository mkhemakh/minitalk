/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 17:51:24 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/18 17:52:02 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		imax;
	int		i;
	char	swap;

	i = 0;
	imax = 0;
	while (str[imax])
	{
		imax++;
	}
	while (i < imax / 2)
	{
		swap = str[i];
		str[i] = str[imax - i - 1];
		str[imax - i - 1] = swap;
		i++;
	}
	return (str);
}
