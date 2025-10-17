#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				num;
	int				rank;
	int				pos;
	struct s_stack	*next;
}					t_stack;
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **b, t_stack **a);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				sort_three(t_stack **a);
void				sort_four(t_stack **a, t_stack **b);
void				sort_five(t_stack **a, t_stack **b);
void				radix_sort(t_stack **a, t_stack **b);
int					count_nodes(t_stack *stack);
t_stack				*new_node(int value);
void				add_back(t_stack **stack, t_stack *new);
void				error_and_exit(const char *message, t_stack *a, t_stack *b);
int					is_valid_number(const char *str);
long				ft_atol(const char *str);
void				make_list_and_sort(int argc, char **argv, t_stack **a,
						t_stack **b, int code);
int					is_sorted(t_stack *stack);
void				assign_index(t_stack *stack);
int					check_duplicates(t_stack *stack, char **argv, int code);
void				go_and_sort(t_stack **a, t_stack **b);
int					is_in_first_half(t_stack *stack, int rank);
void				free_stack(t_stack *stack);
void				free_split(char **splited);

#endif