/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:09:17 by eraugust          #+#    #+#             */
/*   Updated: 2022/04/25 18:04:17 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	n_dest;
	size_t	n_src;
	size_t	i;

	i = 0;
	n_dest = ft_strlen(dest);
	n_src = ft_strlen(src);
	if (size <= n_dest)
		return (size + n_src);
	while (src[i] != '\0' && i < size - n_dest - 1)
	{
		dest[n_dest + i] = src[i];
		i++;
	}
	dest[n_dest + i] = '\0';
	return (n_dest + n_src);
}
