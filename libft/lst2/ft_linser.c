/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:38:03 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 14:53:15 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_linser(t_lst **alst, t_lst *new)
{
	if (!alst || !new)
		return ;
	new->next = (*alst)->next;
	new->prev = *alst;
	(*alst)->next = new;
	if (new->next != NULL)
		new->next->prev = new;
}
