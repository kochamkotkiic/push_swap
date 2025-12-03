/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 16:40:46 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/25 15:18:57 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;
	int		i;

	len = 0;
	i = 0;
	if (!src)
		return (NULL);
	while (src[len])
		len ++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	while (i <= len)
	{
		dup[i] = src[i];
		i ++;
	}
	return (dup);
}
/*int main(void)
{
	char src[]="kotek kotki";
	char *target=ft_strdup(src);
	printf("%s", target);
	return 0;
}*/
