/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:04:26 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/02 17:27:45 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dest,
		const char *restrict src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s;

	i = 0;
	j = 0;
	while (j < size && dest[j])
		j++;
	s = j;
	while (j + 1 < size && src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if (s < size)
		dest[j] = '\0';
	return (s + ft_strlen(src));
}
