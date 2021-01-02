/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 14:45:56 by clim              #+#    #+#             */
/*   Updated: 2020/12/28 12:23:50 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i])
	{
		if (--n == 0 || (s1[i] == '\0' && s2[i] == '\0'))
			return (0);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}