/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:35:42 by emurbane          #+#    #+#             */
/*   Updated: 2025/12/05 16:05:56 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc < 2)
		exit(0);
	while (++i < argc)
	{
		j = 0;
		if (!argv[i][0] || (argv[i][0] == ' ' && !argv[i][1]))
			error_exit(NULL);
		while (argv[i][j])
		{
			if (!((argv[i][j] >= '0' && argv[i][j] <= '9') ||
				argv[i][j] == ' ' || argv[i][j] == '-' || argv[i][j] == '+'))
				error_exit(NULL);
			j++;
		}
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	check_args(argc, argv);
	init_stack(&stack_a, argc, argv);
	if (is_sorted(stack_a))
	{
		free_stack(&stack_a);
		return (0);
	}
	sort_stack(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
