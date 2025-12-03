/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 12:41:25 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/30 10:57:21 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*int main (void)
{
	char str1[] = "Hello, World!";
	char str2[] = "Hello, Everyone!";
	unsigned int n = 7;

	int result = ft_strncmp(str1, str2, n);
	if (result < 0)
		printf("str1 is less than str2\n");
	else if (result > 0)
		printf("str1 is greater than str2\n");
	else
		printf("str1 is equal to str2\n");

	return 0;
}*/
