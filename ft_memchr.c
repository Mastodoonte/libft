/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 14:43:59 by florianma         #+#    #+#             */
/*   Updated: 2021/05/20 13:40:28 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memblock, int searched, size_t size)
{
	unsigned char	*dest;
	size_t			i;
	unsigned char	compare;

	dest = (unsigned char *)memblock;
	i = 0;
	compare = (unsigned char)searched;
	while (i < size)
	{
		if (dest[i] == compare)
			return (dest + i);
		i++;
	}
	return (NULL);
}
