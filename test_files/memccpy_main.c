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
    int	arr2[] = {2, 7, 8, 9};

    memccpy(arr1, arr2, 2, 4 * sizeof(int));
    printf("%d %d\n", arr1[0], arr1[1]);
    ft_memccpy(arr1, arr2, 2, 4 * sizeof(int));
    printf("%d %d\n", arr1[0], arr1[1]);
    return (0);
}