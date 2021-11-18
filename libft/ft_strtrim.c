/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:47:07 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/31 18:18:31 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_is_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_firsttrim(char const *s, char *set)
{
	int		i;
	char	*str;

	i = 0;
	while (ft_is_set(s[i], set) == 1 && s[i])
		i++;
	str = (char *)s + i;
	return (str);
}

static unsigned int	ft_trimsize(char const *s, char *set)
{
	unsigned int	size2;

	size2 = ft_strlen(s);
	while ((ft_is_set(s[size2], set) == 1 || s[size2] == '\0')
		&& size2 > 0)
		size2--;
	return (size2 + 1);
}

static char	*ft_lasttrim(char const *s, char *set)
{
	unsigned int	i;
	unsigned int	len;
	char			*trim;

	len = ft_trimsize(s, set);
	trim = (char *)malloc(sizeof(char) * len + 1);
	if (!trim)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		trim[i] = s[i];
		i++;
	}
	while (i < len)
	{
		trim[i] = '\0';
		i++;
	}
	trim[len] = '\0';
	return (trim);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*buf;
	char	*trim;

	if (!s)
		return (NULL);
	buf = ft_firsttrim(s, (char *)set);
	trim = ft_lasttrim(buf, (char *)set);
	return (trim);
}
