/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lrplc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:39:06 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 14:55:18 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lrplc(t_lst *old, t_lst *new)
{
	if (!old || !new)
		return ;
	new->next = old->next;
	new->prev = old->prev;
	if (old->prev != NULL)
		old->prev->next = new;
	if (old->next != NULL)
		old->next->prev = new;
	old->next = NULL;
	old->prev = NULL;
}
