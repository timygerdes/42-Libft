/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:18:41 by tgerdes           #+#    #+#             */
/*   Updated: 2022/02/08 22:04:51 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_convert(int nbr, int nbr_len, int isneg)
{
	char	*str;
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (isneg == 1)
		j++;
	while (i <= nbr / 10)
	{
		nbr_len++;
		i = i * 10;
	}
	str = ft_calloc((nbr_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (nbr_len > 0 && i != 0)
	{
		str[j] = (nbr / i) + '0';
		nbr = nbr % i;
		i = i / 10;
		nbr_len--;
		j++;
	}
	return (str);
}

char	*ft_itoa(int nbr)
{
	int		isneg;
	int		nbr_len;
	char	*str;

	nbr_len = 1;
	isneg = 0;
	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	if (nbr < 0)
	{
		nbr = nbr * -1;
		isneg = 1;
		nbr_len++;
	}
	str = ft_convert(nbr, nbr_len, isneg);
	if (!str)
		return (NULL);
	if (isneg == 1)
		*str = '-';
	return (str);
}
