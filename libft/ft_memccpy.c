/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:45:53 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/02 17:16:31 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memccpy(void *restrict dst,
	const void *restrict src, int c, size_t n)
{
	unsigned char		*tmpa;
	unsigned char		*tmpb;
	unsigned int		i;

	i = 0;
	tmpa = (unsigned char *)dst;
	tmpb = (unsigned char *)src;
	while (i < n)
	{
		tmpa[i] = tmpb[i];
		if (tmpb[i] == (unsigned char)c)
			return ((void *)&tmpa[i + 1]);
		i++;
	}
	return (NULL);
}
