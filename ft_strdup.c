/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:51:43 by eraugust          #+#    #+#             */
/*   Updated: 2022/04/25 15:07:15 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		n;
	char	*str;

	n = ft_strlen(s);
	str = malloc ((n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s, n);
	str[n] = '\0';
	return (str);
}
