/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:46:22 by tgerdes           #+#    #+#             */
/*   Updated: 2022/02/08 22:27:42 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (f) (unsigned int, char))
{
	int		i;
	char	*ptr;

	if (!str || !(*f))
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	ptr = ft_calloc((i + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = f(i, str[i]);
		i++;
	}
	return (ptr);
}
