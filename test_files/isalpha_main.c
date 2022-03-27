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
#include <ctype.h>

int main()
{
    int c;

    /**
     * Test with lower case letter
    **/
    c = isalpha(97);
    printf("%d\n", c);

    /**
     * Test with upper case letter
    **/
    c = isalpha(73);
    printf("%d\n", c);

    /**
     * Test with no letter
    **/
    c = isalpha(94);
    printf("%d\n", c);
    return (0);
}
