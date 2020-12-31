/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 16:36:48 by clim              #+#    #+#             */
/*   Updated: 2020/12/28 17:36:57 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char		*ptr;
	int			s1_len;
	int			s2_len;

	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	ptr = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (ptr == 0)
		return (0);	
	ft_strlcpy((char *)ptr, (char *)s1, s1_len + 1);
	ft_strlcat((char *)ptr, (char *)s2, s1_len + s2_len + 1);
	return (ptr);
}
