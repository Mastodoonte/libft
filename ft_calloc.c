/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 09:54:37 by florianma         #+#    #+#             */
/*   Updated: 2021/05/20 12:02:48 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	i;
	char			*str;
	unsigned int	total;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = nmemb * size;
	str = malloc(total);
	if (str == NULL)
		return (NULL);
	if (!(size))
		return (NULL);
	i = 0;
	while (i < total)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
