/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:29:37 by jlow              #+#    #+#             */
/*   Updated: 2023/07/10 15:11:03 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_string(char *str, int *len)
{
	ft_putstr_fd(str, 1);
	(*len) += ft_strlen(str);
}

// int main()
// {
// 	int	x;

// 	x = 0;
// 	print_string(NULL, &x);
// }
