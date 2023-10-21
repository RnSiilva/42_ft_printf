/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:21:55 by resilva           #+#    #+#             */
/*   Updated: 2023/10/21 01:49:57 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	char	*nb_str;
	int		len;

	nb_str = ft_itoa(n);
	len = ft_print_str(nb_str);
	free(nb_str);
	return (len);
}
