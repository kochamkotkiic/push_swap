/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 12:26:08 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/25 15:19:45 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = NULL;
	while (*s)
	{
		if (*s == (char)c)
			res = (char *) s;
		s ++;
	}
	if (c == '\0')
		return ((char *)s);
	return (res);
}
/*int main(void)
{
	const char str[] = "Hello world!";
	const char c = 'o';
	char *ret;

	ret = ft_strrchr(str, c);

	printf("String after %c is - %s\n", c, ret);
	return (0);
}*/