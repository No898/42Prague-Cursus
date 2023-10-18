/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:35:30 by todinh            #+#    #+#             */
/*   Updated: 2023/10/19 00:01:53 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
    const char *str1 = "Hello, World!";
    char *str2 = "Hello, World!";
    int n = 10;

    int result = ft_strncmp(str1, str2, n);

    if (result == 0) {
        printf("The first %d characters of the strings are equal.\n", n);
    } else if (result < 0) {
        printf("The first %d characters of str1 are less than str2.\n", n);
    } else {
        printf("The first %d characters of str1 are greater than str2.\n", n);
    }

    return (0);
    // porovnavam retezce a muzu stanovit kolik znaku chci porovnat
} */