/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:58:37 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:58:37 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The  strstr() function finds the first occurrence of the substring needle in
** the string haystack.  The terminating null bytes ('\0') are  not compared.
*/

#include "libft.h"

char *ft_strstr(const char *str, const char *to_find)
{
	return (ft_strnstr(str, to_find, ft_strlen(str)));
}
