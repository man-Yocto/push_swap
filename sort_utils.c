/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocto <yocto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:50:56 by yocto             #+#    #+#             */
/*   Updated: 2025/10/16 16:18:54 by yocto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_index(t_stack *stack)
{
	int		i;
	t_stack	*tmp1;
	int		rank;
	t_stack	*tmp2;

	i = 0;
	tmp1 = stack;
	while (tmp1)
	{
		rank = 0;
		tmp2 = stack;
		while (tmp2)
		{
			if (tmp2->num < tmp1->num)
				rank++;
			tmp2 = tmp2->next;
		}
		tmp1->rank = rank;
		tmp1->pos = i++;
		tmp1 = tmp1->next;
	}
}

void	go_and_sort(t_stack **a, t_stack **b)
{
	int	size;

	size = count_nodes(*a);
	assign_index(*a);
	if (size == 2 && !is_sorted(*a))
		sa(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
	else
		radix_sort(a, b);
}

void	free_stack(t_stack *stack)
{
	t_stack *tmp;
	while (stack)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}