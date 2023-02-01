/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:41:22 by kvisouth          #+#    #+#             */
/*   Updated: 2023/02/01 12:43:52 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <stdint.h>
# include <fcntl.h>
# include <limits.h>
# include "../libft/inc/libft.h"
# include "../libft/inc/ft_printf.h"

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}	t_stack;

// Linked list s_stack
void		ft_stkadd_back(t_stack **stack, t_stack *new);
t_stack		*ft_stknew(int content);
void		ft_stkclear(t_stack **stack);

// Print stacks
void		ft_print_both_lst(t_stack *stack);
void		ft_print_index(t_stack *stack);
void		ft_print_content(t_stack *stack);

// Arguments validity check
int			count_digits_in_str(char *str);
int			check_args(int ac, char **av);
int			found_duplicates(long int *array, long int size);
int			found_intmax(long int *array, long int size);
long int	arraylen(int ac, char **av);
long int	*numeric_str_to_int_array(char *str);
long int	*av_to_int_array(int ac, char **av);

// Stack creation
long int	*init_array(int ac, char **av);
void		init_stack(long int *array, t_stack **stack, int ac, char **av);

// Sorting instructions
void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		rra(t_stack **stack_a);

// Sorting algorithms & verification
void	simplify_stack(t_stack *stack, int size);
void		sorting_hub(t_stack **a, t_stack **b, int size);
int			is_stack_a_sorted(t_stack *stack_a, t_stack *stack_b);
int			is_stack_a_sorted_no_b(t_stack *stack_a);
void		algo_2(t_stack **stack_a);
void		algo_3(t_stack **stack_a);
void		algo_4(t_stack **stack_a, t_stack **stack_b);
void		algo_5(t_stack **stack_a, t_stack **stack_b);
void		algo_100(t_stack **a, t_stack **b, int size);

#endif