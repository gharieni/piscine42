/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 17:59:38 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/19 18:00:41 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft.h"

int		target_finalizator(int targette, int loop, char *str, int signe)
{
	while ('9' >= str[loop] && str[loop] >= '0' && str[loop] != '\0')
	{
		targette = (targette * 10) + (str[loop] - '0');
		loop++;
	}
	targette = targette * signe;
	return (targette);
}

int		condition(int target, int loop, char *str, int signe)
{
	if (str[loop] == '-')
	{
		signe = -1;
		loop++;
	}
	if (str[loop] == '+' && signe == 1)
		loop++;
	target = target_finalizator(target, loop, str, signe);
	return (target);
}

int		ft_atoi(char *str)
{
	int loop;
	int target;
	int signe;

	signe = 1;
	loop = 0;
	target = 0;
	while (str[loop] == ' ' || str[loop] == '\n' || str[loop] == '\t'
			|| str[loop] == '\f' || str[loop] == '\r' || str[loop] == '\v')
		loop++;
	target = condition(target, loop, str, signe);
	return (target);
}
