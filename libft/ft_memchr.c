/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:05:24 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/25 15:17:52 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int		i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i ++;
	}
	return (NULL);
}
/*int main(void)
{
	const char str[] ="hello world";
	const char c = 'o';
	char *res;
	res = ft_memchr(str,c, 10);
	if (res)
		printf("Character found: %s\n", res);
	else
		printf("Character not found\n");
	return 0;
}*/