/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 18:50:31 by clim              #+#    #+#             */
/*   Updated: 2020/12/27 23:54:16 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *s, int c)
{
	const char	find = c;

	while (*s != 0)
	{
		if (*s == find)
			return ((char *)s);
		s++;
	}
	if (*s == find)
		return ((char *)s);
	return (0);
}
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char str[] = "bonjour";
//	printf("original = %s\n", strchr(str, '\n'));
//	printf("myfunc = %s\n", ft_strchr(str,'\n'));
//}

