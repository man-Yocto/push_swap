/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_r_things.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocto <yocto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:52:05 by yocto             #+#    #+#             */
/*   Updated: 2025/10/16 16:19:17 by yocto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*second_last;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	last = *a;
	second_last = NULL;
	while (last->next)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = first;
	*a = last;
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*second_last;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	last = *b;
	second_last = NULL;
	while (last->next)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = first;
	*b = last;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}