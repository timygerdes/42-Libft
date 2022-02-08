/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 21:28:40 by tgerdes           #+#    #+#             */
/*   Updated: 2022/02/08 22:07:54 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!ptr)
		return (NULL);
	while (i < n)
	{
		if (((unsigned char *)(ptr))[i] == (unsigned char)(c))
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
