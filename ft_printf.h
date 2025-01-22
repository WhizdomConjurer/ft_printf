/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:17:04 by whi               #+#    #+#             */
/*   Updated: 2025/01/22 11:38:30 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdarg.h>

typedef struct		s_count
{
	int				count;
	va_list			args;
	char			*str;
}					t_count;


#endif