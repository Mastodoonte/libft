/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:37:38 by florianma         #+#    #+#             */
/*   Updated: 2021/04/20 16:51:26 by florianma        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	size_t			i;

	if (destination == source)
		return (NULL);
	i = 0;
	if (destination > source)
	{
		while (i < size)
		{
			((char *)destination)[size - 1] = ((char *)source)[size - 1];
			size--;
		}
	}
	else
	{
		while (i < size)
		{
			((unsigned char *)destination)[i] = ((unsigned char *)source)[i];
			i++;
		}
	}
	return (destination);
}
