/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:31:58 by eraugust          #+#    #+#             */
/*   Updated: 2022/04/29 00:08:52 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	ns;
	char	*str;

	ns = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start > ns)
		return (ft_strdup(""));
	else if (start + len > ns)
		len = ns - start;
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (target)
		ft_strlcpy(str, s + start, len + 1);
	return (str);
}
