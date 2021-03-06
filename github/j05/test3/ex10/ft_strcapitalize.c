/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 22:57:45 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/12 23:03:20 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int		ft_is_maj(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		ft_is_min(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int separator;

	i = 0;
	separator = 0;
	while (str[i])
	{
		if (ft_is_min(str[i]) && separator == 0)
			str[i] = str[i] - 32;
		else if (ft_is_maj(str[i]) && separator == 1)
			str[i] = str[i] + 32;
		if (!(ft_is_alpha(str[i])))
			separator = 0;
		else
			separator = 1;
		i++;
	}
	return (str);
}
