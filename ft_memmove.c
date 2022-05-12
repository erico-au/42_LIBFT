/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:40:51 by eraugust          #+#    #+#             */
/*   Updated: 2022/04/18 21:02:34 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*str1_c;
	unsigned char	*str2_c;

	if (str1 == NULL && str2 == NULL)
		return (NULL);
	str1_c = (unsigned char *)str1;
	str2_c = (unsigned char *)str2;
	i = 1;
	if (str2_c < str1_c)
	{
		while (i <= n)
		{
			str1_c[n - i] = str2_c[n - i];
			i++;
		}
	}
	else
		ft_memcpy(str1_c, str2_c, n);
	return (str1);
}
