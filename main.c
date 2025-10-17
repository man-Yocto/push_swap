/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocto <yocto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:53:04 by yocto             #+#    #+#             */
/*   Updated: 2025/10/17 18:06:01 by yocto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_duplicates(t_stack *stack)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = stack;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		while (tmp2)
		{
			if (tmp1->num == tmp2->num)
				error_and_exit("Error\n", stack, NULL);
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
}

int	is_sorted(t_stack *stack)
{
	while (stack && stack->next)
	{
		if (stack->num > stack->next->num)
			return (0);
		stack = stack->next;
	}
	return (1);
}
void	make_list_and_sort(int argc, char **argv, t_stack **a, t_stack **b)
{
	int		i;
	long	value;
	t_stack	*node;

	i = 0;
	while (i < argc)
	{
		if (!is_valid_number(argv[i]))
			error_and_exit("Error\n", *a, *b);
		value = ft_atol(argv[i]);
		if (value > INT_MAX || value < INT_MIN)
			error_and_exit("Error\n", *a, *b);
		node = new_node((int)value);
		if (!node)
			error_and_exit("Error\n", *a, *b);
		add_back(a, node);
		i++;
	}
	check_duplicates(*a);
	if (is_sorted(*a))
		return ;
	go_and_sort(a, b);
}

void	free_split(char **splited)
{
	int	i;

	i = 0;
	while (splited[i])
	{
		free(splited[i]);
		i++;
	}
	free(splited);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**args;
	int		arg_count;

	a = NULL;
	b = NULL;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (!args || !*args)
		{
			free_split(args);
			error_and_exit("Error\n", a, b);
		}
		arg_count = 0;
		while (args[arg_count])
			arg_count++;
		make_list_and_sort(arg_count, args, &a, &b);
		free_split(args);
	}
	else if (argc > 2)
		make_list_and_sort(argc - 1, argv + 1, &a, &b);
	free_stack(a);
	free_stack(b);
	return (0);
}
