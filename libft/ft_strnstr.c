/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:35:28 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 23:45:54 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t n)
{
	size_t	j;

	if (!haystack && !n)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && n--)
	{
		j = 0;
		while (*(haystack + j) == *(needle + j)
			&& *(needle + j) && j <= n)
		{
			if (!*(needle + j + 1))
				return ((char *)haystack);
			j++;
		}
		haystack++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
    // Test cases
    char haystack[] = "Hello, this is a test.";
    char needle1[] = "this";
    char needle2[] = "world";
    char needle3[] = "Hello";

    char *result1 = ft_strnstr(haystack, needle1, 20);
    char *result2 = ft_strnstr(haystack, needle2, 20);
    char *result3 = ft_strnstr(haystack, needle3, 20);

    // Check if the results match the expected values
    if (result1 == NULL)
        printf("Test 1: Needle not found.\n");
    else
        printf("Test 1: Needle found at position: %ld\n", result1 - haystack);

    if (result2 == NULL)
        printf("Test 2: Needle not found.\n");
    else
        printf("Test 2: Needle found at position: %ld\n", result2 - haystack);

    if (result3 == NULL)
        printf("Test 3: Needle not found.\n");
    else
        printf("Test 3: Needle found at position: %ld\n", result3 - haystack);

    return (0);
	//hledam slove ve vete (podretezce v retezci)
} */





