/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:55:50 by clim              #+#    #+#             */
/*   Updated: 2020/12/23 10:40:29 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void				*ft_memset(void *b, int c, size_t len)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = b;
	while (len--)
		*(ptr + i++) = c;
	return (b);
}
