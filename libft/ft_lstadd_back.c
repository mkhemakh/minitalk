/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 18:56:46 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/26 18:57:39 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list		*beg;

	beg = (*alst);
	if (beg == NULL)
		(*alst) = new;
	else
	{
		while (beg->next)
			beg = beg->next;
		beg->next = new;
	}
}
