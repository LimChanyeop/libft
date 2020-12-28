/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 13:18:03 by clim              #+#    #+#             */
/*   Updated: 2020/12/28 13:26:36 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;
    
    ptr = malloc(nmemb * size);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}
