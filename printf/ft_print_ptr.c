/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:38:50 by whi               #+#    #+#             */
/*   Updated: 2025/01/22 21:18:23 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_put_char(t_count main_data, char x)
{
	write(1, &x , 1);
	main_data.count++;
}

void	ft_print_ptr_v2(t_count main_data, unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_print_ptr_v2(main_data, ptr / 16);
		ft_print_ptr_v2(main_data, ptr & 16);
	}
	else
	{
		if (ptr <= 9)
			ft_put_char(main_data, ptr + '0');
		else
			ft_put_char(main_data, ptr - 10 + 'a');
	}
}

void	ft_print_ptr(t_count main_data, unsigned long long ptr)
{
	write(1, "0x", 2);
	main_data.count += 2;
	if (ptr == 0)
	{
		write(1, "0", 1);
		main_data.count += 1;
	}
	else 
		ft_print_ptr_v2(main_data, ptr);
}