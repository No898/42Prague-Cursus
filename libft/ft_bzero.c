/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:34:39 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 18:50:05 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
    int i;
    char *tmp;

    i = 0;
    tmp = (char *)s;
    if (n == 0)
        return ;
    while (i < (int)n)
    {
        tmp[i] = '\0';
        i++;
    }
}

/* #include <stdio.h>
void test_ft_bzero(void)
{
    char str[] = "Hello, World!";
    size_t n = 1;

    printf("Before call ft_bzero: %s\n", str);

    ft_bzero(str, n);

    printf("After call ft_bzero: %s\n", str);
}

int main(void)
{
    test_ft_bzero();
    
    return 0;
}
 */