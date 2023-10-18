/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:29:18 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 23:56:41 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/* #include <stdio.h>

int main(void)
{
    const char *str = "This is a test string.";
    int character_to_find = 'i';

    char *result = ft_strrchr(str, character_to_find);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", character_to_find, result - str);
    } else {
        printf("Character not found.\n");
    }

    return (0);
    // hledam znak v rezezci, jdeme od konce, protoze hledame posledni vyskyt
} */