/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:26:01 by emurbane          #+#    #+#             */
/*   Updated: 2025/11/07 15:42:47 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*conv(unsigned int ptr)
{
	char	*base;
	char	*hex;
	int		i;

	base = "0123456789abcdef";
	hex = malloc(17);
	if (!hex)
		return (NULL);
	i = 0;
	if (ptr == 0)
		hex[i++] = '0';
	while (ptr > 0)
	{
		hex[i++] = base[ptr % 16];
		ptr = ptr / 16;
	}
	hex[i] = '\0';
	return (hex);
}

int	ft_putxlower(unsigned int ptr)
{
	char	*addr;
	int		len;
	int		i;

	addr = conv(ptr);
	len = 0;
	i = ft_strlen(addr);
	if (!addr)
		return (0);
	while (--i >= 0)
		len += ft_putchar(addr[i]);
	free(addr);
	return (len);
}

int	handle_x(va_list args)
{
	unsigned int	nbr;

	nbr = va_arg(args, unsigned int);
	return (ft_putxlower(nbr));
}
