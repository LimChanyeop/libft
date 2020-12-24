/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 22:49:54 by clim              #+#    #+#             */
/*   Updated: 2020/12/24 23:14:13 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			leng;
	unsigned int	i;
	unsigned int	i1;

	if (ft_strlen(little) == 0)
		return ((char *)big);
	i = 0;
	while (*(big + i) && i < len)
	{
		i1 = 0;
		while (*(big + i1) == *(little + i1) && *(little + i1) && *(big + i1))
		{
			i1++;
		}
		if (!(i1) && !(*(little + i1)))
			return ((char *)big + i);
		i++;
	}
	return (0);
}
