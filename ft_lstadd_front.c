/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 21:05:59 by eraugust          #+#    #+#             */
/*   Updated: 2022/05/12 20:03:06 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*node;

	if (*lst == NULL)
		*lst = new;
	else
	{
		node = new;
		node->next = *lst;
		*lst = node;
	}
}
