/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:35:16 by todinh            #+#    #+#             */
/*   Updated: 2023/10/19 00:08:30 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	len;

	len = 0;
	if (s2 < s1)
	{
		len = n;
		while (len > 0)
		{
			len--;
			((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
			len++;
		}
	}
	return (s1);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
    char source[] = "Hello, world!";
    char destination[20];

    // Kopíruje obsah source do destination pomocí ft_memmove
    ft_memmove(destination, source, strlen(source) + 1);

    // Vypíše obsah destination
    printf("Copied string: %s\n", destination);

    return (0);
    // Tento mechanismus umožňuje kopírování dat z jednoho místa do druhého i v případech, kdy se zdrojové a cílové místo překrývají, aniž by docházelo k nežádoucím efektům. Funkce ft_memmove je užitečná v situacích, kdy potřebujete bezpečně kopírovat data v paměti.
} */