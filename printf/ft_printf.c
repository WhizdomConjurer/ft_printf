/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:12:38 by whi               #+#    #+#             */
/*   Updated: 2025/01/22 21:18:21 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

void	ft_print_char(t_count main_data, int x)
{
	write(1, &x , 1);
	main_data.count++;
}

void	ft_prozess(t_count main_data, int z)
{
	if (main_data.str[z] == 'c')
		ft_print_char(main_data, va_arg(main_data.args, int));
	else if (main_data.str[z] == '%')
		ft_print_percent(main_data);
	else if (main_data.str[z] == 's')
		ft_printstr(main_data, va_arg(main_data.args, char *));
	else if (main_data.str[z] == 'p')
		ft_print_ptr(main_data, va_arg(main_data.args, unsigned long long));
	

	return ;
}

int	ft_printf(const char *str, ...)
{
	int	x;
	t_count	main_data;

	x = 0;
	main_data.count  = 0;
	va_start(main_data.args, str);
	main_data.str = str;

	while (str[x])
	{
		if (str[x] == '%')
		{
			ft_prozess(main_data, x + 1);
			x++;
		}
		else
			ft_print_char(main_data, main_data.str[x]);
		x++;
	}
	return (main_data.count);
}
