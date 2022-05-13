/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 00:15:14 by eraugust          #+#    #+#             */
/*   Updated: 2022/04/29 00:58:44 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	n1;
	size_t	n2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	n1 = ft_strlen(s1);
	n2 = ft_strlen(s2);
	str = malloc ((n1 + n2 + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, n1);
	ft_memcpy(str + n1, s2, n2);
	str[n1 + n2] = '\0';
	return (str);
}
