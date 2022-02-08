/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:39:42 by tgerdes           #+#    #+#             */
/*   Updated: 2022/02/08 21:57:13 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen_base(unsigned long nbr, int base)
{
	int		count;

	count = 0;
	if (nbr == 0)
	{
		count += 1;
		return (count);
	}
	while (nbr > 0)
	{
		count++;
		nbr /= base;
	}
	return (count);
}
