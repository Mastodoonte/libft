/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 10:12:47 by florianma         #+#    #+#             */
/*   Updated: 2021/04/22 11:26:58 by florianma        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedchar)
{
	char	c;
	char	*str;

	c = (char)searchedchar;
	str = NULL;
	while (*string)
	{
		if (*string == c)
			str = (char *)string;
		string++;
	}
	if (c == '\0')
		return ((char *)string);
	return (str);
}
