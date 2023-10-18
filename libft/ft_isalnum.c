/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:44:33 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 17:05:56 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnu(int arg)
{
    if ((arg >= '0' && arg <= '9') || (arg >= 'A' && arg <= 'Z') || (arg >= 'a' && arg <= 'z'))
    {
        return (1);
    }
    return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    int result;
    
    c = '5';
    result = ft_isalnu(c);
    printf("When %c is passed, return value is %d\n", c, result);
    
    c = 'Q';
    result = ft_isalnu(c);
    printf("When %c is passed, return value is %d\n", c, result);
    
    c = 'l';
    result = ft_isalnu(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = '+';
    result = ft_isalnu(c);
    printf("When %c is passed, return value is %d\n", c, result);
} */