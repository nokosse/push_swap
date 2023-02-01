/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_pa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:15:48 by kvisouth          #+#    #+#             */
/*   Updated: 2023/02/01 19:42:52 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Takes the first element of stack_b and put it at the first position of
// stack_a. It becomes the new first element of stack_a.
//   |            |
//   |     pa   1 |
// 3 | 1   -->  3 |
// 4 | 2        4 | 2
//---|---      ---|---
// A | B        A | B

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (*stack_b)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
	write(1, "pa\n", 3);
}
