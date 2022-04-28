/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:39:18 by eraugust          #+#    #+#             */
/*   Updated: 2022/04/29 01:21:47 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;

	p = malloc(nitems * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, size);
	return (p);
}
