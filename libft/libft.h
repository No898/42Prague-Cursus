/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:49:33 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 22:53:22 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;
int	ft_atoi(char const *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);

int ft_isalpha(char c);
int ft_isdigit(int arg);

#endif