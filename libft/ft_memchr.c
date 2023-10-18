/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:42:16 by todinh            #+#    #+#             */
/*   Updated: 2023/10/19 00:12:47 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>

int main(void)
{
    char buffer[] = "This is a test string.";
    int character_to_find = 'i';

    // Hledá znak 'i' v buffer pomocí ft_memchr
    char *result = ft_memchr(buffer, character_to_find, sizeof(buffer));

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", character_to_find, result - buffer);
    } else {
        printf("Character not found.\n");
    }

    return (0);
    // hledam znak a hned prvni zobrazim (podobny s ft_strchr)
    // ft_memchr pracuje s pamětí: Tato funkce se používá pro hledání určité hodnoty (například konkrétního bytu) v paměti, což může zahrnovat pole bytů nebo paměťový blok bez ohledu na to, zda se jedná o text nebo jiný druh dat. Je obecnější a může hledat libovolnou hodnotu v paměti.
} */