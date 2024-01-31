/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:24:14 by jlow              #+#    #+#             */
/*   Updated: 2023/07/10 15:11:06 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_unsigned_int(unsigned int n, int *len)
{
	if (n >= 10)
		print_unsigned_int(n / 10, len);
	print_char((n % 10) + '0', len);
}
