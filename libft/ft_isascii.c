/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:34:26 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/25 15:17:18 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
	{
		return (0);
	}
	else
	{
		return (1024);
	}
}
/*int main(void)
{
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", ft_isascii(' '));
	printf("%d\n", ft_isascii(-1));
	return (0);
}*/
