/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:09:03 by flmastor          #+#    #+#             */
/*   Updated: 2021/05/25 14:12:03 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_maxll(unsigned long long res, int signe)
{
	if (res > 9223372036854775807 && signe == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					signe;
	unsigned long long	res;

	i = 0;
	signe = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (res > 9223372036854775807)
		return (ft_maxll(res, signe));
	return (res * signe);
}
