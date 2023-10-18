/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:35:24 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 23:33:57 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	index;
	unsigned int	lenght;

	index = 0;
	lenght = 0;
	while (src[lenght])
	{
		lenght++;
	}
	if (size <= 0 || dest == NULL)
	{
		return (lenght);
	}
	while (src[index] && index < size - 1)
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
	return (lenght);
}

#include <stdio.h>
int main() {
    char src[] = "Turtle soup isnt soup.";
    char dest[15];

    unsigned int result = ft_strlcpy(dest, src, 15);
    
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Length of the copied string: %u\n", result);
    
    return 0;
}
