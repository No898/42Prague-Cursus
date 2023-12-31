/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:35:27 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 23:29:37 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/* #include <stdio.h>
int main()
{
    char str[] = "Hello, World!";
    int length = ft_strlen(str);
    printf("Length: %d\n", length);

    return 0;
} */