/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:57:31 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/29 13:53:21 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[j] != '\0' && j < len)
	{
		if (big[j] == little[0])
		{
			while (big[j + i] != '\0' && big[j + i] == little[i] && i + j < len)
				i ++;
			if (little[i] == '\0')
				return ((char *)(big + j));
		}
		j ++;
		i = 0;
	}
	return (NULL);
}
/*int main(void)
{
	const char big[] = "Hello, world!";
	const char little[] = "world";
	char *result;

	result = ft_strnstr(big, little, 13);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");
}*/
