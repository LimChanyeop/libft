/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 14:39:03 by clim              #+#    #+#             */
/*   Updated: 2021/01/05 10:40:38 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned	int	i;
	unsigned	int count;

	if (!dest || !src)
		return (0);
	i = 0;
	count = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	while ((count < i) && (count < size - 1))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (i);
}
