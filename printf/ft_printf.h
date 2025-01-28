/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:17:04 by whi               #+#    #+#             */
/*   Updated: 2025/01/22 23:43:06 by whi              ###   ########.fr       */
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
int	ft_numb_len(unsigned	int ui);
void	ft_prozess(t_count main_data, int z);
void	ft_print_char(t_count main_data, int x);
void	ft_printstr(t_count main_data, char *str);
void	ft_print_percent(t_count main_data);
void	ft_print_ptr(t_count main_data, unsigned long long ptr);
void	ft_print_ptr_v2(t_count main_data, unsigned long long ptr);
void	ft_put_char(t_count main_data, char x);
void	ft_print_nbr(t_count main_data, int x);
void	ft_print_hexa(t_count main_data, unsigned int x, char format);
void	ft_print_hexa_V2(t_count main_data, unsigned int x, char format);
void	ft_print_unsignet_int(t_count main_data, unsigned int ui);
char	*ft_unsignet_itoa(unsigned int x);

#endif