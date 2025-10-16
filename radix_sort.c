/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocto <yocto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:51:53 by yocto             #+#    #+#             */
/*   Updated: 2025/10/16 16:19:07 by yocto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_rank(t_stack *stack)
{
	int	max;

	max = 0;
	while (stack)
	{
		if (stack->rank > max)
			max = stack->rank;
		stack = stack->next;
	}
	return (max);
}

int	get_max_bits(int max)
{
	int	bits;

	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int	size;
	int	max_rank;
	int	max_bits;
	int	i;
	int	j;

	size = count_nodes(*a);
	max_rank = get_max_rank(*a);
	max_bits = get_max_bits(max_rank);
	i = -1;
	while (++i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (((*a)->rank >> i) & 1)
				ra(a);
			else
				pb(b, a);
			j++;
		}
		while (*b)
			pa(a, b);
	}
}