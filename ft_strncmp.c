/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:06:34 by florianma         #+#    #+#             */
/*   Updated: 2021/05/25 16:15:21 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t length)
{
	size_t	i;

	if (length == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && i < length && s1[i] == s2[i])
	{
		i++;
	}
	if (length == i)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
