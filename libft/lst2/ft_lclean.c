/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lclean.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:37:44 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 14:52:54 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lclean(t_lst **alst)
{
	t_lst	*to_free;
	t_lst	*tmp;

	to_free = *alst;
	tmp = to_free;
	while (tmp)
	{
		tmp = to_free->next;
		ft_lfree(&to_free);
		to_free = tmp;
	}
}
