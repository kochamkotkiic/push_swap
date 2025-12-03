/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 16:10:04 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/29 13:16:38 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*int main(void)
{
    char *text = "Hello kitty";

    t_list *node = ft_lstnew(text);

    if (!node)
    {
        printf("memory allocation failed\n");
        return (1);
    }

    printf("content node->content: %s\n", (char *)node->content);
    if (node->next == NULL)
        printf("node->next = NULL \n");
    else
        printf("node->next is not NULL\n");

    free(node);

    return (0);
}*/
