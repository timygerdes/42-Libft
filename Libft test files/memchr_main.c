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
    int arr1[] = {1, 2};
    int arr2[] = {3, 4};

    if (memchr(arr1, 3, 2 * sizeof(int)) != NULL)
    {
        printf("Found the byte\n");
    }
    else
    {
        printf("Did not found the byte\n");
    }
    if (ft_memchr(arr1, 3, 2 * sizeof(int)) != NULL)
    {
        printf("Found the byte\n");
    }
    else
    {
        printf("Did not found the byte\n");
    }
    return (0);
}
