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
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};

    bzero(arr1, 8);
    printf("%d %d %d\n", arr1[0], arr1[1], arr1[2]);
    ft_bzero(arr1, 8);
    printf("%d %d %d\n", arr1[0], arr1[1], arr1[2]);
    return (0);
}
