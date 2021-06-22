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
    c = tolower(116);
    printf("%d\n", c);

    /**
     * Test with lower case letter as char
    **/
    ch = tolower('e');
    printf("%c\n", ch);

    /**
     * Test with upper case letter as ascii decimal
    **/
    c = tolower(83);
    printf("%d\n", c);

    /**
     * Test with upper case letter as char
    **/
    ch = tolower('L');
    printf("%c\n", ch);

    /**
     * Test with non letter as ascii decimal
    **/
    c = tolower(63);
    printf("%d\n", c);

    /**
     * Test with non letter as char
    **/
    ch = tolower('?');
    printf("%c\n", ch);
}
