/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:11:46 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/02 17:33:32 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	k = 0;
	j = 0;
	i = 0;
	while (to_find[k])
		k++;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (i < n && str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j] && j + i < n)
		{
			if (j == k - 1)
				return ((char *)(str + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
