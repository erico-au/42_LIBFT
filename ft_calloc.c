/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:39:18 by eraugust          #+#    #+#             */
/*   Updated: 2022/05/02 17:35:39 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;
	size_t	all_size;

	if (nitems == 0 || size == 0)
		return (malloc(0));
	all_size = nitems * size;
	if (all_size / size != nitems)
		return (NULL);
	p = malloc(nitems * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nitems * size);
	return (p);
}
