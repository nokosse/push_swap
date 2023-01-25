/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:17:06 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/25 15:39:08 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Same as ra but on stack_b.
//
//   | 1          | 2
//   | 2   rb     | 3 
//   | 3   -->    | 4
//   | 4          | 1
//---|---      ---|---
// A | B        A | B

void	rb(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (*stack_b && (*stack_b)->next)
	{
		tmp = *stack_b;
		tmp2 = *stack_b;
		while (tmp2->next)
			tmp2 = tmp2->next;
		*stack_b = (*stack_b)->next;
		tmp2->next = tmp;
		tmp->next = NULL;
	}
	ft_printf("rb\n");
}
