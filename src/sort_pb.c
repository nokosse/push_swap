/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_pb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:16:17 by kvisouth          #+#    #+#             */
/*   Updated: 2023/02/01 19:43:02 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Takes the first element of stack_a and put it at the first position of
// stack_b. It becomes the new first element of stack_b.
//
//   |            |
//   |     pb     | 3
// 3 | 1   -->    | 1
// 4 | 2        4 | 2
//---|---      ---|---
// A | B        A | B

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (*stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = *stack_b;
		*stack_b = tmp;
	}
	write(1, "pb\n", 3);
}
