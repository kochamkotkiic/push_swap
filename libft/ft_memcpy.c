/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:42:09 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/25 15:18:02 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!(dest) && !(src))
	{
		return (NULL);
	}
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i ++;
	}
	return (dest);
}
/*int main(void)
{
    char dest[]= "hello world";
    char src[]= " jlsncfslidnv";
    printf("Before memcpy: %s\n", dest);
    ft_memcpy(dest, src, 5);
    printf("After memcpy: %s\n", dest);
    return 0;
}*/
