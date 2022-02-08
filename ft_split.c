/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:48:18 by tgerdes           #+#    #+#             */
/*   Updated: 2022/02/08 22:12:43 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_calc_words(char const *str, char c)
{
	int		i;
	int		word_count;
	int		isdel;

	i = 0;
	word_count = 1;
	isdel = 0;
	while (str[i] != '\0')
	{
		if (isdel && str[i] != c)
		{
			word_count++;
			isdel = 0;
		}
		else if (str[i] == c)
			isdel = 1;
		i++;
	}
	return (word_count);
}

static int	ft_calc_string_len(char const *str, char c)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0' && str[str_len] != c)
		str_len++;
	return (str_len);
}

static char	**ft_split_string(char **arr_ptr, char const *str, char c)
{
	int		char_count;
	int		i;

	char_count = 0;
	i = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && *str == c)
			str++;
		if (*str)
		{
			char_count = ft_calc_string_len(str, c);
			arr_ptr[i] = ft_calloc(char_count + 1, sizeof(char));
			if (!arr_ptr[i])
				return (NULL);
			ft_memcpy(arr_ptr[i], str, (size_t)char_count);
			str += char_count;
			i++;
		}
	}
	return (arr_ptr);
}

char	**ft_split(char const *str, char c)
{
	char	**arr_ptr;

	if (!str)
		return (NULL);
	arr_ptr = (char **)ft_calloc((ft_calc_words(str, c) + 1), sizeof(char *));
	if (!arr_ptr)
		return (NULL);
	ft_split_string(arr_ptr, str, c);
	return (arr_ptr);
}
