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
     * Test with lower case letter as ascii decimal
    **/
    c = isalnum(72);
    printf("%d\n", c);

    /**
     * Test with upper case letter as ascii decimal
    **/
    c = isalnum(110);
    printf("%d\n", c);

    /**
     * Test with digit as ascii decimal
    **/
    c = isalnum(53);
    printf("%d\n", c);

    /**
     * Test with non letter/digit as ascii decimal
    **/
    c = isalnum(38);
    printf("%d\n", c);

    /**
     * Test with lower case letter as char
    **/
    ch = isalnum('b');
    printf("%c\n", ch);

    /**
     * Test with upper case letter as char
    **/
    ch = isalnum('F');
    printf("%c\n", ch);

    /**
     * Test with digit as char
    **/
    ch = isalnum('9');
    printf("%c\n", ch);

    /**
     * Test with non letter/digit as char
    **/
    ch = isalnum('?');
    printf("%c\n", ch);
    return (0);
}
