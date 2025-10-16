/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocto <yocto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:50:26 by yocto             #+#    #+#             */
/*   Updated: 2025/10/16 16:18:48 by yocto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	first = *a;
	second = first->next;
	third = second->next;
	if (first->rank == 0 && second->rank == 2 && third->rank == 1)
	{
		rra(a);
		sa(a);
	}
	else if (first->rank == 1 && second->rank == 0 && third->rank == 2)
		sa(a);
	else if (first->rank == 1 && second->rank == 2 && third->rank == 0)
		rra(a);
	else if (first->rank == 2 && second->rank == 0 && third->rank == 1)
		ra(a);
	else if (first->rank == 2 && second->rank == 1 && third->rank == 0)
	{
		sa(a);
		rra(a);
	}
}

int	is_in_first_half(t_stack *stack, int rank)
{
	int		size;
	t_stack	*tmp;
	int		pos;

	size = 0;
	tmp = stack;
	pos = 0;
	while (tmp)
	{
		if (tmp->rank == rank)
			break ;
		tmp = tmp->next;
		pos++;
	}
	tmp = stack;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}
	if (pos <= size / 2)
		return (1);
	return (0);
}

void	sort_four(t_stack **a, t_stack **b)
{
	if (is_in_first_half(*a, 0))
		while ((*a)->rank != 0)
			ra(a);
	else
		while ((*a)->rank != 0)
			rra(a);
	pb(b, a);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_stack **a, t_stack **b)
{
	while (count_nodes(*a) > 3)
	{
		if ((*a)->rank == 0 || (*a)->rank == 1)
			pb(b, a);
		else
		{
			if (is_in_first_half(*a, 0) || is_in_first_half(*a, 1))
				ra(a);
			else
				rra(a);
		}
	}
	sort_three(a);
	if (*b && (*b)->next && (*b)->rank < (*b)->next->rank)
		sb(b);
	pa(a, b);
	pa(a, b);
}

int	count_nodes(t_stack *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}
