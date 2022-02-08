/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:39:04 by tgerdes           #+#    #+#             */
/*   Updated: 2022/02/08 22:05:08 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(char *str, unsigned long nbr, int base, int c)
{
	int		i;

	i = 0;
	if (nbr == 0)
		str[i++] = '0';
	while (nbr > 0)
	{
		if (base > 10 && (nbr % base >= 10))
			str[i++] = (nbr % base) - 10 + c;
		else
			str[i++] = (nbr % base) + '0';
		nbr /= base;
	}
	str[i] = '\0';
	return (str);
}
