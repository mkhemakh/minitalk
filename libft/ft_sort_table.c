/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_table_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 17:48:42 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/18 17:49:23 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_table(int *tab, size_t size)
{
	unsigned int	i;
	int				swap;

	i = 0;
	while (i < size && tab[i])
	{
		if (*(tab + i) < *(tab + i + 1))
		{
			swap = *(tab + i + 1);
			*(tab + i + 1) = *(tab + i);
			*(tab + i) = swap;
		}
		i++;
	}
}
