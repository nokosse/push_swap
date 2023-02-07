/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:41:22 by kvisouth          #+#    #+#             */
/*   Updated: 2023/02/07 15:18:26 by kvisouth         ###   ########.fr       */
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

// I could have used t_list from libft.
// We could use simplify_stack on content instead of index.
// But this structure is easier to use because our contents are integers.
// t_list is a void * so we would have to cast it every time we use it.
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

// Arguments validity check
int			count_digits_in_str(char *str);
int			check_args(int ac, char **av);
int			found_duplicates(long int *array, long int size);
int			found_intmax(long int *array, long int size);
int			found_ullmax(char **av);
long int	arraylen(int ac, char **av);
long int	*numeric_str_to_int_array(char *str);
long int	*av_to_int_array(int ac, char **av);

// Stack creation
long int	*init_array(int ac, char **av);
void		init_stack(long int *array, t_stack **stack, int ac, char **av);

// Sorting instructions
void		sa(t_stack **stack_a);
void		ra(t_stack **stack_a);
void		rra(t_stack **stack_a);
void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);

// Sorting algorithms & verification
void		simplify_stack(t_stack *stack, int size);
void		sorting_hub(t_stack **a, t_stack **b, int size);
int			is_stack_a_sorted(t_stack *stack_a, t_stack *stack_b);
int			is_stack_a_sorted_no_b(t_stack *stack_a);
void		algo_2(t_stack **stack_a);
void		algo_3(t_stack **stack_a);
void		algo_4(t_stack **stack_a, t_stack **stack_b);
void		algo_5(t_stack **stack_a, t_stack **stack_b);
void		algo_radix(t_stack **a, t_stack **b, int size);

#endif