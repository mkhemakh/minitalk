/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:38:32 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/14 15:25:44 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*tmpa;
	unsigned char	*tmpb;
	int				i;

	if (!dst && !src)
		return (NULL);
	tmpa = (unsigned char *)dst;
	tmpb = (unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		tmpa[i] = tmpb[i];
		i++;
		n--;
	}
	return ((void *)tmpa);
}
