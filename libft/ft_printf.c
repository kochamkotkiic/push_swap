/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:40:58 by emurbane          #+#    #+#             */
/*   Updated: 2025/11/07 15:42:56 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	handle_format(char spec, va_list args)
{
	if (spec == 'c')
		return (handle_c(args));
	else if (spec == 's')
		return (handle_s(args));
	else if (spec == 'd' || spec == 'i')
		return (handle_d(args));
	else if (spec == 'p')
		return (handle_p(args));
	else if (spec == 'x')
		return (handle_x(args));
	else if (spec == 'u')
		return (handle_u(args));
	else if (spec == 'X')
		return (handle_x_upper(args));
	else if (spec == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			printed += handle_format(format[i], args);
		}
		else
			printed += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (printed);
}
