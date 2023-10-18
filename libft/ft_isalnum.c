/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:44:33 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 22:54:20 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    int result;
    
    c = '5';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);
    
    c = 'Q';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);
    
    c = 'l';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = '+';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);
}