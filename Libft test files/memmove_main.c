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
    int	arr1[] = {1, 2, 3, 4};
    int	arr2[] = {5, 6, 7, 8};

    memmove(arr1, arr2, 2 * sizeof(int));
    printf("%d %d\n", arr1[0], arr1[1]);
    ft_memmove(arr1, arr2, 2 * sizeof(int));
    printf("%d %d\n", arr1[0], arr1[1]);
    return (0);
}