/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 17:48:23 by clim              #+#    #+#             */
/*   Updated: 2020/12/29 10:28:03 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				match_test(const char c1, const char *set)
{
	int			i;

	i = 0;
	while (set[i])
	{
		if (c1 == set[i++])
			return(1); 
	}
	return(0);

}
char			*ft_strtrim(char const *s1, char const *set)
{
	int			len;
	char		*ptr;
	
	if (!(*set))
		return((char *)ft_strdup(""));
	while (match_test(*s1, set))
		s1++;
	len = ft_strlen((char *)s1) - 1;
	while (len >= 0 && match_test(s1[len], set))
		len--;
	ptr = malloc(sizeof(char) * (len + 2));
	if (!ptr)
		free(ptr);
	ft_strlcpy(ptr, (char *)s1, (len + 2));
	return (ptr);
}

