/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:12:38 by whi               #+#    #+#             */
/*   Updated: 2025/01/22 16:38:54 by whi              ###   ########.fr       */
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

int main(void)
{
	char p;
	int i;

	p = 'c';
	i = 0;
	(void)i;
	i = printf("printf: %c\n" , p);
	// printf("printf: %i\n" , i);
	i = ft_printf("ft_printf: %c\n" , p);
	// ft_printf("ft_printf: %i\n" , i);
	
	return (0);
}