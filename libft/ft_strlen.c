/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:40:01 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/25 18:19:03 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
	{
		count ++;
	}
	return (count);
}
/*int main(void)
{
	char str[] = "Hello, world!";
	size_t length = ft_strlen(str);
	printf("Length of the string: %zu\n", length);
	return 0;
}*/
