/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bogo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:18:07 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/23 15:43:57 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// This function will do random operations until the stack is sorted.
// The operations are, pa pb sa sb ss ra rb rr.
// The is_stack_a_sorted function is a used to check if the stack_a is sorted.
// At the end, it prints the total number of operations it did.

void	bogo_sort(t_list **stack_a, t_list **stack_b)
{
	int		i;

	i = 0;
	while (!is_stack_a_sorted(*stack_a, *stack_b))
	{
		i = rand() % 8;
		if (i == 0)
			sort_sa(stack_a, stack_b);
		else if (i == 1)
			sort_sb(stack_a, stack_b);
		else if (i == 2)
			sort_ss(stack_a, stack_b);
		else if (i == 3)
			sort_pa(stack_a, stack_b);
		else if (i == 4)
			sort_pb(stack_a, stack_b);
		else if (i == 5)
			sort_ra(stack_a, stack_b);
		else if (i == 6)
			sort_rb(stack_a, stack_b);
		else if (i == 7)
			sort_rr(stack_a, stack_b);
	}
}
