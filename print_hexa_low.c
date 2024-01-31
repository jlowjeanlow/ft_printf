/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_low.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:03:39 by jlow              #+#    #+#             */
/*   Updated: 2023/07/10 15:23:41 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hexa_low(unsigned int num, int *len)
{
	char	*tmp;
	int		i;

	tmp = "0123456789abcdef";
	if (num > 0)
	{
		i = num % 16;
		num = num / 16;
		print_hexa_low(num, len);
		write(1, &tmp[i], 1);
		(*len)++;
	}
}

// int main ()
// {
// 	int	num = 160;
// 	int	len;

// 	print_hexa_low(num, &len);
// }