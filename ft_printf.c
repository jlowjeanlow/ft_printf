/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:48:05 by jlow              #+#    #+#             */
/*   Updated: 2023/07/10 15:55:11 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pointer(uintptr_t num, int *len)
{	
	if (num == 0)
	{
		write(1, "0x0", 3);
		(*len) += 3;
	}
	else
		print_pointer(num, len);
}

void	lhex(unsigned int num, int *len)
{
	if (!num)
	{
		write(1, "0", 1);
		(*len)++;
	}
	print_hexa_low(num, len);
}

void	uphex(unsigned int num, int *len)
{
	if (!num)
	{
		write(1, "0", 1);
		(*len)++;
	}
	print_hexa_upper(num, len);
}

void	check_format(char c, va_list ap, int *len)
{
	if (c == 'c')
		print_char(va_arg(ap, int), len);
	if (c == 's')
		print_string(va_arg(ap, char *), len);
	if (c == 'p')
		pointer((uintptr_t)va_arg(ap, void *), len);
	if (c == 'd' || c == 'i')
		print_decimal(va_arg(ap, int), len);
	if (c == 'u')
		print_unsigned_int(va_arg(ap, int), len);
	if (c == 'x')
		lhex(va_arg(ap, int), len);
	if (c == 'X')
		uphex(va_arg(ap, int), len);
	if (c == '%')
	{
		write(1, "%", 1);
		(*len) = (*len) + 1;
	}
	return ;
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			check_format(*str, ap, &len);
		}
		else
			print_char(*str, &len);
		str++;
	}
	va_end(ap);
	return (len);
}
