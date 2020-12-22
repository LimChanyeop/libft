/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 14:39:03 by clim              #+#    #+#             */
/*   Updated: 2020/12/22 15:07:04 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned	int	i;
	unsigned	int count;

	i = 0;
	count = 0;
	while (src[i])
		i++;
	while ((count < i) && (count < size - 1))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (i);
}
