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
     * Test with first ascii decimal
    **/
    c = isascii(0);
    printf("%d\n", c);

    /**
     * Test with last ascii decimal
    **/
    c = isascii(127);
    printf("%d\n", c);

    /**
     * Test with random ascii decimal
    **/
    c = isascii(46);
    printf("%d\n", c);

    /**
     * Test with last ascii octal
    **/
    c = isascii(177);
    printf("%d\n", c);

    /**
     * Test with non ascii decimal
    **/
    c = isascii(230);
    printf("%d\n", c);
    return (0);
}
