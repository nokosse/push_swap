/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:44:12 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/27 15:06:43 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Takes the last element of stack_a and put it at the first position of
// stack_a. It becomes the new first element of stack_a.
// All other elements are shifted down by one.
//
// 1 |          4 |  
// 2 |     rra  1 |  
// 3 |     -->  2 |  
// 4 |          3 |  
//---|---      ---|---
// A | B        A | B

void	rra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (*stack_a && (*stack_a)->next)
	{
		tmp = *stack_a;
		while (tmp->next->next)
			tmp = tmp->next;
		tmp2 = tmp->next;
		tmp->next = NULL;
		tmp2->next = *stack_a;
		*stack_a = tmp2;
	}
	ft_printf("rra\n");
}
