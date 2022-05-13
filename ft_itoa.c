/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 19:44:16 by eraugust          #+#    #+#             */
/*   Updated: 2022/05/02 20:08:39 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_num_char(int number_s);
static void		ft_put_itoa(int n, char *str);

char	*ft_itoa(int number_s)
{
	char	*str;
	size_t	len;

	len = ft_num_char(number_s);
	str = (char *)malloc((len + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	ft_put_itoa(number_s, str);
	return (str);
}

static int	ft_num_char(int number_s)
{
	int	n_char;

	n_char = 0;
	if (number_s <= 0)
		n_char++;
	while (number_s)
	{
		number_s = number_s / 10;
		++n_char;
	}
	return (n_char);
}

static void	ft_put_itoa(int n, char *str)
{
	unsigned int	div;
	unsigned int	num;

	num = n;
	if (n < 0)
	{
		*str++ = '-';
		num = -n;
	}
	div = 1;
	while (n / 10)
	{
		n = n / 10;
		div *= 10;
	}
	while (div)
	{
		*str++ = '0' + num / div;
		num = num % div;
		div = div / 10;
	}
	*str = '\0';
}
