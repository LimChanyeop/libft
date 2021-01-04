/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 12:04:07 by clim              #+#    #+#             */
/*   Updated: 2021/01/04 12:04:26 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
t_list	*res;

	t_list	*current;



		if (lst == NULL)

					return (NULL);

			res = ft_lstnew(f(lst->content));

				if (res == NULL)

							return (NULL);

					current = res;

						lst = lst->next;

							while (lst != NULL)

									{

												current->next = ft_lstnew(f(lst->content));

														current = current->next;

																if (current == NULL)

																			{

																							ft_lstclear(&res, del);

																										return (NULL);

																												}

																		lst = lst->next;

																			}

								return (res);
}
