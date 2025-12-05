/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:06:47 by emurbane          #+#    #+#             */
/*   Updated: 2025/12/05 16:07:16 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// Swap the first 2 elements at the top of stack a.
/*przesuwamy drugi element(a staje sie elemntem 2) na poczatek listy,
element 1 jest w temp
tmp wksauzuje na element 3(a(elemn2) next)
element 2 wskazuje na element 1(tmp)
*/
void	sa(t_stack **a)
{
	t_stack	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	ft_putstr_fd("sa\n", 1);
}

// Swap the first 2 elements at the top of stack b
void	sb(t_stack **b)
{
	t_stack	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
	ft_putstr_fd("ss\n", 1);
}

//Take the first element at the top of b and put it at the top of a.
/*bierzemy do tmp poczatek b
przesuwamyw skaznik pcozatku b na drugie elemnt
wkaznik tmp na pierwy element a - przeswamy liste
poczatek a to tmp*/
void	pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!*b)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	ft_putstr_fd("pa\n", 1);
}

//Take the first element at the top of a and put it at the top of b.
void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	ft_putstr_fd("pb\n", 1);
}
