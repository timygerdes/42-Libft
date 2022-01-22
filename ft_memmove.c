/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:51:09 by tgerdes           #+#    #+#             */
/*   Updated: 2022/01/22 13:39:30 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	i = 0;
	ptr1 = (char *)dst;
	ptr2 = (char *)src;
	if (!dst)
		return (NULL);
	if (ptr2 < ptr1)
	{
		while (len > 0)
		{
			len--;
			ptr1[len] = ptr2[len];
		}
		return (dst);
	}
	while (i < len)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (dst);
}
