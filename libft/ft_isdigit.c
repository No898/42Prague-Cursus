/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:25:15 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 22:53:12 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int arg)
{
    if (arg >=  '0' && arg <= '9')
    {
        return (1);
    }
    return (0);
}

/* #include <stdio.h>
int main ()
{
    char c;
    c= '5';
    printf("Result when numeric charcater is passed: %d\n", ft_isdigit(c));

    c = '+';
    printf("Result when non-numeric character is passed: %d\n", ft_isdigit(c));

    return (0);
} */