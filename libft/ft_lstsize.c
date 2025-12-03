/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:10:19 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/29 13:16:03 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*tmp;

	count = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		count ++;
	}
	return (count);
}

/*int main(void)
{
    t_list *node1 = ft_lstnew("kitty one");
    t_list *node2 = ft_lstnew("kitty 2");
    t_list *node3 = ft_lstnew("kitty 3");

    if (!node1 || !node2 || !node3)
    {
        printf("memory allocation failed\n");
        return (1);
    }

    node1->next = node2;
    node2->next = node3;

    int size = ft_lstsize(node1);
    printf("list size : %d\n", size);

    free(node3);
    free(node2);
    free(node1);

    return 0;
}*/
