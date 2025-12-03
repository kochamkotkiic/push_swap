/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:48:16 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/25 15:18:07 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_memmove_forward(unsigned char *cdest, const unsigned char *csrc,
	size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		cdest[i] = csrc[i];
		i++;
	}
}

static void	ft_memmove_backward(unsigned char *cdest, const unsigned char *csrc,
	size_t num)
{
	size_t	i;

	i = num;
	while (i > 0)
	{
		i --;
		cdest[i] = csrc[i];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char		*cdest;
	const unsigned char	*csrc;

	if ((!src && !dest) && num > 0)
		return (NULL);
	cdest = (unsigned char *)dest;
	csrc = (const unsigned char *)src;
	if (cdest == csrc || num == 0)
		return (dest);
	if (cdest < csrc || cdest >= csrc + num)
		ft_memmove_forward(cdest, csrc, num);
	else
		ft_memmove_backward(cdest, csrc, num);
	return (dest);
}
/*int main(void)
{
	char str[100] = "Learningisfun";
    char *first, *second;
    first = str;
    second = str;
    printf("Original string :%s\n ", str);
    
    ft_memmove(second + 8, first, 10);
    printf("memmove overlap : %s\n ", str);

    return 0;
}*/