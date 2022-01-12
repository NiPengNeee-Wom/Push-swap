/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_liter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:38:34 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 14:54:14 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_liter(t_lst *lst, void (*f)(t_lst *elem))
{
	if (lst && f)
	{
		if (lst->next != NULL)
		{
			f(lst);
			ft_liter(lst->next, f);
		}
		else
			f(lst);
	}
}