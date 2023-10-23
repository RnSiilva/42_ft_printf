/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:05:23 by resilva           #+#    #+#             */
/*   Updated: 2023/10/21 21:00:39 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

// int	main(void)
// {
// 	char	*str;
// 	int		len;
// 	int		i;

// 	str = "42School";
// 	i = 0;

// 	ft_printf("\n\t >>> ft_ <<<\n");
// 	len = ft_print_char(str[i]);
// 	ft_printf("\nlen ft_: %d\n\n", len);

// 	printf("\n\t >>> orig <<<\n");
// 	len = printf("%c", str[i]);
// 	printf("\nlen org: %d\n\n", len);
// 	return (0);
// }