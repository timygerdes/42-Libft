/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:43:57 by tgerdes           #+#    #+#             */
/*   Updated: 2022/02/08 21:57:41 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitoa(unsigned int nbr)
{
	char	*str;
	int		nbr_len;

	nbr_len = ft_numlen(nbr);
	str = (char *)malloc(sizeof(char) * (nbr_len + 1));
	if (!str)
		return (NULL);
	str[nbr_len--] = '\0';
	if (nbr == 0)
		str[nbr_len] = 0 + '0';
	while (nbr > 0)
	{
		str[nbr_len--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}
