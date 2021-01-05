/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 12:59:19 by clim              #+#    #+#             */
/*   Updated: 2021/01/05 11:33:36 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *s)
{
	char		*ptr;

	ptr = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (!ptr)
		return (0);
	ft_memcpy((char *)ptr, (char *)s, ft_strlen((char *)s) + 1);
	return (ptr);
}
