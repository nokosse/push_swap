/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:09:53 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/24 13:17:29 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// If we have 4 element, do sort_pb one time, two time if we have 5 elements.
// Then run algo_3() on stack_a if it's not sorted.
// We need to push the last two or less elements on stack_b to stack_a.
// We have to find the correct position on stack_a before runnung sort_pa() operation
// For each element of stack_b (which is 2 or 1).
void	algo_5(t_list *stack_a, t_list *stack_b)
{
	int		i;
	int		j;
	int		*tmp;

	i = 0;
	j = 0;
	if (ft_lstsize(stack_a) == 4)
		sort_pb(&stack_a, &stack_b);
	else if (ft_lstsize(stack_a) == 5)
	{
		sort_pb(&stack_a, &stack_b);
		sort_pb(&stack_a, &stack_b);
	}
	if (!is_stack_a_sorted_no_b(stack_a))
		algo_3(&*stack_a, &*stack_b);
	while (stack_b)
	{
		tmp = stack_b->content;
		while (stack_a)
		{
			if (*(int *)(stack_a->content) > *tmp)
				break ;
			stack_a = stack_a->next;
			i++;
		}
		while (j < i)
		{
			sort_ra(&stack_a);
			j++;
		}
		sort_pa(&stack_a, &stack_b);
		i = 0;
		j = 0;
	}
}
