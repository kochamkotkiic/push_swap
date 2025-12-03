/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:51:22 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/25 15:18:51 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s ++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*int main(void)
{
	const char str[] = "Hello, world!";
	int c = '.';
	char *result = ft_strchr(str, c);
	if (result != NULL)
	{
		printf("Character '%c' found at position: %ld\n", c, result - str);
	}// pointer do w - pointer do pocztaku daje odl
	else
	{
		printf("Character '%c' not found in the string.\n", c);
	}
	return 0;
}*/
