/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 17:49:43 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/18 17:50:22 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
		return (1);
	else
		return (0);
}

static int	ft_wordlen(char *str, int loc)
{
	int	i;

	i = 0;
	while (ft_is_space(str[loc + i]) == 0)
	{
		i++;
	}
	return (i);
}

static void	ft_strcpy2(char *dest, char *src)
{
	int	i;

	i = 0;
	while (ft_is_space(src[i]) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static char	**ft_white(char **white, char *str)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (ft_is_space(str[i]) == 0)
		{
			j = ft_wordlen(str, i);
			white[word] = (char *)malloc(sizeof(char) * (j + 1));
			if (!white)
				return (0);
			ft_strcpy2(white[word], (str + i));
			word++;
			i += j;
		}
		else
			i++;
	}
	white[word] = NULL;
	return (white);
}

char	**ft_split_whitespaces(char *str)
{
	char	**white;
	int		word;
	int		i;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (ft_is_space(str[i]) == 0 && ft_is_space(str[i + 1]) == 1)
			word++;
		i++;
	}
	white = (char **)malloc(sizeof(char *) * (word + 1));
	if (!white)
		return (0);
	white = ft_white(white, str);
	return (white);
}
