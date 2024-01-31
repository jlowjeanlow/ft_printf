/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:47:28 by jlow              #+#    #+#             */
/*   Updated: 2023/07/10 15:13:36 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
void	print_char(char c, int *len);
void	print_string(char *str, int *len);
void	print_pointer(uintptr_t num, int *len);
void	print_decimal(int num, int *len);
void	print_unsigned_int(unsigned int num, int *len);
void	print_hexa_low(unsigned int num, int *len);
void	print_hexa_upper(unsigned int num, int *len);

#endif