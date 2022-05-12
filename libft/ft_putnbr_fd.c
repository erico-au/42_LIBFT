/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:32:31 by eraugust          #+#    #+#             */
/*   Updated: 2022/05/02 20:15:45 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_put_itoa(int n, char *str);

void	ft_putnbr_fd(int n, int fd)
{
	char	str[32];

	ft_put_itoa(n, str);
	ft_putstr_fd(str, fd);
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
		div = div * 10;
	}
	while (div)
	{
		*str++ = '0' + num / div;
		num = num % div;
		div = div / 10;
	}
	*str = '\0';
}
