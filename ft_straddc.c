/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_straddc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <mkhemakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 15:45:36 by mkhemakh          #+#    #+#             */
/*   Updated: 2021/08/26 16:55:03 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*ft_straddc_first(char c)
{
	char	*newstr;

	newstr = (char *)malloc(sizeof(char) * 2);
	if (!newstr)
		return (NULL);
	newstr[0] = c;
	newstr[1] = '\0';
	return (newstr);
}

char	*ft_straddc(char *str, char c)
{
	char	*newstr;
	int		i;

	if (!c)
		return (NULL);
	if (!str)
		return (ft_straddc_first(c));
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(str) + 2));
	if (!newstr)
	{
		free(str);
		return (NULL);
	}
	i = -1;
	while (str[++i])
		newstr[i] = str[i];
	free(str);
	newstr[i++] = c;
	newstr[i] = '\0';
	return (newstr);
}
