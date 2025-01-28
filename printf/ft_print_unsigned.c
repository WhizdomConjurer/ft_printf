/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 21:39:06 by whi               #+#    #+#             */
/*   Updated: 2025/01/22 22:25:13 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

int	ft_numb_len(unsigned	int ui)
{
	int	len;

	len = 0;
	while (ui != 0)
	{
		len++;
		ui = ui / 10;
	}
	return (len);
}

char	*ft_unsignet_itoa(unsigned int ui)
{
	char	*numb;
	int		len;

	len = ft_numb_len(ui);
	numb = (char *)malloc(sizeof(char) * (len + 1));
	if (!numb)
		return (0);
	numb[len] = '\0';
	while (ui != 0)
	{
		numb[len - 1] = ui % 10 + 48;
		ui = ui / 10;
		len--;
	}
	return (numb);
}

void	ft_print_unsignet_int(t_count main_data, unsigned int ui)
{
	char	*numb;

	if (ui == 0)
	{
		write(1, "0", 1);
		main_data.count++;
	}
	else
	{
		numb = ft_unsignet_itoa(ui);
		ft_printstr(main_data, numb);
	}
}