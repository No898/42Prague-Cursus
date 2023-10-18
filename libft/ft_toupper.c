/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:35:34 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 17:06:32 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int arg)
{
    if (arg >= 'a' && arg <= 'z')
        return (arg - 32);
    return (arg);
}

/* #include <stdio.h>
#include <ctype.h>
int main() {
    char c;

    c = 'm';
    printf("%c -> %c\n", c, ft_toupper(c));

    c = 'D';
    printf("%c -> %c\n", c, ft_toupper(c));

    c = '9';
    printf("%c -> %c\n", c, ft_toupper(c));
    
    return (0);
} */