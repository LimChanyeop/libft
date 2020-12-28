/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 14:34:14 by clim              #+#    #+#             */
/*   Updated: 2020/12/28 16:34:37 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if(!str)
		return (0);
	if (start >= (unsigned int)ft_strlen((char *)s))
		return (ft_strdup(""));
	s += start;
	ft_strlcpy(str, (char *)s, (unsigned int)(len + 1));
	return (str);
}
