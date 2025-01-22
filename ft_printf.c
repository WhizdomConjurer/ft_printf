/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:12:38 by whi               #+#    #+#             */
/*   Updated: 2025/01/22 11:35:22 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>




int	ft_printf(const char *str, ...)
{
	int	x;
	t_count	prt_chars;
	va_list	args;

	x = 0;
	prt_chars->count  = 0;
	va_start(args, str);
	while (str[x])
	{
		if (str[x] == '%')
		{
			
		}
		
	}
	
}
