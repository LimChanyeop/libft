/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 22:49:54 by clim              #+#    #+#             */
/*   Updated: 2021/01/04 14:01:35 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;

	if (!(*little))
		return ((char *)big);
	i = 0;
	while (*(big + i) && i + ft_strlen((char *)little) < len)
	{
		if (ft_memcmp((big + i), little, ft_strlen((char *)little)) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
