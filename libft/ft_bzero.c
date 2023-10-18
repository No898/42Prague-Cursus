/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:34:39 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 22:42:44 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}


/* #include <stdio.h>
int main()
{
    char str[] = "Hello, World!";
    size_t n = sizeof(str);

    printf("Original string: %s\n", str);

    // Zavolejte funkci ft_bzero
    ft_bzero(str, n);

    printf("After ft_bzero: %s\n", str);

    return (0);
    //vystup je Original string: Hello, World! a After ft_bzero:
} */