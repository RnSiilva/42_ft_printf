/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:40:55 by resilva           #+#    #+#             */
/*   Updated: 2023/10/21 02:26:49 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_n_size(unsigned int n)
{
	int	size;

	size = 0;
	while (n)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_uitoa(unsigned int n)
{
	int		size;
	char	*str;

	size = ft_n_size(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	str[size] = '\0';
	while (n != 0)
	{
		size--;
		str[size] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

int	ft_print_unsigned(unsigned int n)
{
	char	*u_str;
	int		count;

	count = 0;
	if (n == 0)
		count = count + write(1, "0", 1);
	else
	{
		u_str = ft_uitoa(n);
		count = count + ft_print_str(u_str);
		free(u_str);
	}
	return (count);
}
