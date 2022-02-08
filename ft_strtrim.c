/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:31:30 by tgerdes           #+#    #+#             */
/*   Updated: 2022/02/08 22:21:44 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_string(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	int		i;
	int		j;
	int		str_len;
	char	*tristr;

	if (!str || !set)
		return (NULL);
	i = 0;
	j = 0;
	str_len = ft_strlen(str);
	while (ft_check_string(str[i], set))
		i++;
	while (ft_check_string(str[str_len - 1], set) && str_len > i)
		str_len--;
	if (str_len - i <= 0)
		return ((char *)ft_calloc(1, sizeof(char)));
	tristr = (char *)ft_calloc(((str_len - i) + 1), sizeof(char));
	if (!tristr)
		return (NULL);
	while (((i + j) <= str_len - 1) && str_len > 0)
	{
		tristr[j] = str[i + j];
		j++;
	}
	return (tristr);
}
