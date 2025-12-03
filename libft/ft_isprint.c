/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:42:51 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/25 15:37:06 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1024);
	}
	else
	{
		return (0);
	}
}

/*int main(void)
{
    char c = 'A';
    if (ft_isprint(c))
        printf("'%c' is a printable character.\n", c);
    else
        printf("'%c' is not a printable character.\n", c);
    return (0);
}*/