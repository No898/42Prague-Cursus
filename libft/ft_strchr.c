/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:35:17 by todinh            #+#    #+#             */
/*   Updated: 2023/10/19 00:11:48 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	value;
	char	*str;

	i = 0;
	value = (char)c;
	str = (char*)s;
	while (str[i] != '\0')
	{
		if (str[i] == value)
			return (&str[i]);
		i++;
	}
	if (value == '\0')
		return (&str[i]);
	return (NULL);
}

/* #include <stdio.h>

int main(void)
{
    const char *str = "This is a test string.";
    int character_to_find = 'i';

    char *result = ft_strchr(str, character_to_find);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", character_to_find, result - str);
    } else {
        printf("Character not found.\n");
    }

    return (0);
    //hledam znak v rezezci, jdeme od zacatku a hledame prvni vyskyt
	//ft_strchr pracuje s textem: Tato funkce se používá pro hledání určitého  znaku v textovém řetězci. Je vhodná pro práci s řetězci znaků a je omezena na hledání znaků v textu.
} */