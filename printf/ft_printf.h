/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:17:04 by whi               #+#    #+#             */
/*   Updated: 2025/01/22 16:40:30 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

typedef struct		s_count
{
	int				count;
	va_list			args;
	const char			*str;
}					t_count;

int	ft_printf(const char *str, ...);
void	ft_prozess(t_count main_data, int z);
void	ft_print_char(t_count main_data, int x);
void	ft_printstr(t_count main_data, char *str);
void	ft_print_percent(t_count main_data);


#endif