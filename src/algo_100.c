/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:05:40 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/30 17:37:48 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// The hard part of the project start here

// Function simplify_stack will simplify the numbers in the stack.
// stack_a : 32 -42 12 0 20 3
// Will become
// stack_a : 6 1 4 2 5 3
// It assign the number an order from 1 to the number of numbers in the stack
// But not moving the numbers in the stack.
// typedef struct s_stack
// {
// 	int				content;
// 	int				index;
// 	struct s_stack	*next;
// }	t_stack;

void    simplify_stack(t_stack *stack, int size)
{
    ft_printf("%d\n", size);
    (void)stack;
}

void    algo_100(t_stack **a, t_stack **b, int size)
{
    simplify_stack(*a, size);
    (void)a;
    (void)b;
}