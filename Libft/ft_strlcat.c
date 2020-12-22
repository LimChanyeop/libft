/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 14:56:28 by clim              #+#    #+#             */
/*   Updated: 2020/12/22 15:29:08 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dest_store;
	char			*src_store;
	unsigned int	dest_len;
	unsigned int	i;

	src_store = src;
	dest_store = dest;
	i = size;
	while (*dest && (i-- != 0))
		dest++;
	dest_len = dest - dest_store;
	i = size - dest_len;
	if (i == 0)
		return (dest_len + ft_strlen(src));
	while (*src != '\0')
	{
		if (i > 1)
		{
			*dest++ = *src;
			i--;
		}
		src++;
	}
	*dest = '\0';
	return (dest_len + ft_strlen(src));
}
