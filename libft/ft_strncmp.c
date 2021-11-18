/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:28:09 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/02 17:30:34 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				cmp;

	i = 0;
	cmp = 0;
	if (n == 0)
		return (0);
	if (s1[0] == '\0')
		return (cmp - (unsigned char)s2[0]);
	if (s2[0] == '\0')
		return (cmp + (unsigned char)s1[0]);
	if ((unsigned char)s1[0] != (unsigned char)s2[0])
		return ((unsigned char)s1[0] - (unsigned char)s2[0]);
	while (i < (n - 1) && s1[i] && s2[i])
	{
		i++;
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			cmp += (unsigned char)s1[i];
			cmp -= (unsigned char)s2[i];
			return (cmp);
		}
	}
	return (cmp);
}
