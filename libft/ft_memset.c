/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:50:36 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/25 15:18:13 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t count)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) ptr;
	while (i < count)
	{
		str[i] = (unsigned char)c;
		i ++;
	}
	return (ptr);
}
/*int	main(void)
{
	char str[]= "aaa";
	//char	str[]= "GeeksForGeeks is for programming geeks.";
	ft_memset(str, 'b', 6);
	printf("%s\n", str);
	return (0);
}*/
