/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_sb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:14:48 by kvisouth          #+#    #+#             */
/*   Updated: 2023/02/01 19:44:29 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Swap the first 2 elements at the top of stack_b.
//
//   | 1          | 2
//   | 2   sb     | 1 
//   | 3   -->    | 3
//   | 4          | 4
//---|---      ---|---
// A | B        A | B

void	sb(t_stack **stack_b)
{
	t_stack	*tmp;

	if (*stack_b && (*stack_b)->next)
	{
		tmp = (*stack_b)->next;
		(*stack_b)->next = tmp->next;
		tmp->next = *stack_b;
		*stack_b = tmp;
	}
	write(1, "sb\n", 3);
}
