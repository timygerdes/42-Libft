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
     * Test with 0 as ascii decimal
    **/
    c = isdigit(48);
    printf("%d\n", c);

    /**
     * Test with 9 as ascii decimal
    **/
    c = isdigit(57);
    printf("%d\n", c);

    /**
     * Test with random digit as ascii decimal
    **/
    c = isdigit(51);
    printf("%d\n", c);

    /**
     * Test with random letter as ascii decimal
    **/
    c = isdigit(121);
    printf("%d\n", c);

    /**
     * Test with random digit as ascii decimal
    **/
    ch = isdigit('4');
    printf("%c\n", ch);
    return (0);
}
