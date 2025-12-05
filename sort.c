/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:40:13 by emurbane          #+#    #+#             */
/*   Updated: 2025/12/05 15:53:24 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_3(t_stack **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->index;
	second = (*a)->next->index;
	third = (*a)->next->next->index;
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

static void	sort_5(t_stack **a, t_stack **b)
{
	int	len;

	len = stack_size(*a);
	while (len--)
	{
		if ((*a)->index == 0 || (*a)->index == 1)
			pb(a, b);
		else
			ra(a);
		if (stack_size(*b) == 2)
			break ;
	}
	sort_3(a);
	pa(a, b);
	pa(a, b);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	simple_sort(t_stack **a, t_stack **b)
{
	int	size;

	size = stack_size(*a);
	if (size == 2)
		sa(a);
	else if (size == 3)
		sort_3(a);
	else
		sort_5(a, b);
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;

	size = stack_size(*a);
	max_bits = 0;
	while ((size - 1) >> max_bits != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*a)->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}

void	sort_stack(t_stack **a, t_stack **b)
{
	if (stack_size(*a) <= 5)
		simple_sort(a, b);
	else
		radix_sort(a, b);
}
