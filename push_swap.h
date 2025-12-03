/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:35:03 by emurbane          #+#    #+#             */
/*   Updated: 2025/12/03 18:34:34 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

/* Main & Init */
void	init_stack(t_stack **stack, int argc, char **argv);
void	free_stack(t_stack **stack);
void	error_exit(t_stack **stack);
int		is_sorted(t_stack *stack);

/* Utils */
int	is_sorted(t_stack *stack);
void	error_exit(t_stack **stack);
void	free_stack(t_stack **stack);
void	free_str_array(char **str);

/* Operations */
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

/* Sorting */
void	sort_stack(t_stack **a, t_stack **b);
void	radix_sort(t_stack **a, t_stack **b);
void	simple_sort(t_stack **a, t_stack **b);
void	index_stack(t_stack *stack);
t_stack	*stack_new(int value);
void	stack_add_back(t_stack **lst, t_stack *new);
int	stack_size(t_stack *stack);
t_stack	*stack_last(t_stack *stack);
#endif
