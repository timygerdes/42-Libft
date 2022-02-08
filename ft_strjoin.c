/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:12:03 by tgerdes           #+#    #+#             */
/*   Updated: 2022/02/08 22:15:30 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t	i;
	size_t	j;
	size_t	str1_len;
	size_t	str2_len;
	char	*str;

	i = 0;
	j = 0;
	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);
	str = ft_calloc((str1_len + str2_len + 1), sizeof(char));
	while (i < str1_len)
	{
		str[i] = str1[i];
		i++;
	}
	while (j < str2_len)
	{
		str[i] = str2[j];
		j++;
		i++;
	}
	return (str);
}
