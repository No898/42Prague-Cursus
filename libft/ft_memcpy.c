/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:35:15 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 23:51:35 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

/* int main(void)
{
    char source[] = "This is a test string.";
    char destination[50];

    // Copy the source string to the destination using ft_memcpy
    ft_memcpy(destination, source, strlen(source) + 1);

    // Print the copied string
    printf("Copied string: %s\n", destination);

    // Check if it matches the result of the standard memcpy
    if (memcmp(destination, source, strlen(source) + 1) == 0) {
        printf("ft_memcpy works correctly.\n");
    } else {
        printf("ft_memcpy has issues.\n");
    }

    return (0);
    // kopiruji source do destination
} */