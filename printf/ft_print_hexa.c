/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 21:46:49 by whi               #+#    #+#             */
/*   Updated: 2025/01/22 22:08:02 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_print_hexa_V2(t_count main_data, unsigned int x, char format)
{
	if (x >= 16)
	{
		ft_print_hexa_V2(main_data, x / 16, format);
		ft_print_hexa_V2(main_data, x % 16, format);
	}
	else
	{
		if (x <= 9)
			ft_put_char(main_data, x + '0');
		else
		{
			if (format == 'x')
				ft_put_char(main_data, x - 10 + 'a');
			if (format == 'X')
				ft_put_char(main_data, x - 10 + 'A');
		}
	}
}

void	ft_print_hexa(t_count main_data, unsigned int x, char format)
{
	if (x == 0)
	{
		write(1, "0", 1);
		main_data.count++;
	}
	else
		ft_print_hexa_V2(main_data, x, format);
}