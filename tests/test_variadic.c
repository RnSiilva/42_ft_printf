/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_variadic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:47:19 by resilva           #+#    #+#             */
/*   Updated: 2023/10/20 18:04:29 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

float	ft_average(int n, ...)
{
	va_list	ap;
	int		total;
	int		i;
	
	va_start(ap, n);
	total = 0;
	i = 0;
	while (i < n)
	{
		total = total + va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return ((float)total / n);
		
}

int	main(void)
{
	float	average_age;

	average_age = ft_average(3,		10, 15, 20);
	printf("The average age of those 3 people is %f\n", average_age);
}