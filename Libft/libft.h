/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 13:35:16 by clim              #+#    #+#             */
/*   Updated: 2020/12/22 15:27:49 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* memset bzero memcpy memccpy memmove memchr memcmp strlen strlcpy 

  strlcat strchr strrchr strnstr strncmp atoi isalpha isdigit isalnum isascii

  isprint toupper tolower*/

int						ft_isalnum(int c);

int						ft_isascii(int c);

int						ft_isprint(int c);

int						ft_isalpha(int c);

int						ft_isdigit(int c);

int						ft_toupper(int c);

int						ft_tolower(int c);

int						ft_atoi(const char *str);

int						ft_strlen(char *str);

int						ft_strncmp(char *s1, char *s2, unsigned int n);

unsigned int			ft_strlcpy(char *dest, char *src, unsigned int size);

#endif
