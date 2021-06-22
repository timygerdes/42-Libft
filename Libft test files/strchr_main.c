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

int main(void) {
    const char str[] = "This is just a String";
    const char ch = 'z';
    char *p;
    p = strchr(str, ch);
    printf("String starting from %c is: %s\n", ch, p);
    p = ft_strchr(str, ch);
    printf("String starting from %c is: %s\n", ch, p);
    return 0;
}
