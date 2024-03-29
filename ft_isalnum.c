/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 15:48:28 by clim              #+#    #+#             */
/*   Updated: 2020/12/22 15:31:09 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isalnum(int c)
{
	return (((c >= '0') && (c <= '9')) || ((c >= 'a') && (c <= 'z')) ||
				((c >= 'A' && c <= 'Z')));
}
