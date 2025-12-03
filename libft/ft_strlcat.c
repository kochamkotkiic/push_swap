/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:37:21 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/25 15:19:19 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			destl;
	size_t			srcl;

	i = 0;
	destl = 0;
	srcl = 0;
	while (dest[destl] != '\0')
		destl ++;
	while (src[srcl] != '\0')
		srcl ++;
	j = destl;
	if (size <= destl)
		return (srcl + size);
	while (src[i] && i < size - destl - 1)
	{
		dest[j] = src[i];
		i ++;
		j ++;
	}
	dest[j] = '\0';
	return (destl + srcl);
}
/*int main(void)
{
	char dest[] = "kotek kotki";
	size_t wynik = ft_strlcat(dest,"kot", sizeof(dest)+ 3);
	printf("%zu", wynik);
	printf("\n%s", dest);
	return 0;
}*/