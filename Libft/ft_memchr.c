/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 15:42:30 by clim              #+#    #+#             */
/*   Updated: 2020/12/24 17:29:14 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr;
	size_t		i;

	ptr = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (*(ptr + i) == (char)c)
			return ((void *)ptr + i);
		i++;
	}
	return (0);
}
