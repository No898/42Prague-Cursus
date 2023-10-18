/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:35:19 by todinh            #+#    #+#             */
/*   Updated: 2023/10/19 00:06:01 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*h;

	h = (char *)b;
	while (len > 0)
	{
		h[len - 1] = c;
		len--;
	}
	return (b);
}

/* #include "libft.h"
#include <stdio.h>

int main(void)
{
    char buffer[20]; // Pole, do kterého budou nastaveny znaky
    int character = 'X'; // Znak, kterým budou nastaveny pole
    size_t len = 10; // Počet znaků, které budou nastaveny

    // Nastaví pole znakem 'X' pomocí ft_memset
    ft_memset(buffer, character, len);

    // Vypíše obsah pole
    for (size_t i = 0; i < 20; i++) {
        printf("%c ", buffer[i]);
    }

    return (0);
    // nastavuji znak v poli v prikladu jsem nastavil 10 znaku "X" do pole se 20 znaky
} */