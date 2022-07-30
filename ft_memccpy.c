/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 13:46:57 by florianma         #+#    #+#             */
/*   Updated: 2021/04/20 14:42:54 by florianma        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*sc;
	unsigned char	*dt;
	size_t			i;
	unsigned char	y;

	sc = (unsigned char *)src;
	dt = (unsigned char *)dest;
	y = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dt[i] = sc[i];
		if (dt[i] == y)
			return (dt + i + 1);
		i++;
	}
	return (NULL);
}
