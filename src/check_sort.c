/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:34:48 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/27 15:16:30 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// This function return 1 if :
// - stack_a is sorted in ascending order.
// - stack_b is empty.
// Otherwise, it returns 0.
int	is_stack_a_sorted(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*current;

	current = stack_a;
	if (stack_b)
		return (0);
	if (!stack_a || !stack_a->next)
		return (1);
	while (current->next)
	{
		if ((current->content) > (current->next->content))
			return (0);
		current = current->next;
	}
	return (1);
}

// This function act similarly to is_stack_a_sorted()
// This one does not check if stack_b is empty.
int	is_stack_a_sorted_no_b(t_stack *stack_a)
{
	t_stack	*current;

	current = stack_a;
	if (!stack_a || !stack_a->next)
		return (1);
	while (current->next)
	{
		if ((current->content) > (current->next->content))
			return (0);
		current = current->next;
	}
	return (1);
}
