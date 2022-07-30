/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:07:27 by florianma         #+#    #+#             */
/*   Updated: 2021/04/21 19:07:41 by florianma        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *stack, const char *needle, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	str = (char *)stack;
	if (!(*needle))
		return (str);
	i = 0;
	k = 0;
	while (str[i] != '\0' && k < size)
	{
		j = 0;
		while (str[i + j] == needle[j] && k++ < size)
		{
			if (needle[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
		k = i;
	}
	return (NULL);
}
