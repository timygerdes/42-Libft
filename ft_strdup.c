/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:18:39 by tgerdes           #+#    #+#             */
/*   Updated: 2022/02/08 22:14:54 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	str_len;
	char	*strdup;

	str_len = ft_strlen(str) + 1;
	strdup = malloc(sizeof(char) * str_len);
	if (!strdup)
		return (NULL);
	strdup = ft_memcpy(strdup, str, str_len);
	return (strdup);
}
