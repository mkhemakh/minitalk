/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 18:59:20 by mkhemakh          #+#    #+#             */
/*   Updated: 2019/12/26 18:59:33 by mkhemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(void *) + 1);
	if (!tmp)
		return (NULL);
	tmp->content = (void *)content;
	tmp->next = NULL;
	return (tmp);
}
