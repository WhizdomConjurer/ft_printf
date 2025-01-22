/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_general.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:16:40 by whi               #+#    #+#             */
/*   Updated: 2025/01/22 17:07:29 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_print_percent(t_count main_data)
{
	write(1, "%", 1);
	main_data.count++;
}

void	ft_printstr(t_count main_data, char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		main_data.count += 6;
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		main_data.count++;
		i++;
	}
}