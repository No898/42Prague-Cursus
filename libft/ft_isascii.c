/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:30:04 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 16:52:17 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
    if (c >= 0 && c < 128)
    {
        return (1);
    }
    return (0);
}

/* #include <stdio.h>
int main()
{
    char c;
    c = 'a';
    
    if(ft_isascii(c)) 
    {
        printf("%c is ASCII. \n", c);
    } else {
        printf("%c is not ASCII. \n", c);
    }

    return (0);
} */