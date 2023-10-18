/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:45:13 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 21:14:40 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char *ft_spaces(char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	return (str);
}

char *ft_plusminus(char *str, int *parity)
{
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			(*parity)++;
		}
		str++;
	}
	return (str);
}

int ft_atoi(const char *str)
{
	int parity;
	int number;
	char *numberstring;

	numberstring = ft_spaces(str);
	parity = 0;
	number = 0;
	numberstring = ft_plusminus(numberstring, &parity);
	while (*numberstring >= 48 && *numberstring <= 57)
	{
		number *= 10;
		number += *numberstring - 48;
		numberstring++;
	}
	if (!(parity % 2))
	{
		return (number);
	}
	return (-number);
}

/* #include <stdio.h>
int main(void)
{
	char *str = "    ---+--+j1234ab567";
	int number = ft_atoi(str);
	printf("%d\n", number);
}
 */