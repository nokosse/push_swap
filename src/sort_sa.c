/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_sa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:13:53 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/25 18:56:51 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Swap the first 2 elements at the top of stack_a.
//
// 1 |          2 |
// 2 |     sa   1 |
// 3 |     -->  3 |
// 4 |          4 |
//---|---      ---|---
// A | B        A | B

// before sa :
// elem1 --> elem2.
// after sa :
// elem2 --> elem1.
void	sa(t_list **stack_a)
{
	t_list	*tmp;

	if (*stack_a && (*stack_a)->next)
	{
		tmp = (*stack_a)->next;
		(*stack_a)->next = tmp->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
	write(1, "sa\n", 3);
}
