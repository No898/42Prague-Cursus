/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:42:29 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 23:38:21 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/* #include <stdio.h>
int main()
{
    char src[] = "Born to code";
    char dest[20] = "1337 42";
	unsigned int size = 10;

    unsigned int result = ft_strlcat(dest, src, size);
    
    printf("Result: %s\n", dest);
    printf("Length: %d\n", result);
} */