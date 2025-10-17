/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocto <yocto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:52:34 by yocto             #+#    #+#             */
/*   Updated: 2025/10/17 18:05:22 by yocto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *new_node(int value){
    t_stack *node = malloc(sizeof(t_stack));
    if (!node)
        return NULL;
    node->num = value;
    node->next = NULL;
    return node;
}

void error_and_exit(const char *message, t_stack *a, t_stack *b)
{
    write(2, message, ft_strlen(message));
    if (a)
        free_stack(a);
    if (b)
        free_stack(b);
    exit(EXIT_FAILURE);
}


int is_valid_number(const char *str){
    if (!str || !*str)
        return 0;
    if (*str == '-' || *str == '+')
        str++;
    if (!*str)
        return 0;
    while (*str){
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}
void	add_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (!*stack)
	{
		*stack = new;
		return ;
	}
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = new;
}
long	ft_atol(const char *str)
{
	long	sign;
	long	result;

	if (!str || !*str)
		error_and_exit("Error\n", NULL, NULL);
	sign = 1;
	result = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
