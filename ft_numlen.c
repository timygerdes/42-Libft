/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:41:19 by tgerdes           #+#    #+#             */
/*   Updated: 2022/02/08 21:54:30 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(long nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
	{
		count += 1;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		count++;
		nbr /= 10;
	}
	return (count);
}
