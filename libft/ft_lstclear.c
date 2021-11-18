/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 18:58:48 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/26 18:59:07 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **alst, void (*del)(void *))
{
	t_list	*nextmp;

	while (*alst)
	{
		nextmp = (*alst)->next;
		del((*alst)->content);
		free(*alst);
		*alst = nextmp;
	}
	*alst = NULL;
}
