/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 13:35:16 by clim              #+#    #+#             */
/*   Updated: 2020/12/24 23:14:31 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_toupper(int c);

int				ft_tolower(int c);

int				ft_atoi(const char *str);

int				ft_strlen(char *str);

int				ft_strncmp(char *s1, char *s2, unsigned int n);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

void			*ft_memccpy(void *dst, const void *src, int c, size_t n);

void			ft_bzero(void *s, size_t n);

void			*ft_memset(void *b, int c, size_t len);

void			*ft_memcpy(void *dst, const void *src, size_t n);

void			*ft_memmove(void *dst, const void *src, size_t n);

void			*ft_memchr(const void *s, int c, size_t n);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

char			*ft_strchr(const char *s, int c);

char			*ft_strrchr(const char *s, int c);

char			*ft_strnstr(const char *big, const char *little, size_t len);
#endif
