/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:51:09 by tgerdes           #+#    #+#             */
/*   Updated: 2022/02/08 21:59:47 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dststr;
	char	*srcstr;

	i = 0;
	dststr = (char *)dst;
	srcstr = (char *)src;
	if (!dst)
		return (NULL);
	if (srcstr < dststr)
	{
		while (len > 0)
		{
			len--;
			dststr[len] = srcstr[len];
		}
		return (dst);
	}
	while (i < len)
	{
		dststr[i] = srcstr[i];
		i++;
	}
	return (dst);
}
