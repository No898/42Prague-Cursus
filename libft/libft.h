/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:49:33 by todinh            #+#    #+#             */
/*   Updated: 2023/10/18 23:41:45 by todinh           ###   ########.fr       */
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
int		ft_isalnum(int c);
int ft_isalpha(char c);
int ft_isascii(int c);
int ft_isdigit(int arg);
int	ft_isprint(int i);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
		ft_memcpy.c \
		ft_memchr.c \
		ft_memmove.c \
		ft_memset.c \
char	*ft_strdup(const char *s)
		ft_strchr.c \
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int	ft_strlen(const char *str);
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
int ft_tolower(int arg);
int ft_toupper(int arg);

#endif