/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:13:39 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/25 18:49:18 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Function algo_2 is called only if stack_a has 2 elements.
// If elem1 > elem2, swap them.
// Else, it means it's already sorted.
//
// Why the cast ? Because the content of the list is a void pointer.
// And we need to compare the values of the elements. So we need to cast
void	algo_2(t_list **a)
{
	int	elem1;
	int	elem2;

	elem1 = *(int *)(*a)->content;
	elem2 = *(int *)(*a)->next->content;
	if (elem1 > elem2)
		sa(&*a);
	return ;
}

// Function algo_3 is called only if stack_a has 3 elements.
// There is 5 possible cases:
// 1. elem2 < elem1 < elem3 --> sa
// 2. elem3 < elem2 < elem1 --> sa + rra
// 3. elem2 < elem3 < elem1 --> ra
// 4. elem1 < elem3 < elem2 --> sa + ra
// 5. elem3 < elem1 < elem2 --> rra
void	algo_3(t_list **stack_a)
{
	int	elem1;
	int	elem2;
	int	elem3;

	elem1 = *(int *)(*stack_a)->content;
	elem2 = *(int *)(*stack_a)->next->content;
	elem3 = *(int *)(*stack_a)->next->next->content;
	if (elem2 < elem1 && elem1 < elem3)
		sa(&*stack_a);
	else if (elem3 < elem2 && elem2 < elem1)
	{
		sa(&*stack_a);
		rra(&*stack_a);
	}
	else if (elem2 < elem3 && elem3 < elem1)
		ra(&*stack_a);
	else if (elem1 < elem3 && elem3 < elem2)
	{
		sa(&*stack_a);
		ra(&*stack_a);
	}
	else if (elem3 < elem1 && elem1 < elem2)
		rra(&*stack_a);
}
