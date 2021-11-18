/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:22:47 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/02 17:37:58 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	cmp;
	unsigned int	i;
	unsigned char	*tmps1;
	unsigned char	*tmps2;

	tmps1 = (unsigned char *)s1;
	tmps2 = (unsigned char *)s2;
	cmp = 0;
	i = 0;
	while (i < n)
	{
		if (tmps1[i] != tmps2[i])
		{
			cmp = tmps1[i] - tmps2[i];
			return (cmp);
		}
		i++;
	}
	return (0);
}
