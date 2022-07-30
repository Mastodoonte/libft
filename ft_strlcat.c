/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 11:56:48 by florianma         #+#    #+#             */
/*   Updated: 2021/05/25 17:41:39 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	size_src;
	size_t	size_dest;
	size_t	i;
	size_t	res;

	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	if (!(size))
		return (size_src);
	if (size < size_dest + 1)
		res = size + size_src;
	else
		res = size_src + size_dest;
	i = 0;
	while (src[i] && i + size_dest < size - 1)
	{
		dest[i + size_dest] = src[i];
		i++;
	}
	dest[i + size_dest] = '\0';
	return (res);
}
