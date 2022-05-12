/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:43:49 by eraugust          #+#    #+#             */
/*   Updated: 2022/05/02 18:01:20 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	s;

	s = (unsigned char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == s)
			return ((char *)&str[i]);
		i++;
	}
	if (s == '\0')
		return ((char *)&str[i]);
	return (0);
}
