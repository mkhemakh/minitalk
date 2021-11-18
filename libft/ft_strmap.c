/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:27:38 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/23 17:01:32 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	else
	{
		str = ft_strdup(s);
		if (!str)
			return (NULL);
		while (str[i])
		{
			str[i] = f(str[i]);
			i++;
		}
		return (str);
	}
}
