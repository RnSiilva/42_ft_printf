/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:17:28 by resilva           #+#    #+#             */
/*   Updated: 2023/10/21 17:34:33 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_ptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	while (ptr)
	{
		count++;
		ptr = ptr / 16;
	}
	return (count);
}

void	ft_put_ptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_put_ptr(ptr / 16);
		ft_put_ptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar_fd((ptr + '0'), 1);
		else
			ft_putchar_fd((ptr - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (ptr == 0)
	{
		return (count + ft_print_str("(nil)"));
	}
	else
	{
		count = write(1, "0x", 2);
		ft_put_ptr(ptr);
		count = count + ft_len_ptr(ptr);
	}
	return (count);
}

// int main() {
//     void* ptr = NULL;
//     printf("Pointer value: %p\n", ptr);
//     return 0;
// }

// int main (void) {
//    int i = 1234; 
//    printf (" i = %d\n", i);
//    printf ("&i = %ld\n", (long) &i);
//    printf ("&i = %p\n", &i);
//    return EXIT_SUCCESS;
// }