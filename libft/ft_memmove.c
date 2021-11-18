/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:58:23 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/16 17:57:44 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmpa;
	unsigned char	*tmpb;
	unsigned int	i;

	tmpa = (unsigned char *)dst;
	tmpb = (unsigned char *)src;
	i = 0;
	if (tmpb < tmpa)
	{
		while (len > i)
		{
			tmpa[len - 1] = tmpb[len - 1];
			len--;
		}
	}
	else if (tmpb > tmpa)
	{
		while (i < len)
		{
			tmpa[i] = tmpb[i];
			i++;
		}
	}
	return (dst);
}
