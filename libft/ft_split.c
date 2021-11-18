/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 17:49:29 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/02 18:54:36 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_is_c(char b, char c)
{
	if (b == c || b == '\0')
		return (1);
	else
		return (0);
}

static int	ft_wordlen(char *str, int loc, char c)
{
	int	i;

	i = 0;
	while (ft_is_c(str[loc + i], c) == 0)
	{
		i++;
	}
	return (i);
}

void	ft_strcpy2(char *dest, char *src, char c)
{
	int	i;

	i = 0;
	while (ft_is_c(src[i], c) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static char	**ft_white(char **white, char *str, char c)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (ft_is_c(str[i], c) == 0)
		{
			j = ft_wordlen(str, i, c);
			white[word] = (char *)malloc(sizeof(char) * (j + 1));
			if (!white)
				return (0);
			ft_strcpy2(white[word], (str + i), c);
			word++;
			i += j;
		}
		else
			i++;
	}
	white[word] = NULL;
	return (white);
}

char	**ft_split(char const *str, char c)
{
	char	**white;
	int		word;
	int		i;

	i = 0;
	word = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		if (ft_is_c(str[i], c) == 0 && ft_is_c(str[i + 1], c) == 1)
			word++;
		i++;
	}
	white = (char **)malloc(sizeof(char *) * (word + 1));
	if (!white)
		return (0);
	white = ft_white(white, (char *)str, c);
	return (white);
}
