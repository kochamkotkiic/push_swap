/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:36:48 by emurbane          #+#    #+#             */
/*   Updated: 2025/12/04 16:17:23 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	validate_and_add(t_stack **stack, char *str)
{
    long	num;
    t_stack	*tmp;

    num = ft_atoi(str);
    if (num > INT_MAX || num < INT_MIN)
        error_exit(stack);
    tmp = *stack;
    while (tmp)
    {
        if (tmp->value == (int)num)
            error_exit(stack);
        tmp = tmp->next;
    }
    stack_add_back(stack, stack_new((int)num));
}

void	init_stack(t_stack **stack, int argc, char **argv)
{
	int		i;
	int		j;
	char	**args;

	i = 1;
	while (i < argc)
	{
		args = ft_split(argv[i], ' ');
		if (!args)
			error_exit(stack);
		j = 0;
		while (args[j])
		{
			validate_and_add(stack, args[j]);
			j++;
		}
		free_str_array(args);
		i++;
	}
	index_stack(*stack);
}
//przypisujemy range(indeks) kazdeu elementowi
void	index_stack(t_stack *stack)
{
	t_stack	*head;
	t_stack	*next;

	head = stack;
	while (head)
	{
		next = stack;
		while (next)
		{
			if (head->value > next->value)
				head->index++;
			next = next->next;
		}
		head = head->next;
	}
}
