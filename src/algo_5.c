/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:09:53 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/24 13:08:22 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// the algo_5() function split because of the 25 lines norm.
// It's the while loop that is split into algo_5_while().
void	algo_5_while(t_list *stack_a, t_list *stack_b, int *i, int *j)
{
	int		*tmp;

	tmp = stack_b->content;
	while (stack_a)
	{
		if (*(int *)(stack_a->content) > *tmp)
		{
			*i = 0;
			while (*i < *j)
			{
				sort_ra(&stack_a);
				*i = *i + 1;
			}
			sort_pa(&stack_a, &stack_b);
			break ;
		}
		stack_a = stack_a->next;
		*j = *j + 1;
	}
}

// If we have 4 element, do sort_pb one time, two time if we have 5 elements.
// Then run algo_3() on stack_a if it's not sorted.
// We need to push the last two or less elements on stack_b to stack_a.
// We have to find the correct position on stack_a before runnung sort_pa()
// For each element of stack_b (which is 2 or 1).
void	algo_5(t_list *stack_a, t_list *stack_b)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	sort_pb(&stack_a, &stack_b);
	sort_pb(&stack_a, &stack_b);
	if (!is_stack_a_sorted_no_b(stack_a))
		algo_3(&*stack_a, &*stack_b);
	algo_5_while(&*stack_a, &*stack_b, &i, &j);
}
