/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:44:54 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 22:51:40 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	memory = malloc(count * size);
	if (memory == NULL)
		return (0);
	while (i < count * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}

/* #include <stdio.h>
int main() {
    size_t count = 5;
    size_t size = sizeof(int);
    int *arr;

    arr = (int *)ft_calloc(count, size);

    if (arr == NULL) {
        printf("Allocation failed!\n");
    } else {
        printf("Memory allocated successfully.\n");
        
        for (size_t i = 0; i < count; i++) {
            arr[i] = i * 10;
        }
        
        for (size_t i = 0; i < count; i++) {
            printf("arr[%zu] = %d\n", i, arr[i]);
        }

        free(arr);
    }

    return (0);

	// vysledek je arr[0] = 0, arr[1] = 10, arr[2] = 20, arr[3] = 30, arr[4] = 40
}  */