/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:46:06 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/02 17:28:55 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	else
	{
		str = ft_strdup(s);
		if (!str)
			return (NULL);
		while (str[i])
		{
			str[i] = f(i, (char)s[i]);
			i++;
		}
		return (str);
	}
}
