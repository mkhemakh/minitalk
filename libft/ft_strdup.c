/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:21:30 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/02 17:25:12 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			i;
	char		*dest;

	i = ft_strlen(s1);
	dest = (char *)malloc(sizeof(*s1) * (i + 1));
	if (!dest)
		return (0);
	while (i >= 0)
	{
		dest[i] = s1[i];
		i--;
	}
	return (dest);
}
