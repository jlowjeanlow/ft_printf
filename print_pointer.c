/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:20:59 by jlow              #+#    #+#             */
/*   Updated: 2023/07/10 15:11:00 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// % < 10 added directly
// % > 10 change to value of 'a'

#include "ft_printf.h"

void	print_pointer(uintptr_t num, int *len)
{
	char	digit;

	if (num != 0)
	{
		print_pointer(num / 16, len);
		digit = (num % 16);
		if (digit < 10)
			digit += '0';
		else
			digit += 'a' - 10;
		ft_putchar_fd(digit, 1);
		(*len)++;
	}
	else
	{
		write(1, "0x", 2);
		(*len) += 2;
	}
}

// int main() {
//     int x = 42;
//     int *ptr = &x;
// 	int	len = 0;

//     print_pointer(0, &len);
//     write(1, "\n", 1);

//     return 0;
// }
