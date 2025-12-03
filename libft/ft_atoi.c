/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 19:41:33 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/25 15:16:31 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	space(int c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	res = 0;
	sign = 1;
	while (space(str[i]))
		i ++;
	if (str[i] == '+' && str[i + 1] != '-')
		i ++;
	if (str[i] == '-')
	{
		sign = -1;
		i ++;
	}
	res *= sign;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		res *= 10;
		res += (str[i] - 48) * sign;
		i ++;
	}
	return (res);
}
/*int main(void)
{
	char str[]=  "   1234ab567";
	char str1[]= "-1234";
	char str2[]="-2147483648";
	printf("%d", ft_atoi(str));
	printf("\n");
	printf("%d", ft_atoi(str1));
	printf("\n");
	printf("%d", ft_atoi(str2));
	return 0;
}*/