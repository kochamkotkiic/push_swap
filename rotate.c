/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:57:41 by emurbane          #+#    #+#             */
/*   Updated: 2025/12/05 15:57:45 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//Shift up all elements of stack a by 1.
/*nowy poczatek to drugi
poczatek na koniec dajemy
*/
void	ra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)->next;
	last = stack_last(*a);
	last->next = tmp;
	tmp->next = NULL;
	ft_putstr_fd("ra\n", 1);
}

//Shift up all elements of stack b by 1
void	rb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = (*b)->next;
	last = stack_last(*b);
	last->next = tmp;
	tmp->next = NULL;
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
	ft_putstr_fd("rr\n", 1);
}
