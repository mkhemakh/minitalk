/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:36:16 by mkhemakh          #+#    #+#             */
/*   Updated: 2020/01/01 15:05:45 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *restrict dest,
		const char *restrict src, size_t size)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	if (!size)
		return (ft_strlen(src));
	if (size < ft_strlen(src))
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[size - 1] = '\0';
	}
	else
		dest = ft_strcpy(dest, src);
	return (ft_strlen(src));
}
