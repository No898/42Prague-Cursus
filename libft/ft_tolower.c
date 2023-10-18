/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:35:31 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 17:06:36 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int arg)
{
    if (arg >= 'A' && arg <= 'Z')
        return (arg + 32);
    return (arg);
}

/* #include <stdio.h>
#include <ctype.h>
int main()
{
    char c, result;

    c = 'M';
    result = ft_tolower(c);
    printf("ft_tolower(%c) = %c\n", c, result);

    c = 'm';
    result = ft_tolower(c);
    printf("ft_tolower(%c) = %c\n", c, result);

    c = '+';
    result = ft_tolower(c);
    printf("ft_tolower(%c) = %c\n", c, result);

    return 0;
} */