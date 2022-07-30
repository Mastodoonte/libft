/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:24:09 by florianma         #+#    #+#             */
/*   Updated: 2021/05/20 12:20:58 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	lettre;

	i = 0;
	str = (unsigned char *)s;
	lettre = (unsigned char)c;
	while (i < n)
	{
		str[i] = lettre;
		i++;
	}
	return (str);
}
