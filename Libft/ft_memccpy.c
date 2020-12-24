/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 15:06:40 by clim              #+#    #+#             */
/*   Updated: 2020/12/24 15:42:05 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*dst_ptr;
	size_t		i;

	dst_ptr = dst;
	i = 0;
	while (i < n)
	{
		*(dst_ptr + i) = *((unsigned char *)src + i);
		if ((*(unsigned char *)src + i) == (unsigned char)c)
			return (dst_ptr + i + 1);
		i++;
	}
	return (0);
}
