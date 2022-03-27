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
    char ch;

    /**
     * Test with first printable as ascii decimal
    **/
    c = isprint(32);
    printf("%d\n", c);

    /**
     * Test with last printable as ascii decimal
    **/
    c = isprint(126);
    printf("%d\n", c);

    /**
     * Test with random printable as ascii decimal
    **/
    c = isprint(84);
    printf("%d\n", c);

    /**
     * Test with non printable as ascii decimal
    **/
    c = isprint(127);
    printf("%d\n", c);

    /**
     * Test with character as ascii decimal
    **/
    ch = isprint('H');
    printf("%c\n", ch);
    return (0);
}
