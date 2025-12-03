/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:30:16 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/25 15:19:23 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	size_t			len;

	i = 0;
	len = 0;
	while (src[i] != '\0')
	{
		i ++;
	}
	len = i;
	if (size == 0)
	{
		return (len);
	}
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (len);
}
/*int main(void)
{
    char src[] = "Hello, World!";
    char dest[20];
    unsigned int size = 10;
    size_t result;

    result = ft_strlcpy(dest, src, size);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Length of source: %zu\n", result);
    return (0);
}*/