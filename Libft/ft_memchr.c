/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 15:42:30 by clim              #+#    #+#             */
/*   Updated: 2020/12/28 14:17:25 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*arr;
	unsigned char	ch;

	i = 0;
	arr = (unsigned char *)s;
	ch = c;
	while (i < n)
	{
		if (arr[i] == ch)
			return (&arr[i]);
		i++;
	}
	return (0);
}
