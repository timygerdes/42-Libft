/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:59:36 by tgerdes           #+#    #+#             */
/*   Updated: 2022/02/08 18:52:53 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	while (i > 0)
	{
		if (*str == (char)c)
			return ((char *)(str));
		str--;
		i--;
	}
	if (*str == (char)c)
		return ((char *)(str));
	return (NULL);
}
