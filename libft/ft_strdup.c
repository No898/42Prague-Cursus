/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:35:22 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 23:41:41 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* #include <stdio.h>
int	main(void)
{
	char	src[50];
	char	*duplicate;

	printf("Try some text: ");
	scanf("%s", src);
	duplicate = ft_strdup(src);
	if (duplicate != 0)
	{
		printf("Duplicated text: %s\n", duplicate);
		free(duplicate);
	}
	else
	{
		printf("Something is wrong.");
	}
} */
