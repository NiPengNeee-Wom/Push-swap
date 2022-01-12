/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrplc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:37:07 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 14:51:37 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstrplc(t_list **alst, t_list *old, t_list *new)
{
	t_list *tmp;

	if (!alst || !old || !new)
		return ;
	tmp = *alst;
	if (tmp != old)
	{
		while (tmp->next != old && tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	new->next = old->next;
	old->next = NULL;
}
