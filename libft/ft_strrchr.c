/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:22:50 by eraugust          #+#    #+#             */
/*   Updated: 2022/04/19 23:00:31 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	s;

	s = (unsigned char)c;
	i = ft_strlen((char *)str);
	while (i >= 0)
	{
		i--;
		if (str[i] == s)
			return ((char *)&str[i]);
	}
	if (s == '\0')
		return ((char *)&str[i]);
	return (null);
}
