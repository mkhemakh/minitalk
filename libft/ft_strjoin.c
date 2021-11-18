/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:40:40 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/16 20:17:01 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		len;
	int		i;

	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	s3 = (char *)malloc(sizeof(char) * (len + 2));
	if (!s3)
		return (NULL);
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	len = 0;
	while (s2[len])
	{
		s3[i] = s2[len];
		i++;
		len++;
	}
	s3[i] = '\0';
	return (s3);
}
