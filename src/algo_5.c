/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:09:53 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/23 20:25:14 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// It does 'pb' two times so the stack_a has 3 elements.
// Then it uses algo_3 to sort the stack_a.
// And algo_2_b to sort the stack_b.
// Then it does 'pa' two times to put the elements back to stack_a.
// Simple as that !

// void	algo_2_b(t_list *stack_b);
// void	algo_3(t_list *stack_a, t_list *stack_b);
void	algo_5(t_list *stack_a, t_list *stack_b)
{
    int	i;

    i = 0;
    while (i < 2)
    {
        sort_pb(stack_a, stack_b);
        i++;
    }
    algo_3(stack_a, stack_b);
    algo_2_b(stack_b);
    i = 0;
    while (i < 2)
    {
        sort_pa(stack_a, stack_b);
        i++;
    }
}
//TODO : Fix this