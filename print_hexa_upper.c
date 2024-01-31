/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:34:05 by jlow              #+#    #+#             */
/*   Updated: 2023/07/10 15:23:37 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hexa_upper(unsigned int num, int *len)
{
	char	*tmp;
	int		i;

	tmp = "0123456789ABCDEF";
	if (num > 0)
	{
		i = num % 16;
		num = num / 16;
		print_hexa_upper(num, len);
		write(1, &tmp[i], 1);
		(*len)++;
	}
}

// int main ()
// {
// 	int	num = 160;
// 	int	len;

// 	print_hexa_upper(num, &len);
// }