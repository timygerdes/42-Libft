/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:59:15 by tgerdes           #+#    #+#             */
/*   Updated: 2021/05/14 18:03:24 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
    int	arr1[] = {1, 2};
    int	arr2[] = {3, 4};

    memcpy(arr1, arr2, 2 * sizeof(int));
    printf("%d %d\n", arr1[0], arr1[1]);
    ft_memcpy(arr1, arr2, 2 * sizeof(int));
    printf("%d %d\n", arr1[0], arr1[1]);
    return (0);
}
