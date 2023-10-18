/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:35:13 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 22:20:13 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (i < n && str1[i] == str2[i])
		i++;
	if (i < n)
		return (str1[i] - str2[i]);
	return (0);
}

/* #include <stdio.h>
int main() {
    char str1[] = "Hello";
    char str2[] = "Worl";
    size_t n = 5;

    int result = ft_memcmp(str1, str2, n);

    if (result < 0) {
        printf("str1 je menší než str2\n");
    } else if (result > 0) {
        printf("str1 je větší než str2\n");
    } else {
        printf("str1 a str2 jsou shodné\n");
    }

    return (0);
    // prevede kazdy pisemno do ascii a zjisti jake slovo neboli velikost n je vetsi nebo mensi
} */