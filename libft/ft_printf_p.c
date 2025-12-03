/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:41:26 by emurbane          #+#    #+#             */
/*   Updated: 2025/11/07 15:42:30 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
	{
		count ++;
	}
	return (count);
}

char	*conv_long(unsigned long ptr)
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

int	ft_putvoid(unsigned long ptr)
{
	char	*addr;
	int		len;
	int		i;

	if (!ptr)
		return (write(1, "(nil)", 5));
	addr = conv_long(ptr);
	if (!addr)
		return (0);
	len = write(1, "0x", 2);
	i = ft_strlen(addr);
	while (--i >= 0)
		len += ft_putchar(addr[i]);
	free(addr);
	return (len);
}

int	handle_p(va_list args)
{
	void	*ptr;

	ptr = va_arg(args, void *);
	return (ft_putvoid((unsigned long)ptr));
}
