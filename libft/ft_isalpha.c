/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:36:03 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 17:06:02 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(char c)
{
    if ((c >= 'A' && c <='Z') || (c >= 'a' && c <='z'))
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
    c = 'Q';
    printf("Result when uppercase apph is passed: %d\n", ft_isalpha(c));

    c = 'q';
    printf("Result when lowercase apph is passed: %d\n", ft_isalpha(c));

    c='+';
    printf("Result when non-apph is passed: %d\n", ft_isalpha(c));
    
    return (0);
} */