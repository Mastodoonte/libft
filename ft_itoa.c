/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianmastorakis <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 11:57:36 by florianma         #+#    #+#             */
/*   Updated: 2021/05/20 13:29:06 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_taille(int nbr)
{
	int	compteur;

	compteur = 0;
	if (nbr < 0)
	{
		compteur++;
		nbr *= (-1);
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		compteur++;
	}
	return (compteur);
}

char	*ft_0(char *dest)
{
	dest = malloc (2 * sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest[0] = '0';
	dest[1] = '\0';
	return (dest);
}

int	len(long nb)
{
	int		size;

	size = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		size++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int nb)
{
	char	*str;
	long	n;
	int		i;

	n = nb;
	i = len(n);
	str = NULL;
	if (n == 0)
		return (ft_0(str));
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}
