/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:57:02 by emurbane          #+#    #+#             */
/*   Updated: 2025/12/05 15:57:14 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// Shift down all elements of stack a by 1
/*po petli last wskazuje na ostatni elem
prev na przedosatni
dajemy wskaznik ostatniego na poczatek
nowym poczatkiem jest koniec*/
void	rra(t_stack **a)
{
	t_stack	*last;
	t_stack	*prev;

	if (!*a || !(*a)->next)
		return ;
	last = *a;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	last->next = *a;
	*a = last;
	prev->next = NULL;
	ft_putstr_fd("rra\n", 1);
}

// Shift down all elements of stack b by 1
void	rrb(t_stack **b)
{
	t_stack	*last;
	t_stack	*prev;

	if (!*b || !(*b)->next)
		return ;
	last = *b;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	last->next = *b;
	*b = last;
	prev->next = NULL;
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
	ft_putstr_fd("rrr\n", 1);
}
