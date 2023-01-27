/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:16:53 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/27 15:06:57 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Takes the first element of stack_a and put it at the end of the stack.
// The first element becomes the last one.
// All the other elements are shifted up by one.
//
// 1 |          2 |
// 2 |     ra   3 |
// 3 |     -->  4 |
// 4 |          1 |
//---|---      ---|---
// A | B        A | B

void	ra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (*stack_a && (*stack_a)->next)
	{
		tmp = *stack_a;
		tmp2 = *stack_a;
		while (tmp2->next)
			tmp2 = tmp2->next;
		*stack_a = (*stack_a)->next;
		tmp2->next = tmp;
		tmp->next = NULL;
	}
	ft_printf("ra\n");
}
