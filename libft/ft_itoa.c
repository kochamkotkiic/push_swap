/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 12:08:29 by emurbane          #+#    #+#             */
/*   Updated: 2025/11/07 15:48:27 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*alloc(int len)
{
	char	*array;

	array = malloc((len + 1) * sizeof(char));
	if (!array)
		return (NULL);
	array[0] = '0';
	return (array);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		i;
	long	nb;

	i = 0;
	nb = n;
	len = leng(nb);
	res = alloc(len);
	if (!res)
		return (NULL);
	if (nb < 0)
		nb *= -1;
	i = len - 1;
	while (nb != 0)
	{
		res[i] = ((nb % 10) + 48);
		nb /= 10;
		i --;
	}
	if (n < 0)
		res[0] = '-';
	res[len] = '\0';
	return (res);
}
/*int main(void)
{
	int nb = 0;
	int nb1 = -1234;
	int nb2 = -2147483648;
	int nb3 = 2147483647;
	printf("%s\n", ft_itoa(nb));
	printf("%s\n", ft_itoa(nb1));
	printf("%s\n", ft_itoa(nb2));
	printf("%s\n", ft_itoa(nb3));
}*/
