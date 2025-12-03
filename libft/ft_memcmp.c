/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:30:40 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/25 15:17:57 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] &&
		((unsigned char *)s1)[i] != '\0' &&
		((unsigned char *)s2)[i] != '\0' && j < n)
	{
		i ++;
		j ++;
	}
	if (j == n)
		return (0);
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*int main(void)
{
	const char s1[]="abcde";
	const char s2[]="abCde";
	printf("%d\n", ft_memcmp(s1, s2, 5));
	return (0);
}*/