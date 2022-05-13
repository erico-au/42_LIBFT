/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 21:09:46 by eraugust          #+#    #+#             */
/*   Updated: 2022/04/29 23:00:09 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_number_words(const char *s, char c);
static char		*ft_bit(char const *s, char c, int index);

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	index;
	size_t	n_str;

	index = 0;
	if (!s)
		return (NULL);
	n_str = ft_number_words(s, c);
	ret = (char **)malloc((++n_str * sizeof(char *)));
	if (!ret)
		return (NULL);
	while (index < n_str - 1)
	{
		ret[index] = ft_bit(s, c, index);
		index++;
	}
	ret[index] = NULL;
	return (ret);
}

static size_t	ft_number_words(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c && *s)
		{
			i++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (i);
}

static char	*ft_bit(char const *s, char c, int index)
{
	int		n_str;
	int		i;
	int		n;
	char	*str;

	n = 0;
	n_str = 0;
	while (s[n] && n_str <= index)
	{
		if (s[n] != c && s[n])
		{
			i = n;
			n_str++;
			while (s[n] != c && s[n])
				n++;
		}
		else
			n++;
	}
	str = (char *)malloc((n - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy((char *)str, (char *)(s + i), (size_t)(n - i + 1));
	return (str);
}
