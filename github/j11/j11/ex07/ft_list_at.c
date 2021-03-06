/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 21:24:48 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/20 21:34:37 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (!begin_list)
		return (0);
	while (begin_list && nbr > 0)
	{
		begin_list = begin_list->next;
		nbr--;
	}
	if (nbr == 0)
		return (begin_list);
	else
		return (0);
}
