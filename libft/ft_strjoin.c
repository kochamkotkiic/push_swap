/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 10:55:53 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/25 18:29:21 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		res[i] = s1[i];
		i ++;
	}
	j = i;
	i = 0;
	while (i < ft_strlen(s2))
	{
		res[i + j] = s2[i];
		i ++;
	}
	res[i + j] = '\0';
	return (res);
}
/*int main (void)
{
	char str[]="kicia";
	char str1[]="kotki";
	char *res = ft_strjoin(str,str1);
	printf("%s", res);
	return 0;
}*/
