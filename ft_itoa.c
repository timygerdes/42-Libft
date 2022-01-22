/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:18:41 by tgerdes           #+#    #+#             */
/*   Updated: 2022/01/22 13:37:26 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_convert(int n, int digit_len, int is_neg)
{
	char	*ptr;
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (is_neg == 1)
		j++;
	while (i <= n / 10)
	{
		digit_len++;
		i = i * 10;
	}
	ptr = ft_calloc((digit_len + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	while (digit_len > 0 && i != 0)
	{
		ptr[j] = (n / i) + '0';
		n = n % i;
		i = i / 10;
		digit_len--;
		j++;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	int		is_neg;
	int		digit_len;
	char	*str;

	digit_len = 1;
	is_neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = n * -1;
		is_neg = 1;
		digit_len++;
	}
	str = ft_convert(n, digit_len, is_neg);
	if (!str)
		return (NULL);
	if (is_neg == 1)
		*str = '-';
	return (str);
}
